
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct dlm_ls {int ls_rcom_spin; int ls_flags; scalar_t__ ls_rcom_seq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dlm_ls *VAR_1, uint64_t *VAR_2)
{
 FUNC_1(&VAR_1->ls_rcom_spin);
 *VAR_2 = ++VAR_1->ls_rcom_seq;
 FUNC_0(VAR_0, &VAR_1->ls_flags);
 FUNC_2(&VAR_1->ls_rcom_spin);
}
