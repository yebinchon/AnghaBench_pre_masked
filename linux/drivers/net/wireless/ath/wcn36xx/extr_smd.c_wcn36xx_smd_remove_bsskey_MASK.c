
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_remove_bss_key_req_msg {int enc_type; TYPE_1__ header; void* key_id; void* bss_idx; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
typedef enum ani_ed_type { ____Placeholder_ani_ed_type } ani_ed_type ;


 int FUNC_0 (struct wcn36xx_hal_remove_bss_key_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_remove_bss_key_req_msg) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wcn36xx*,int ) ;

int FUNC_7(struct wcn36xx *VAR_1,
         enum ani_ed_type VAR_2,
         u8 VAR_3,
         u8 VAR_4)
{
 struct wcn36xx_hal_remove_bss_key_req_msg VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1->hal_mutex);
 FUNC_0(VAR_5, VAR_0);
 VAR_5.bss_idx = VAR_3;
 VAR_5.enc_type = VAR_2;
 VAR_5.key_id = VAR_4;

 FUNC_1(VAR_1->hal_buf, VAR_5);

 VAR_6 = FUNC_6(VAR_1, VAR_5.header.len);
 if (VAR_6) {
  FUNC_4("Sending hal_remove_bsskey failed\n");
  goto out;
 }
 VAR_6 = FUNC_5(VAR_1->hal_buf, VAR_1->hal_rsp_len);
 if (VAR_6) {
  FUNC_4("hal_remove_bsskey response failed err=%d\n", VAR_6);
  goto out;
 }
out:
 FUNC_3(&VAR_1->hal_mutex);
 return VAR_6;
}
