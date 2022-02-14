
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(const u32 VAR_0,
     bool *VAR_1,
     bool *VAR_2)
{

 *VAR_1 = 1;
 *VAR_2 = 0;

 switch (VAR_0) {
 case 129:
  FUNC_3("EC reports: Thermal Table has changed\n");


  return 1;
 case 130:
  FUNC_3("EC reports: Thermal Control Command set completed (DYTC)\n");


  return 1;
 case 128:
  FUNC_3("EC reports: Thermal Transformation changed (GMTS)\n");


  return 1;
 case 140:
  FUNC_2("THERMAL ALARM: battery is too hot!\n");

  break;
 case 139:
  FUNC_1("THERMAL EMERGENCY: battery is extremely hot!\n");

  break;
 case 138:
  FUNC_2("THERMAL ALARM: a sensor reports something is too hot!\n");


  break;
 case 137:
  FUNC_1("THERMAL EMERGENCY: a sensor reports something is extremely hot!\n");

  break;
 case 141:






 case 134:
 case 136:
 case 135:


  *VAR_1 = 0;
  *VAR_2 = 1;
  return 1;

 case 131:
  FUNC_5();
  FUNC_0();
  *VAR_1 = 0;
  return 1;

 case 133:
 case 132:


  return 1;

 default:

  return 0;
 }

 FUNC_4();
 return 1;
}
