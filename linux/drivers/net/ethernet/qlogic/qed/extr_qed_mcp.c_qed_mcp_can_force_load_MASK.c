
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum qed_override_force_load { ____Placeholder_qed_override_force_load } qed_override_force_load ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static bool
FUNC_0(u8 VAR_3,
         u8 VAR_4,
         enum qed_override_force_load VAR_5)
{
 bool VAR_6 = 0;

 switch (VAR_5) {
 case 129:
  VAR_6 = 1;
  break;
 case 128:
  VAR_6 = 0;
  break;
 default:
  VAR_6 = (VAR_3 == VAR_1 &&
      VAR_4 == VAR_2) ||
     (VAR_3 == VAR_0 &&
      VAR_4 == VAR_1);
  break;
 }

 return VAR_6;
}
