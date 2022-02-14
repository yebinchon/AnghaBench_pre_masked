
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rockchip_thermal_data {TYPE_1__* sensors; TYPE_3__* chip; int regs; TYPE_2__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int chn_num; int (* irq_ack ) (int ) ;} ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int tzd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct rockchip_thermal_data *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_0(&VAR_4->pdev->dev, "thermal alarm\n");

 VAR_4->chip->irq_ack(VAR_4->regs);

 for (VAR_5 = 0; VAR_5 < VAR_4->chip->chn_num; VAR_5++)
  FUNC_2(VAR_4->sensors[VAR_5].tzd,
        VAR_1);

 return VAR_0;
}
