
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int core_supplies; int num_core_supplies; int dev; int dcvdd; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arizona*) ;
 int FUNC_1 (struct arizona*,int ,struct arizona*) ;
 int FUNC_2 (struct arizona*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct arizona *VAR_3)
{
 FUNC_3(VAR_3->irq);
 FUNC_5(VAR_3->dev);

 FUNC_7(VAR_3->dcvdd);
 FUNC_8(VAR_3->dcvdd);

 FUNC_4(VAR_3->dev);
 FUNC_1(VAR_3, VAR_2, VAR_3);
 FUNC_1(VAR_3, VAR_1, VAR_3);
 FUNC_1(VAR_3, VAR_0, VAR_3);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3);

 FUNC_6(VAR_3->num_core_supplies,
          VAR_3->core_supplies);
 return 0;
}
