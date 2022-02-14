
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int b_int_enabled; } ;
struct qed_hw_init_params {scalar_t__ p_tunn; } ;


 int FUNC_0 (struct qed_hwfn*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_0,
   struct qed_hw_init_params *VAR_1)
{
 if (VAR_1->p_tunn) {
  FUNC_1(VAR_1->p_tunn);
  FUNC_0(VAR_0, VAR_1->p_tunn);
 }

 VAR_0->b_int_enabled = 1;

 return 0;
}
