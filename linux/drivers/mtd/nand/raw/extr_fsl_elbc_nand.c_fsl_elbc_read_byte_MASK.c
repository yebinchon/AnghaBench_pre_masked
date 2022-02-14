
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct fsl_elbc_mtd {int dev; TYPE_1__* ctrl; } ;
struct fsl_elbc_fcm_ctrl {scalar_t__ index; scalar_t__ read_bytes; int * addr; } ;
struct TYPE_2__ {struct fsl_elbc_fcm_ctrl* nand; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 struct fsl_elbc_mtd* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static u8 FUNC_3(struct nand_chip *VAR_1)
{
 struct fsl_elbc_mtd *VAR_2 = FUNC_2(VAR_1);
 struct fsl_elbc_fcm_ctrl *VAR_3 = VAR_2->ctrl->nand;


 if (VAR_3->index < VAR_3->read_bytes)
  return FUNC_1(&VAR_3->addr[VAR_3->index++]);

 FUNC_0(VAR_2->dev, "read_byte beyond end of buffer\n");
 return VAR_0;
}
