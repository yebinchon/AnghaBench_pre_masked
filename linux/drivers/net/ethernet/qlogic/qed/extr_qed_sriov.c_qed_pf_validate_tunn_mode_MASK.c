
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_tunn_update_type {int b_update_mode; int b_mode_enabled; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct qed_tunn_update_type *VAR_1, int *VAR_2)
{
 if (VAR_1->b_update_mode && !VAR_1->b_mode_enabled) {
  VAR_1->b_update_mode = 0;
  *VAR_2 = -VAR_0;
 }
}
