
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int status; int timeout; } ;
struct imx2_wdt_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct imx2_wdt_device*) ;
 int FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (struct watchdog_device*,int ) ;
 int FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int ,int *) ;
 struct imx2_wdt_device* FUNC_5 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_1)
{
 struct imx2_wdt_device *VAR_2 = FUNC_5(VAR_1);

 if (FUNC_0(VAR_2))
  FUNC_2(VAR_1, VAR_1->timeout);
 else
  FUNC_3(VAR_1);

 FUNC_4(VAR_0, &VAR_1->status);

 return FUNC_1(VAR_1);
}
