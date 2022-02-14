
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;






 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(const u32 VAR_4,
     bool *VAR_5,
     bool *VAR_6)
{

 *VAR_5 = 1;
 *VAR_6 = 0;

 switch (VAR_4) {
 case 131:
 case 128:
  VAR_3 = VAR_2;
  *VAR_6 = 1;
  break;

 case 132:
 case 129:
  VAR_3 = VAR_0;
  *VAR_6 = 1;
  break;

 case 133:
 case 130:
  FUNC_1("EMERGENCY WAKEUP: battery almost empty\n");



  break;

 default:
  return 0;
 }

 if (VAR_3 != VAR_1) {
  FUNC_2("woke up due to a hot-unplug request...\n");
  FUNC_0();
 }
 return 1;
}
