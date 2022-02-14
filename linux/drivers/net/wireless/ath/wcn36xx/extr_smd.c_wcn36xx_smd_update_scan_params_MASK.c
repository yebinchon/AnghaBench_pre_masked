
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_update_scan_params_req_ex {int dot11d_enabled; int dot11d_resolved; size_t channel_count; int active_min_ch_time; int active_max_ch_time; int passive_min_ch_time; int passive_max_ch_time; TYPE_1__ header; int state; int channels; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_update_scan_params_req_ex,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct wcn36xx_hal_update_scan_params_req_ex) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct wcn36xx*,int ) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct wcn36xx *VAR_3,
       u8 *VAR_4, size_t VAR_5)
{
 struct wcn36xx_hal_update_scan_params_req_ex VAR_6;
 int VAR_7;

 FUNC_3(&VAR_3->hal_mutex);
 FUNC_0(VAR_6, VAR_2);

 VAR_6.dot11d_enabled = 0;
 VAR_6.dot11d_resolved = 1;

 VAR_6.channel_count = VAR_5;
 FUNC_2(VAR_6.channels, VAR_4, VAR_5);
 VAR_6.active_min_ch_time = 60;
 VAR_6.active_max_ch_time = 120;
 VAR_6.passive_min_ch_time = 60;
 VAR_6.passive_max_ch_time = 110;
 VAR_6.state = VAR_0;

 FUNC_1(VAR_3->hal_buf, VAR_6);

 FUNC_5(VAR_1,
      "hal update scan params channel_count %d\n",
      VAR_6.channel_count);

 VAR_7 = FUNC_7(VAR_3, VAR_6.header.len);
 if (VAR_7) {
  FUNC_6("Sending hal_update_scan_params failed\n");
  goto out;
 }
 VAR_7 = FUNC_8(VAR_3->hal_buf,
       VAR_3->hal_rsp_len);
 if (VAR_7) {
  FUNC_6("hal_update_scan_params response failed err=%d\n",
       VAR_7);
  goto out;
 }
out:
 FUNC_4(&VAR_3->hal_mutex);
 return VAR_7;
}
