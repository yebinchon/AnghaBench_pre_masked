
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct watchdog_device*,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, 0);
 FUNC_1("watchdog enabled (timeout = %u sec)\n", VAR_1->timeout);

 return 0;
}
