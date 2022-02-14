
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_system_bus_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct ps3_system_bus_device*) ;
 int FUNC_3 (struct ps3_system_bus_device*) ;

__attribute__((used)) static void FUNC_4(struct ps3_system_bus_device *VAR_0)
{
 FUNC_3(VAR_0);

 FUNC_1("System Halted, OK to turn off power\n");

 while (FUNC_2(VAR_0)) {

  FUNC_0(0);
 }

 while (1) {

  FUNC_0(1);
 }
}
