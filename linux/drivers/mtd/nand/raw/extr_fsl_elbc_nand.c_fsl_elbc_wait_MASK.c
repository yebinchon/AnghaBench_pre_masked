
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct fsl_elbc_mtd {TYPE_1__* ctrl; } ;
struct fsl_elbc_fcm_ctrl {scalar_t__ status; int mdr; } ;
struct TYPE_2__ {struct fsl_elbc_fcm_ctrl* nand; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsl_elbc_mtd* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_3)
{
 struct fsl_elbc_mtd *VAR_4 = FUNC_0(VAR_3);
 struct fsl_elbc_fcm_ctrl *VAR_5 = VAR_4->ctrl->nand;

 if (VAR_5->status != VAR_0)
  return VAR_1;




 return (VAR_5->mdr & 0xff) | VAR_2;
}
