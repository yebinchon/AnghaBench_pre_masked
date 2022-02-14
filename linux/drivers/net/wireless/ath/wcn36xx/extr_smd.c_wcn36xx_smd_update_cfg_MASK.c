
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {size_t len; } ;
struct wcn36xx_hal_update_cfg_req_msg {size_t len; TYPE_1__ header; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; scalar_t__ hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_update_cfg_req_msg,int ) ;
 int FUNC_1 (scalar_t__,struct wcn36xx_hal_update_cfg_req_msg) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wcn36xx*,size_t*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct wcn36xx*,size_t) ;

int FUNC_8(struct wcn36xx *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct wcn36xx_hal_update_cfg_req_msg VAR_4, *VAR_5;
 size_t VAR_6;
 int VAR_7;

 FUNC_2(&VAR_1->hal_mutex);
 FUNC_0(VAR_4, VAR_0);

 FUNC_1(VAR_1->hal_buf, VAR_4);

 VAR_5 = (struct wcn36xx_hal_update_cfg_req_msg *) VAR_1->hal_buf;
 VAR_6 = VAR_4.header.len;

 FUNC_4(VAR_1, &VAR_6, VAR_2, VAR_3);
 VAR_5->header.len = VAR_6;
 VAR_5->len = VAR_6 - sizeof(*VAR_5);

 VAR_7 = FUNC_7(VAR_1, VAR_5->header.len);
 if (VAR_7) {
  FUNC_5("Sending hal_update_cfg failed\n");
  goto out;
 }
 VAR_7 = FUNC_6(VAR_1->hal_buf, VAR_1->hal_rsp_len);
 if (VAR_7) {
  FUNC_5("hal_update_cfg response failed err=%d\n", VAR_7);
  goto out;
 }
out:
 FUNC_3(&VAR_1->hal_mutex);
 return VAR_7;
}
