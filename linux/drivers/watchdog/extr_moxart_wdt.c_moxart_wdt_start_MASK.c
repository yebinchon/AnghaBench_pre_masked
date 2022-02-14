
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct moxart_wdt_dev {int clock_frequency; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct moxart_wdt_dev* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_3)
{
 struct moxart_wdt_dev *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4->clock_frequency * VAR_3->timeout,
        VAR_4->base + VAR_0);
 FUNC_1(0x5ab9, VAR_4->base + VAR_2);
 FUNC_1(0x03, VAR_4->base + VAR_1);

 return 0;
}
