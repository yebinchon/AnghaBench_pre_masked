
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic_wrapper {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pmic_wrapper *VAR_2,
  bool (*VAR_3)(struct pmic_wrapper *))
{
 unsigned long VAR_4;

 VAR_4 = VAR_1 + FUNC_1(10000);

 do {
  if (FUNC_0(VAR_1, VAR_4))
   return VAR_3(VAR_2) ? 0 : -VAR_0;
  if (VAR_3(VAR_2))
   return 0;
 } while (1);
}
