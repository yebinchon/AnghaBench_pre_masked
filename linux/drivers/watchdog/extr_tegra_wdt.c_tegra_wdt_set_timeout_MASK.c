
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;


 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct watchdog_device*) ;
 scalar_t__ FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0,
     unsigned int VAR_1)
{
 VAR_0->timeout = VAR_1;

 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0);
  return FUNC_0(VAR_0);
 }

 return 0;
}
