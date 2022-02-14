
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int oob_poi; } ;
struct TYPE_2__ {int failed; } ;
struct mtd_info {TYPE_1__ ecc_stats; int oobsize; int writesize; } ;
struct fsl_lbc_ctrl {struct fsl_elbc_fcm_ctrl* nand; } ;
struct fsl_elbc_mtd {struct fsl_lbc_ctrl* ctrl; } ;
struct fsl_elbc_fcm_ctrl {int max_bitflips; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int ,int ) ;
 int FUNC_1 (struct nand_chip*) ;
 struct fsl_elbc_mtd* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_1, uint8_t *VAR_2,
         int VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_4(VAR_1);
 struct fsl_elbc_mtd *VAR_6 = FUNC_2(VAR_1);
 struct fsl_lbc_ctrl *VAR_7 = VAR_6->ctrl;
 struct fsl_elbc_fcm_ctrl *VAR_8 = VAR_7->nand;

 FUNC_3(VAR_1, VAR_4, 0, VAR_2, VAR_5->writesize);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_1->oob_poi, VAR_5->oobsize);

 if (FUNC_1(VAR_1) & VAR_0)
  VAR_5->ecc_stats.failed++;

 return VAR_8->max_bitflips;
}
