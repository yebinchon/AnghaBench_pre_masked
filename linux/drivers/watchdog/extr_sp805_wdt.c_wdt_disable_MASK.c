
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct sp805_wdt {int clk; int lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sp805_wdt* FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_4)
{
 struct sp805_wdt *VAR_5 = FUNC_4(VAR_4);

 FUNC_2(&VAR_5->lock);

 FUNC_5(VAR_1, VAR_5->base + VAR_3);
 FUNC_5(0, VAR_5->base + VAR_2);
 FUNC_5(VAR_0, VAR_5->base + VAR_3);


 FUNC_1(VAR_5->base + VAR_3);
 FUNC_3(&VAR_5->lock);

 FUNC_0(VAR_5->clk);

 return 0;
}
