
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {int oob_poi; } ;
struct TYPE_2__ {int failed; } ;
struct mtd_info {TYPE_1__ ecc_stats; int oobsize; int writesize; } ;
struct fsl_ifc_nand_ctrl {int max_bitflips; } ;
struct fsl_ifc_mtd {struct fsl_ifc_ctrl* ctrl; } ;
struct fsl_ifc_ctrl {int nand_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*,int *) ;
 int FUNC_1 (struct nand_chip*,int ,int ) ;
 struct fsl_ifc_nand_ctrl* VAR_2 ;
 struct fsl_ifc_mtd* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_3, uint8_t *VAR_4,
        int VAR_5, int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_4(VAR_3);
 struct fsl_ifc_mtd *VAR_8 = FUNC_2(VAR_3);
 struct fsl_ifc_ctrl *VAR_9 = VAR_8->ctrl;
 struct fsl_ifc_nand_ctrl *VAR_10 = VAR_2;

 FUNC_3(VAR_3, VAR_6, 0, VAR_4, VAR_7->writesize);
 if (VAR_5)
  FUNC_1(VAR_3, VAR_3->oob_poi, VAR_7->oobsize);

 if (VAR_9->nand_stat & VAR_0) {
  if (!VAR_5)
   FUNC_1(VAR_3, VAR_3->oob_poi, VAR_7->oobsize);

  return FUNC_0(VAR_3, VAR_4);
 }

 if (VAR_9->nand_stat != VAR_1)
  VAR_7->ecc_stats.failed++;

 return VAR_10->max_bitflips;
}
