
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int pf_iov_info; } ;


 scalar_t__ FUNC_0 (struct qed_hwfn*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,int ) ;

void FUNC_4(struct qed_hwfn *VAR_1)
{
 FUNC_3(VAR_1, VAR_0);

 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1->pf_iov_info);
 }
}
