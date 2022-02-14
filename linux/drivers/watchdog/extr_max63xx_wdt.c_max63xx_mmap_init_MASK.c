
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct max63xx_wdt {int set; int ping; int lock; int base; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2, struct max63xx_wdt *VAR_3)
{
 VAR_3->base = FUNC_2(VAR_2, 0);
 if (FUNC_0(VAR_3->base))
  return FUNC_1(VAR_3->base);

 FUNC_3(&VAR_3->lock);

 VAR_3->ping = VAR_0;
 VAR_3->set = VAR_1;
 return 0;
}
