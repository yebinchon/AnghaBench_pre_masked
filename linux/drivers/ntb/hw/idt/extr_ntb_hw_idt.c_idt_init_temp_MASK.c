
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {TYPE_2__ ntb; TYPE_3__* swcfg; int hwmon_mtx; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct device* FUNC_3 (int *,int ,struct idt_ntb_dev*,int ) ;
 int FUNC_4 (struct idt_ntb_dev*,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct idt_ntb_dev *VAR_2)
{
 struct device *VAR_3;


 FUNC_4(VAR_2, VAR_0, 0x0);


 FUNC_5(&VAR_2->hwmon_mtx);

 VAR_3 = FUNC_3(&VAR_2->ntb.pdev->dev,
  VAR_2->swcfg->name, VAR_2, VAR_1);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_2->ntb.pdev->dev, "Couldn't create hwmon device");
  return;
 }

 FUNC_1(&VAR_2->ntb.pdev->dev, "Temperature HWmon interface registered");
}
