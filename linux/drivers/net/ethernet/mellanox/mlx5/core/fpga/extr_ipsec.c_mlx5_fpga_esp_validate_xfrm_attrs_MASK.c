
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_core_dev {TYPE_4__* fpga; } ;
struct TYPE_5__ {scalar_t__ iv_algo; int icv_len; int key_len; } ;
struct TYPE_6__ {TYPE_1__ aes_gcm; } ;
struct mlx5_accel_esp_xfrm_attrs {scalar_t__ replay_type; scalar_t__ keymat_type; int flags; TYPE_2__ keymat; scalar_t__ tfc_pad; } ;
struct TYPE_8__ {TYPE_3__* ipsec; } ;
struct TYPE_7__ {int caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct mlx5_core_dev *VAR_7,
      const struct mlx5_accel_esp_xfrm_attrs *VAR_8)
{
 if (VAR_8->tfc_pad) {
  FUNC_1(VAR_7, "Cannot offload xfrm states with tfc padding\n");
  return -VAR_0;
 }

 if (VAR_8->replay_type != VAR_4) {
  FUNC_1(VAR_7, "Cannot offload xfrm states with anti replay\n");
  return -VAR_0;
 }

 if (VAR_8->keymat_type != VAR_3) {
  FUNC_1(VAR_7, "Only aes gcm keymat is supported\n");
  return -VAR_0;
 }

 if (VAR_8->keymat.aes_gcm.iv_algo !=
     VAR_1) {
  FUNC_1(VAR_7, "Only iv sequence algo is supported\n");
  return -VAR_0;
 }

 if (VAR_8->keymat.aes_gcm.icv_len != 128) {
  FUNC_1(VAR_7, "Cannot offload xfrm states with AEAD ICV length other than 128bit\n");
  return -VAR_0;
 }

 if (VAR_8->keymat.aes_gcm.key_len != 128 &&
     VAR_8->keymat.aes_gcm.key_len != 256) {
  FUNC_1(VAR_7, "Cannot offload xfrm states with AEAD key length other than 128/256 bit\n");
  return -VAR_0;
 }

 if ((VAR_8->flags & VAR_2) &&
     (!FUNC_0(VAR_5, VAR_7->fpga->ipsec->caps,
         VAR_6))) {
  FUNC_1(VAR_7, "Cannot offload xfrm states with AEAD key length other than 128/256 bit\n");
  return -VAR_0;
 }

 return 0;
}
