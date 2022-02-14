
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct mtd_info {unsigned int writesize; unsigned int oobsize; } ;
struct fsl_elbc_mtd {int dev; TYPE_1__* ctrl; } ;
struct fsl_elbc_fcm_ctrl {unsigned int index; int * addr; scalar_t__ status; } ;
struct TYPE_2__ {struct fsl_elbc_fcm_ctrl* nand; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 struct fsl_elbc_mtd* FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_0, const u8 *VAR_1, int VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_4(VAR_0);
 struct fsl_elbc_mtd *VAR_4 = FUNC_3(VAR_0);
 struct fsl_elbc_fcm_ctrl *VAR_5 = VAR_4->ctrl->nand;
 unsigned int VAR_6 = VAR_3->writesize + VAR_3->oobsize;

 if (VAR_2 <= 0) {
  FUNC_0(VAR_4->dev, "write_buf of %d bytes", VAR_2);
  VAR_5->status = 0;
  return;
 }

 if ((unsigned int)VAR_2 > VAR_6 - VAR_5->index) {
  FUNC_0(VAR_4->dev,
          "write_buf beyond end of buffer "
          "(%d requested, %u available)\n",
   VAR_2, VAR_6 - VAR_5->index);
  VAR_2 = VAR_6 - VAR_5->index;
 }

 FUNC_2(&VAR_5->addr[VAR_5->index], VAR_1, VAR_2);







 FUNC_1(&VAR_5->addr[VAR_5->index] + VAR_2 - 1);

 VAR_5->index += VAR_2;
}
