
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wsm_scan {int num_channels; int num_ssids; int band; int type; int flags; int max_tx_rate; int num_probes; int probe_delay; TYPE_2__* ssids; TYPE_1__* ch; int auto_scan_interval; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;
struct TYPE_4__ {int * ssid; int length; } ;
struct TYPE_3__ {int max_chan_time; int min_chan_time; int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wsm_buf*,int *,int) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (struct wsm_buf*,int ) ;
 int FUNC_3 (struct wsm_buf*,int) ;
 int VAR_3 ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*,struct wsm_buf*,int *,int ,int ) ;
 int FUNC_6 (struct cw1200_common*) ;

int FUNC_7(struct cw1200_common *VAR_4, const struct wsm_scan *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct wsm_buf *VAR_8 = &VAR_4->wsm_cmd_buf;

 if (VAR_5->num_channels > 48)
  return -VAR_0;

 if (VAR_5->num_ssids > 2)
  return -VAR_0;

 if (VAR_5->band > 1)
  return -VAR_0;

 FUNC_4(VAR_4);

 FUNC_3(VAR_8, VAR_5->band);
 FUNC_3(VAR_8, VAR_5->type);
 FUNC_3(VAR_8, VAR_5->flags);
 FUNC_3(VAR_8, VAR_5->max_tx_rate);
 FUNC_2(VAR_8, VAR_5->auto_scan_interval);
 FUNC_3(VAR_8, VAR_5->num_probes);
 FUNC_3(VAR_8, VAR_5->num_channels);
 FUNC_3(VAR_8, VAR_5->num_ssids);
 FUNC_3(VAR_8, VAR_5->probe_delay);

 for (VAR_6 = 0; VAR_6 < VAR_5->num_channels; ++VAR_6) {
  FUNC_1(VAR_8, VAR_5->ch[VAR_6].number);
  FUNC_1(VAR_8, 0);
  FUNC_2(VAR_8, VAR_5->ch[VAR_6].min_chan_time);
  FUNC_2(VAR_8, VAR_5->ch[VAR_6].max_chan_time);
  FUNC_2(VAR_8, 0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->num_ssids; ++VAR_6) {
  FUNC_2(VAR_8, VAR_5->ssids[VAR_6].length);
  FUNC_0(VAR_8, &VAR_5->ssids[VAR_6].ssid[0],
   sizeof(VAR_5->ssids[VAR_6].ssid));
 }

 VAR_7 = FUNC_5(VAR_4, VAR_8, ((void*)0),
      VAR_3, VAR_2);
 FUNC_6(VAR_4);
 return VAR_7;

nomem:
 FUNC_6(VAR_4);
 return -VAR_1;
}
