
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int *** salt; int *** salt_iv; } ;
struct TYPE_6__ {int flags; int enc_mode; void* sw_sa_handle; TYPE_2__ gcm; int **** key_enc; } ;
struct mlx5_ifc_fpga_ipsec_sa {TYPE_3__ ipsec_sa_v1; void* esn; } ;
struct mlx5_core_dev {int dummy; } ;
struct aes_gcm_keymat {int key_len; int salt; int seq_iv; int * aes_key; } ;
struct TYPE_4__ {struct aes_gcm_keymat aes_gcm; } ;
struct mlx5_accel_esp_xfrm_attrs {int flags; int action; int sa_handle; int esn; TYPE_1__ keymat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ***,int *,int) ;

__attribute__((used)) static void
FUNC_2(struct mlx5_core_dev *VAR_11,
         const struct mlx5_accel_esp_xfrm_attrs *VAR_12,
         struct mlx5_ifc_fpga_ipsec_sa *VAR_13)
{
 const struct aes_gcm_keymat *VAR_14 = &VAR_12->keymat.aes_gcm;


 FUNC_1(&VAR_13->ipsec_sa_v1.key_enc, VAR_14->aes_key,
        VAR_14->key_len / 8);

 if (VAR_14->key_len == 128)
  FUNC_1(VAR_13->ipsec_sa_v1.key_enc[16],
         VAR_14->aes_key, VAR_14->key_len / 8);


 FUNC_1(VAR_13->ipsec_sa_v1.gcm.salt_iv, &VAR_14->seq_iv,
        sizeof(VAR_14->seq_iv));
 FUNC_1(VAR_13->ipsec_sa_v1.gcm.salt, &VAR_14->salt,
        sizeof(VAR_14->salt));


 if (VAR_12->flags & VAR_2) {
  VAR_13->ipsec_sa_v1.flags |= VAR_6;
  VAR_13->ipsec_sa_v1.flags |=
    (VAR_12->flags &
     VAR_1) ?
     VAR_7 : 0;
  VAR_13->esn = FUNC_0(VAR_12->esn);
 } else {
  VAR_13->ipsec_sa_v1.flags &= ~VAR_6;
  VAR_13->ipsec_sa_v1.flags &=
    ~(VAR_12->flags &
      VAR_1) ?
     VAR_7 : 0;
  VAR_13->esn = 0;
 }


 VAR_13->ipsec_sa_v1.sw_sa_handle = FUNC_0(VAR_12->sa_handle);


 switch (VAR_14->key_len) {
 case 128:
  VAR_13->ipsec_sa_v1.enc_mode =
   VAR_4;
  break;
 case 256:
  VAR_13->ipsec_sa_v1.enc_mode =
   VAR_5;
  break;
 }


 VAR_13->ipsec_sa_v1.flags |= VAR_9 |
   VAR_10 |
   VAR_8;

 if (VAR_12->action & VAR_0)
  VAR_13->ipsec_sa_v1.flags |= VAR_3;
 else
  VAR_13->ipsec_sa_v1.flags &= ~VAR_3;
}
