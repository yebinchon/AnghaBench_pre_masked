
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max2175 {int dummy; } ;
typedef enum max2175_csm_mode { ____Placeholder_max2175_csm_mode } max2175_csm_mode ;



 int FUNC_0 (struct max2175*) ;
 int FUNC_1 (struct max2175*,int ,int,int ,int) ;
 int FUNC_2 (struct max2175*,char*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static bool FUNC_4(struct max2175 *VAR_0,
     enum max2175_csm_mode VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_0, 0, 2, 0, VAR_1);
 FUNC_2(VAR_0, "set csm new mode %d\n", VAR_1);


 switch (VAR_1) {
 case 128:
  FUNC_3(51100, 51500);
  break;




 default:
  break;
 }

 return FUNC_0(VAR_0);
}
