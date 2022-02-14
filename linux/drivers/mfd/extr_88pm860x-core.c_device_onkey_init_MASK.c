
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pm860x_platform_data {int dummy; } ;
struct pm860x_chip {int dev; int irq_base; } ;
struct TYPE_6__ {struct TYPE_6__* resources; int num_resources; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ,TYPE_1__*,int ,int *) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct pm860x_chip *VAR_2,
     struct pm860x_platform_data *VAR_3)
{
 int VAR_4;

 VAR_0[0].num_resources = FUNC_0(VAR_1);
 VAR_0[0].resources = &VAR_1[0],
 VAR_4 = FUNC_2(VAR_2->dev, 0, &VAR_0[0],
         FUNC_0(VAR_0), &VAR_1[0],
         VAR_2->irq_base, ((void*)0));
 if (VAR_4 < 0)
  FUNC_1(VAR_2->dev, "Failed to add onkey subdev\n");
}
