
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13xxx {int dev; int irq_data; } ;


 int FUNC_0 (int ,int,void*) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct mc13xxx *VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0->irq_data, VAR_1);

 FUNC_0(VAR_0->dev, VAR_3, VAR_2);

 return 0;
}
