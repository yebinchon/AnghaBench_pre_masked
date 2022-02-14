
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmic_wrapper {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pmic_wrapper*) ;
 int FUNC_1 (struct pmic_wrapper*,int ) ;
 int FUNC_2 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pmic_wrapper *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_2);
  return VAR_5;
 }

 FUNC_2(VAR_2, (1 << 31) | ((VAR_3 >> 1) << 16) | VAR_4,
       VAR_0);

 return 0;
}
