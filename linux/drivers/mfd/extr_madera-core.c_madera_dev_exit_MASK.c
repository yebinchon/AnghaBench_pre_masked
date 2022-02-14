
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int core_supplies; int num_core_supplies; int dev; int dcvdd; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct madera*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct madera *VAR_0)
{

 FUNC_0(VAR_0->irq);





 FUNC_3(VAR_0->dev);

 FUNC_5(VAR_0->dcvdd);
 FUNC_6(VAR_0->dcvdd);

 FUNC_2(VAR_0->dev);
 FUNC_1(VAR_0);

 FUNC_4(VAR_0->num_core_supplies,
          VAR_0->core_supplies);
 return 0;
}
