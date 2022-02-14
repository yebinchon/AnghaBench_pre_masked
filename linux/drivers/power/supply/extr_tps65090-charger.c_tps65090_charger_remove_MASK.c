
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65090_charger {int ac; int poll_task; int irq; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tps65090_charger* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct tps65090_charger *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->irq == -VAR_0)
  FUNC_0(VAR_2->poll_task);
 FUNC_2(VAR_2->ac);

 return 0;
}
