
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct fsl_elbc_mtd {int chip; } ;
struct fsl_elbc_fcm_ctrl {int counter; } ;
struct TYPE_2__ {struct fsl_elbc_fcm_ctrl* nand; } ;


 struct fsl_elbc_mtd* FUNC_0 (int *) ;
 int FUNC_1 (struct fsl_elbc_mtd*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct fsl_elbc_fcm_ctrl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct fsl_elbc_fcm_ctrl *VAR_3 = VAR_1->nand;
 struct fsl_elbc_mtd *VAR_4 = FUNC_0(&VAR_2->dev);

 FUNC_5(&VAR_4->chip);
 FUNC_1(VAR_4);

 FUNC_3(&VAR_0);
 VAR_3->counter--;
 if (!VAR_3->counter) {
  VAR_1->nand = ((void*)0);
  FUNC_2(VAR_3);
 }
 FUNC_4(&VAR_0);

 return 0;

}
