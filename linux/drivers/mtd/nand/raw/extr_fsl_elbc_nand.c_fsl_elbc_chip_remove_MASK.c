
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct fsl_elbc_mtd* name; } ;
struct fsl_elbc_mtd {size_t bank; scalar_t__ vbase; int chip; TYPE_1__* ctrl; } ;
struct fsl_elbc_fcm_ctrl {int ** chips; } ;
struct TYPE_2__ {struct fsl_elbc_fcm_ctrl* nand; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fsl_elbc_mtd*) ;
 struct mtd_info* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fsl_elbc_mtd *VAR_0)
{
 struct fsl_elbc_fcm_ctrl *VAR_1 = VAR_0->ctrl->nand;
 struct mtd_info *VAR_2 = FUNC_2(&VAR_0->chip);

 FUNC_1(VAR_2->name);

 if (VAR_0->vbase)
  FUNC_0(VAR_0->vbase);

 VAR_1->chips[VAR_0->bank] = ((void*)0);
 FUNC_1(VAR_0);
 return 0;
}
