
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct ni903x_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ni903x_wdt*) ;
 int FUNC_1 (struct watchdog_device*,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 struct ni903x_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct ni903x_wdt *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_2 | VAR_1,
      VAR_4->io_base + VAR_0);

 FUNC_1(VAR_3, VAR_3->timeout);
 FUNC_0(VAR_4);

 return 0;
}
