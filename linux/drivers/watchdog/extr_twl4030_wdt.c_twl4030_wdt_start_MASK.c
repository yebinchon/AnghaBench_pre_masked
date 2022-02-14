
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {scalar_t__ timeout; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_0)
{
 return FUNC_0(VAR_0->timeout + 1);
}
