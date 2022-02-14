
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_join_cnf {int status; } ;
struct wsm_join {int basic_rate_set; int beacon_interval; int * ssid; int ssid_len; int flags; int dtim_period; int probe_for_join; int preamble_type; int atim_window; int * bssid; int channel_number; int band; int mode; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int tx_burst_idx; int join_complete_status; struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wsm_buf*,int *,int) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (struct wsm_buf*,int ) ;
 int FUNC_3 (struct wsm_buf*,int ) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*,struct wsm_buf*,struct wsm_join_cnf*,int ,int ) ;
 int FUNC_6 (struct cw1200_common*) ;

int FUNC_7(struct cw1200_common *VAR_3, struct wsm_join *VAR_4)
{
 int VAR_5;
 struct wsm_buf *VAR_6 = &VAR_3->wsm_cmd_buf;
 struct wsm_join_cnf VAR_7;
 FUNC_4(VAR_3);

 FUNC_3(VAR_6, VAR_4->mode);
 FUNC_3(VAR_6, VAR_4->band);
 FUNC_1(VAR_6, VAR_4->channel_number);
 FUNC_0(VAR_6, &VAR_4->bssid[0], sizeof(VAR_4->bssid));
 FUNC_1(VAR_6, VAR_4->atim_window);
 FUNC_3(VAR_6, VAR_4->preamble_type);
 FUNC_3(VAR_6, VAR_4->probe_for_join);
 FUNC_3(VAR_6, VAR_4->dtim_period);
 FUNC_3(VAR_6, VAR_4->flags);
 FUNC_2(VAR_6, VAR_4->ssid_len);
 FUNC_0(VAR_6, &VAR_4->ssid[0], sizeof(VAR_4->ssid));
 FUNC_2(VAR_6, VAR_4->beacon_interval);
 FUNC_2(VAR_6, VAR_4->basic_rate_set);

 VAR_3->tx_burst_idx = -1;
 VAR_5 = FUNC_5(VAR_3, VAR_6, &VAR_7,
      VAR_2, VAR_1);


 VAR_3->join_complete_status = VAR_7.status;

 FUNC_6(VAR_3);
 return VAR_5;

nomem:
 FUNC_6(VAR_3);
 return -VAR_0;
}
