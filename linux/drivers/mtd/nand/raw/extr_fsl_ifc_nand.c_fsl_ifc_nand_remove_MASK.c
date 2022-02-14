
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct fsl_ifc_mtd {int chip; } ;
struct TYPE_5__ {int * nand; } ;
struct TYPE_4__ {int counter; } ;


 struct fsl_ifc_mtd* FUNC_0 (int *) ;
 int FUNC_1 (struct fsl_ifc_mtd*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct fsl_ifc_mtd *VAR_4 = FUNC_0(&VAR_3->dev);

 FUNC_5(&VAR_4->chip);
 FUNC_1(VAR_4);

 FUNC_3(&VAR_1);
 VAR_2->counter--;
 if (!VAR_2->counter) {
  VAR_0->nand = ((void*)0);
  FUNC_2(VAR_2);
 }
 FUNC_4(&VAR_1);

 return 0;
}
