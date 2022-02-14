
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*) ;

int FUNC_4(struct qed_hwfn *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto tables_alloc_fail;


 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto tables_alloc_fail;


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto tables_alloc_fail;

 return 0;

tables_alloc_fail:
 FUNC_1(VAR_0);
 return VAR_1;
}
