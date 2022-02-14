
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_stop_scan_offload_req_msg {TYPE_1__ header; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_stop_scan_offload_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_stop_scan_offload_req_msg) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wcn36xx*,int ) ;

int FUNC_8(struct wcn36xx *VAR_2)
{
 struct wcn36xx_hal_stop_scan_offload_req_msg VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->hal_mutex);
 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_2->hal_buf, VAR_3);

 FUNC_4(VAR_0, "hal stop hw-scan\n");

 VAR_4 = FUNC_7(VAR_2, VAR_3.header.len);
 if (VAR_4) {
  FUNC_5("Sending hal_stop_scan_offload failed\n");
  goto out;
 }
 VAR_4 = FUNC_6(VAR_2->hal_buf, VAR_2->hal_rsp_len);
 if (VAR_4) {
  FUNC_5("hal_stop_scan_offload response failed err=%d\n",
       VAR_4);
  goto out;
 }
out:
 FUNC_3(&VAR_2->hal_mutex);
 return VAR_4;
}
