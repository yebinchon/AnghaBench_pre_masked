
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct fsl_elbc_mtd {int dev; TYPE_1__* ctrl; } ;
struct fsl_elbc_fcm_ctrl {size_t index; int * addr; scalar_t__ read_bytes; } ;
struct TYPE_2__ {struct fsl_elbc_fcm_ctrl* nand; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 struct fsl_elbc_mtd* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct fsl_elbc_mtd *VAR_3 = FUNC_3(VAR_0);
 struct fsl_elbc_fcm_ctrl *VAR_4 = VAR_3->ctrl->nand;
 int VAR_5;

 if (VAR_2 < 0)
  return;

 VAR_5 = FUNC_2((unsigned int)VAR_2,
   VAR_4->read_bytes - VAR_4->index);
 FUNC_1(VAR_1, &VAR_4->addr[VAR_4->index], VAR_5);
 VAR_4->index += VAR_5;

 if (VAR_2 > VAR_5)
  FUNC_0(VAR_3->dev,
          "read_buf beyond end of buffer "
          "(%d requested, %d available)\n",
          VAR_2, VAR_5);
}
