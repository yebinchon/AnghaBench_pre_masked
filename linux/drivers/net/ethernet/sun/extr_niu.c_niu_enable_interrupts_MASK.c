
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_ldg {int dummy; } ;
struct niu {int num_ldg; struct niu_ldg* ldg; } ;


 int FUNC_0 (struct niu*,struct niu_ldg*,int) ;
 int FUNC_1 (struct niu*,struct niu_ldg*,int) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ldg; VAR_2++) {
  struct niu_ldg *VAR_3 = &VAR_0->ldg[VAR_2];
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_1);
  if (VAR_4)
   return VAR_4;
 }
 for (VAR_2 = 0; VAR_2 < VAR_0->num_ldg; VAR_2++)
  FUNC_1(VAR_0, &VAR_0->ldg[VAR_2], VAR_1);

 return 0;
}
