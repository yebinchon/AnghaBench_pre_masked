
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_dump_cmd_req_msg {TYPE_1__ header; void* arg5; void* arg4; void* arg3; void* arg2; void* arg1; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_dump_cmd_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_dump_cmd_req_msg) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wcn36xx*,int ) ;

int FUNC_7(struct wcn36xx *VAR_1, u32 VAR_2, u32 VAR_3,
        u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct wcn36xx_hal_dump_cmd_req_msg VAR_7;
 int VAR_8;

 FUNC_2(&VAR_1->hal_mutex);
 FUNC_0(VAR_7, VAR_0);

 VAR_7.arg1 = VAR_2;
 VAR_7.arg2 = VAR_3;
 VAR_7.arg3 = VAR_4;
 VAR_7.arg4 = VAR_5;
 VAR_7.arg5 = VAR_6;

 FUNC_1(VAR_1->hal_buf, VAR_7);

 VAR_8 = FUNC_6(VAR_1, VAR_7.header.len);
 if (VAR_8) {
  FUNC_4("Sending hal_dump_cmd failed\n");
  goto out;
 }
 VAR_8 = FUNC_5(VAR_1->hal_buf, VAR_1->hal_rsp_len);
 if (VAR_8) {
  FUNC_4("hal_dump_cmd response failed err=%d\n", VAR_8);
  goto out;
 }
out:
 FUNC_3(&VAR_1->hal_mutex);
 return VAR_8;
}
