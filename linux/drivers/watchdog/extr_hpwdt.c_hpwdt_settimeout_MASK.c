
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; unsigned int pretimeout; int parent; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (struct watchdog_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_1->parent, "set_timeout = %d\n", VAR_2);

 VAR_1->timeout = VAR_2;
 if (VAR_2 <= VAR_1->pretimeout) {
  FUNC_0(VAR_1->parent, "pretimeout < timeout. Setting to zero\n");
  VAR_1->pretimeout = 0;
  VAR_0 = 0;
  if (FUNC_3(VAR_1))
   FUNC_2(VAR_1);
 }
 FUNC_1(VAR_1);

 return 0;
}
