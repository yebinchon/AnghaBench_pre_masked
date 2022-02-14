
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; int topo; int * ops; } ;
struct idt_ntb_dev {TYPE_2__ ntb; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct idt_ntb_dev *VAR_2)
{
 int VAR_3;


 VAR_2->ntb.ops = &VAR_1;
 VAR_2->ntb.topo = VAR_0;

 VAR_3 = FUNC_2(&VAR_2->ntb);
 if (VAR_3 != 0) {
  FUNC_1(&VAR_2->ntb.pdev->dev, "Failed to register NTB device");
  return VAR_3;
 }

 FUNC_0(&VAR_2->ntb.pdev->dev, "NTB device successfully registered");

 return 0;
}
