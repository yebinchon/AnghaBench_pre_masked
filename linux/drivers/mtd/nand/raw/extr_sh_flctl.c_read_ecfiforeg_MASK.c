
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh_flctl {int dummy; } ;
typedef enum flctl_ecc_res_t { ____Placeholder_flctl_ecc_res_t } flctl_ecc_res_t ;


 int FUNC_0 (struct sh_flctl*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct sh_flctl*,int) ;

__attribute__((used)) static enum flctl_ecc_res_t FUNC_4
  (struct sh_flctl *VAR_1, uint8_t *VAR_2, int VAR_3)
{
 int VAR_4;
 enum flctl_ecc_res_t VAR_5;
 unsigned long *VAR_6 = (unsigned long *)VAR_2;

 VAR_5 = FUNC_3(VAR_1 , VAR_3);

 if (VAR_5 != VAR_0) {
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
   VAR_6[VAR_4] = FUNC_2(FUNC_0(VAR_1));
   VAR_6[VAR_4] = FUNC_1(VAR_6[VAR_4]);
  }
 }

 return VAR_5;
}
