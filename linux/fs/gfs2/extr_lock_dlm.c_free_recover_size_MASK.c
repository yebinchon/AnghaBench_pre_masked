
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {int * ls_lvb_bits; scalar_t__ ls_recover_size; int * ls_recover_result; int * ls_recover_submit; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct lm_lockstruct *VAR_0)
{
 FUNC_0(VAR_0->ls_lvb_bits);
 FUNC_0(VAR_0->ls_recover_submit);
 FUNC_0(VAR_0->ls_recover_result);
 VAR_0->ls_recover_submit = ((void*)0);
 VAR_0->ls_recover_result = ((void*)0);
 VAR_0->ls_recover_size = 0;
 VAR_0->ls_lvb_bits = ((void*)0);
}
