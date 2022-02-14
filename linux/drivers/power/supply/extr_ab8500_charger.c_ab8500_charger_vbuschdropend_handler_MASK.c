
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vbus_drop_end; } ;
struct ab8500_charger {int vbus_drop_end_work; int charger_wq; TYPE_1__ flags; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct ab8500_charger *VAR_5 = VAR_4;

 FUNC_0(VAR_5->dev, "VBUS charger drop ended\n");
 VAR_5->flags.vbus_drop_end = 1;





 FUNC_1(VAR_5->charger_wq, &VAR_5->vbus_drop_end_work,
      FUNC_2(VAR_2 * VAR_0));

 return VAR_1;
}
