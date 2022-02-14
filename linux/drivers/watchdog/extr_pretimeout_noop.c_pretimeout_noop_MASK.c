
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int id; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct watchdog_device *VAR_0)
{
 FUNC_0("watchdog%d: pretimeout event\n", VAR_0->id);
}
