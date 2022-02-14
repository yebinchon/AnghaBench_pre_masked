
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmic_wrapper {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pmic_wrapper*) ;
 int FUNC_1 (struct pmic_wrapper*,int,int*) ;
 int FUNC_2 (struct pmic_wrapper*,int ) ;
 int FUNC_3 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct pmic_wrapper *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 = FUNC_2(VAR_2, VAR_1);
  if (VAR_5) {
   FUNC_0(VAR_2);
   return VAR_5;
  }

  FUNC_3(VAR_2, (1 << 31) | (VAR_6 << 30) | (VAR_3 << 16) |
        ((VAR_4 >> (VAR_6 * 16)) & 0xffff),
        VAR_0);
  if (!VAR_6)
   FUNC_1(VAR_2, VAR_3, &VAR_7);
 }

 return 0;
}
