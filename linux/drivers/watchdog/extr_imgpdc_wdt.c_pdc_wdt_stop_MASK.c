
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct pdc_wdt_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct watchdog_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct pdc_wdt_dev* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2)
{
 unsigned int VAR_3;
 struct pdc_wdt_dev *VAR_4 = FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_4->base + VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_3(VAR_3, VAR_4->base + VAR_0);


 FUNC_0(VAR_2);

 return 0;
}
