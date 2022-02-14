
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fsl_ifc_ctrl {int gregs; int irq; int nand_irq; } ;


 struct fsl_ifc_ctrl* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,struct fsl_ifc_ctrl*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct fsl_ifc_ctrl*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct fsl_ifc_ctrl *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1->nand_irq, VAR_1);
 FUNC_2(VAR_1->irq, VAR_1);

 FUNC_4(VAR_1->nand_irq);
 FUNC_4(VAR_1->irq);

 FUNC_3(VAR_1->gregs);

 FUNC_1(&VAR_0->dev, ((void*)0));
 FUNC_5(VAR_1);

 return 0;
}
