
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {TYPE_2__ ntb; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct idt_ntb_dev*) ;
 struct idt_ntb_dev* FUNC_2 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_3(struct ntb_dev *VAR_0)
{
 struct idt_ntb_dev *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(VAR_1);

 FUNC_0(&VAR_1->ntb.pdev->dev, "Local NTB link disabled");

 return 0;
}
