
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int pretimeout; } ;


 int FUNC_0 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_0,
         unsigned int VAR_1)
{
 VAR_0->pretimeout = VAR_1;

 return FUNC_0(VAR_0);
}
