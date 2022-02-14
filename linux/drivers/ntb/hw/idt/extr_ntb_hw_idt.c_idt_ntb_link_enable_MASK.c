
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {TYPE_2__ ntb; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct idt_ntb_dev*) ;
 struct idt_ntb_dev* FUNC_2 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_3(struct ntb_dev *VAR_0, enum ntb_speed VAR_1,
          enum ntb_width VAR_2)
{
 struct idt_ntb_dev *VAR_3 = FUNC_2(VAR_0);


 FUNC_1(VAR_3);

 FUNC_0(&VAR_3->ntb.pdev->dev, "Local NTB link enabled");

 return 0;
}
