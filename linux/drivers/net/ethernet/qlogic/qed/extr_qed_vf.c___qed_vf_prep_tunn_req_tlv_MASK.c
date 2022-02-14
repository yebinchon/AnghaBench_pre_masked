
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vfpf_update_tunn_param_tlv {int tunn_mode; int tun_mode_update_mask; } ;
struct qed_tunn_update_type {int tun_cls; scalar_t__ b_mode_enabled; scalar_t__ b_update_mode; } ;
typedef enum qed_tunn_mode { ____Placeholder_qed_tunn_mode } qed_tunn_mode ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct vfpf_update_tunn_param_tlv *VAR_0,
      struct qed_tunn_update_type *VAR_1,
      enum qed_tunn_mode VAR_2, u8 *VAR_3)
{
 if (VAR_1->b_update_mode) {
  VAR_0->tun_mode_update_mask |= FUNC_0(VAR_2);

  if (VAR_1->b_mode_enabled)
   VAR_0->tunn_mode |= FUNC_0(VAR_2);
 }

 *VAR_3 = VAR_1->tun_cls;
}
