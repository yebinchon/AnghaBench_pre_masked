
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {int enc_type; int single_tid_rc; TYPE_1__* key; scalar_t__ wep_type; void* def_wep_idx; void* sta_index; } ;
struct wcn36xx_hal_set_sta_key_req_msg {TYPE_3__ header; TYPE_2__ set_sta_key_params; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
typedef enum ani_ed_type { ____Placeholder_ani_ed_type } ani_ed_type ;
struct TYPE_4__ {int unicast; int key; void* length; scalar_t__ pae_role; int direction; void* id; } ;


 int FUNC_0 (struct wcn36xx_hal_set_sta_key_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_set_sta_key_req_msg) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,void**,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct wcn36xx*,int ) ;

int FUNC_8(struct wcn36xx *VAR_4,
      enum ani_ed_type VAR_5,
      u8 VAR_6,
      u8 VAR_7,
      u8 *VAR_8,
      u8 VAR_9)
{
 struct wcn36xx_hal_set_sta_key_req_msg VAR_10;
 int VAR_11;

 FUNC_3(&VAR_4->hal_mutex);
 FUNC_0(VAR_10, VAR_2);

 VAR_10.set_sta_key_params.sta_index = VAR_9;
 VAR_10.set_sta_key_params.enc_type = VAR_5;

 if (VAR_5 == VAR_0 ||
     VAR_5 == VAR_1) {

  VAR_10.set_sta_key_params.def_wep_idx = VAR_6;
  VAR_10.set_sta_key_params.wep_type = 0;
 } else {
  VAR_10.set_sta_key_params.key[0].id = VAR_6;
  VAR_10.set_sta_key_params.key[0].unicast = 1;
  VAR_10.set_sta_key_params.key[0].direction = VAR_3;
  VAR_10.set_sta_key_params.key[0].pae_role = 0;
  VAR_10.set_sta_key_params.key[0].length = VAR_7;
  FUNC_2(VAR_10.set_sta_key_params.key[0].key, VAR_8, VAR_7);
 }

 VAR_10.set_sta_key_params.single_tid_rc = 1;

 FUNC_1(VAR_4->hal_buf, VAR_10);

 VAR_11 = FUNC_7(VAR_4, VAR_10.header.len);
 if (VAR_11) {
  FUNC_5("Sending hal_set_stakey failed\n");
  goto out;
 }
 VAR_11 = FUNC_6(VAR_4->hal_buf, VAR_4->hal_rsp_len);
 if (VAR_11) {
  FUNC_5("hal_set_stakey response failed err=%d\n", VAR_11);
  goto out;
 }
out:
 FUNC_4(&VAR_4->hal_mutex);
 return VAR_11;
}
