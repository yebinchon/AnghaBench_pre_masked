
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int cdev; } ;


 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct qed_hwfn*,int,int,int) ;

__attribute__((used)) static bool FUNC_4(struct qed_hwfn *VAR_0,
         int VAR_1, bool VAR_2)
{

 if (FUNC_2(VAR_0->cdev) || !FUNC_1(VAR_0->cdev) ||
     !FUNC_0(VAR_0))
  return 0;


 if (!FUNC_3(VAR_0, VAR_1, 1, VAR_2))
  return 0;

 return 1;
}
