
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_dev {int * hwfns; } ;


 scalar_t__ FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(struct qed_dev *VAR_0, u8 *VAR_1)
{
 if (FUNC_0(VAR_0))
  return 1;

 return FUNC_1(&VAR_0->hwfns[0], VAR_1);
}
