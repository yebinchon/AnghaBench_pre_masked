
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum soctherm_throttle_id { ____Placeholder_soctherm_throttle_id } soctherm_throttle_id ;


 int VAR_0 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(enum soctherm_throttle_id VAR_2)
{
 int VAR_3 = -VAR_0;

 switch (VAR_2) {
 case 131:
  FUNC_0("soctherm: Successfully handled OC1 alarm\n");
  VAR_3 = 0;
  break;

 case 130:
  FUNC_0("soctherm: Successfully handled OC2 alarm\n");
  VAR_3 = 0;
  break;

 case 129:
  FUNC_0("soctherm: Successfully handled OC3 alarm\n");
  VAR_3 = 0;
  break;

 case 128:
  FUNC_0("soctherm: Successfully handled OC4 alarm\n");
  VAR_3 = 0;
  break;

 default:
  break;
 }

 if (VAR_3)
  FUNC_1("soctherm: ERROR in handling %s alarm\n",
         VAR_1[VAR_2]);

 return VAR_3;
}
