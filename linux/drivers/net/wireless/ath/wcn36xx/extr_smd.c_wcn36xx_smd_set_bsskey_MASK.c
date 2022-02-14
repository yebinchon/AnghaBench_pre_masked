
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_4__ {int len; } ;
struct wcn36xx_hal_set_bss_key_req_msg {int enc_type; int num_keys; TYPE_2__ header; TYPE_1__* keys; void* bss_idx; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
typedef enum ani_ed_type { ____Placeholder_ani_ed_type } ani_ed_type ;
struct TYPE_3__ {int key; void* length; scalar_t__ pae_role; int direction; scalar_t__ unicast; void* id; } ;


 int FUNC_0 (struct wcn36xx_hal_set_bss_key_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_set_bss_key_req_msg) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,void**,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wcn36xx*,int ) ;

int FUNC_8(struct wcn36xx *VAR_2,
      enum ani_ed_type VAR_3,
      u8 VAR_4,
      u8 VAR_5,
      u8 VAR_6,
      u8 *VAR_7)
{
 struct wcn36xx_hal_set_bss_key_req_msg VAR_8;
 int VAR_9;

 FUNC_3(&VAR_2->hal_mutex);
 FUNC_0(VAR_8, VAR_1);
 VAR_8.bss_idx = VAR_4;
 VAR_8.enc_type = VAR_3;
 VAR_8.num_keys = 1;
 VAR_8.keys[0].id = VAR_5;
 VAR_8.keys[0].unicast = 0;
 VAR_8.keys[0].direction = VAR_0;
 VAR_8.keys[0].pae_role = 0;
 VAR_8.keys[0].length = VAR_6;
 FUNC_2(VAR_8.keys[0].key, VAR_7, VAR_6);

 FUNC_1(VAR_2->hal_buf, VAR_8);

 VAR_9 = FUNC_7(VAR_2, VAR_8.header.len);
 if (VAR_9) {
  FUNC_5("Sending hal_set_bsskey failed\n");
  goto out;
 }
 VAR_9 = FUNC_6(VAR_2->hal_buf, VAR_2->hal_rsp_len);
 if (VAR_9) {
  FUNC_5("hal_set_bsskey response failed err=%d\n", VAR_9);
  goto out;
 }
out:
 FUNC_4(&VAR_2->hal_mutex);
 return VAR_9;
}
