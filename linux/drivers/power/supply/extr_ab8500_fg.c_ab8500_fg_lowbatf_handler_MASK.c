
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int low_bat_delay; } ;
struct ab8500_fg {int fg_low_bat_work; int fg_wq; TYPE_1__ flags; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct ab8500_fg *VAR_4 = VAR_3;


 if (!VAR_4->flags.low_bat_delay) {
  FUNC_0(VAR_4->dev, "Battery voltage is below LOW threshold\n");
  VAR_4->flags.low_bat_delay = 1;




  FUNC_1(VAR_4->fg_wq, &VAR_4->fg_low_bat_work,
   FUNC_2(VAR_1));
 }
 return VAR_0;
}
