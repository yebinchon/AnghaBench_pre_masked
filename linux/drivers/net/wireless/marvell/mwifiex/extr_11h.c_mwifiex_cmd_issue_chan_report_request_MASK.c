
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mwifiex_radar_params {TYPE_4__* chandef; scalar_t__ cac_time_ms; } ;
struct mwifiex_private {int adapter; } ;
struct TYPE_6__ {int chan_width; int chan_num; void* start_freq; } ;
struct host_cmd_ds_chan_rpt_req {int msec_dwell_time; TYPE_2__ chan_desc; } ;
struct TYPE_5__ {struct host_cmd_ds_chan_rpt_req chan_rpt_req; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;
struct TYPE_8__ {TYPE_3__* chan; int width; } ;
struct TYPE_7__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void**,int) ;
 int FUNC_3 (int ,int ,char*,...) ;

int FUNC_4(struct mwifiex_private *VAR_4,
       struct host_cmd_ds_command *VAR_5,
       void *VAR_6)
{
 struct host_cmd_ds_chan_rpt_req *VAR_7 = &VAR_5->params.chan_rpt_req;
 struct mwifiex_radar_params *VAR_8 = (void *)VAR_6;

 VAR_5->command = FUNC_0(VAR_0);
 VAR_5->size = FUNC_0(VAR_3);
 FUNC_2(&VAR_5->size,
          sizeof(struct host_cmd_ds_chan_rpt_req));

 VAR_7->chan_desc.start_freq = FUNC_0(VAR_2);
 VAR_7->chan_desc.chan_num = VAR_8->chandef->chan->hw_value;
 VAR_7->chan_desc.chan_width = VAR_8->chandef->width;
 VAR_7->msec_dwell_time = FUNC_1(VAR_8->cac_time_ms);

 if (VAR_8->cac_time_ms)
  FUNC_3(VAR_4->adapter, VAR_1,
       "11h: issuing DFS Radar check for channel=%d\n",
       VAR_8->chandef->chan->hw_value);
 else
  FUNC_3(VAR_4->adapter, VAR_1, "cancelling CAC\n");

 return 0;
}
