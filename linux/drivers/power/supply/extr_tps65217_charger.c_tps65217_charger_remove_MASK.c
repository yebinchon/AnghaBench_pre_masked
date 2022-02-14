
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217_charger {scalar_t__ poll_task; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct tps65217_charger* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct tps65217_charger *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->poll_task)
  FUNC_0(VAR_1->poll_task);

 return 0;
}
