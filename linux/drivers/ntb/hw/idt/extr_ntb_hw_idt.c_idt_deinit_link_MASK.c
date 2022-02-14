
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {TYPE_2__ ntb; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct idt_ntb_dev*) ;

__attribute__((used)) static void FUNC_2(struct idt_ntb_dev *VAR_0)
{

 FUNC_1(VAR_0);

 FUNC_0(&VAR_0->ntb.pdev->dev, "NTB link status events deinitialized");
}
