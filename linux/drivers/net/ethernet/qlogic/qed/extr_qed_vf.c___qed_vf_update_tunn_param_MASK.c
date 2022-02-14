
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct qed_tunn_update_type {int b_mode_enabled; void* tun_cls; } ;
typedef enum qed_tunn_mode { ____Placeholder_qed_tunn_mode } qed_tunn_mode ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct qed_tunn_update_type *VAR_0,
      u16 VAR_1, u8 VAR_2,
      u8 VAR_3, enum qed_tunn_mode VAR_4)
{
 if (VAR_1 & FUNC_0(VAR_4)) {
  VAR_0->b_mode_enabled = VAR_2;
  VAR_0->tun_cls = VAR_3;
 } else {
  VAR_0->b_mode_enabled = 0;
 }
}
