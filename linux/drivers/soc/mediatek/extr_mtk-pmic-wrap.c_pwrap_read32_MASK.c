
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmic_wrapper {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pmic_wrapper*) ;
 int FUNC_2 (struct pmic_wrapper*,int ) ;
 int FUNC_3 (struct pmic_wrapper*,int ) ;
 int FUNC_4 (struct pmic_wrapper*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct pmic_wrapper *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 int VAR_8, VAR_9;

 *VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_8 = FUNC_3(VAR_5, VAR_3);
  if (VAR_8) {
   FUNC_1(VAR_5);
   return VAR_8;
  }

  FUNC_4(VAR_5, ((VAR_9 << 30) | (VAR_6 << 16)),
        VAR_0);

  VAR_8 = FUNC_3(VAR_5, VAR_4);
  if (VAR_8)
   return VAR_8;

  *VAR_7 += (FUNC_0(FUNC_2(VAR_5,
      VAR_1)) << (16 * VAR_9));

  FUNC_4(VAR_5, 1, VAR_2);
 }

 return 0;
}
