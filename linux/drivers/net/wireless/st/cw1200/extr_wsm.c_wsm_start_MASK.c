
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_start {int basic_rate_set; int ssid; int ssid_len; int probe_delay; int preamble; int dtim_period; int beacon_interval; int ct_window; int channel_number; int band; int mode; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int tx_burst_idx; struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,int ,int) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (struct wsm_buf*,int ) ;
 int FUNC_3 (struct wsm_buf*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*,struct wsm_buf*,int *,int ,int ) ;
 int FUNC_6 (struct cw1200_common*) ;

int FUNC_7(struct cw1200_common *VAR_3, const struct wsm_start *VAR_4)
{
 int VAR_5;
 struct wsm_buf *VAR_6 = &VAR_3->wsm_cmd_buf;

 FUNC_4(VAR_3);

 FUNC_3(VAR_6, VAR_4->mode);
 FUNC_3(VAR_6, VAR_4->band);
 FUNC_1(VAR_6, VAR_4->channel_number);
 FUNC_2(VAR_6, VAR_4->ct_window);
 FUNC_2(VAR_6, VAR_4->beacon_interval);
 FUNC_3(VAR_6, VAR_4->dtim_period);
 FUNC_3(VAR_6, VAR_4->preamble);
 FUNC_3(VAR_6, VAR_4->probe_delay);
 FUNC_3(VAR_6, VAR_4->ssid_len);
 FUNC_0(VAR_6, VAR_4->ssid, sizeof(VAR_4->ssid));
 FUNC_2(VAR_6, VAR_4->basic_rate_set);

 VAR_3->tx_burst_idx = -1;
 VAR_5 = FUNC_5(VAR_3, VAR_6, ((void*)0),
      VAR_2, VAR_1);

 FUNC_6(VAR_3);
 return VAR_5;

nomem:
 FUNC_6(VAR_3);
 return -VAR_0;
}
