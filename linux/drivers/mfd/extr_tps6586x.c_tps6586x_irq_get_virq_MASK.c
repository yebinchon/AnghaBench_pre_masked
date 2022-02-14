
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6586x {int irq_domain; } ;
struct device {int dummy; } ;


 struct tps6586x* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct device *VAR_0, int VAR_1)
{
 struct tps6586x *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->irq_domain, VAR_1);
}
