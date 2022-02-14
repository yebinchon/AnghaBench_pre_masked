
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;





 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(const u32 VAR_1,
     bool *VAR_2,
     bool *VAR_3)
{

 *VAR_2 = 1;
 *VAR_3 = 0;

 switch (VAR_1) {
 case 128:

  VAR_0 = 1;
  FUNC_1("undocked\n");
  FUNC_0();
  return 1;

 case 130:
  FUNC_1("docked into hotplug port replicator\n");
  return 1;
 case 129:
  FUNC_1("undocked from hotplug port replicator\n");
  return 1;

 default:
  return 0;
 }
}
