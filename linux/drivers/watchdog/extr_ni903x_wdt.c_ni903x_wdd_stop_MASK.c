
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct ni903x_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct ni903x_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct ni903x_wdt *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_1, VAR_3->io_base + VAR_0);

 return 0;
}
