
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int gpmc_ecc_config; int gpmc_ecc_control; int gpmc_ecc_size_config; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {TYPE_1__ ecc; } ;
struct omap_nand_info {int gpmc_cs; TYPE_4__ reg; TYPE_3__* pdev; TYPE_2__ nand; } ;
struct nand_chip {int options; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int *,char*,int) ;
 struct omap_nand_info* FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_5, int VAR_6)
{
 struct omap_nand_info *VAR_7 = FUNC_1(FUNC_2(VAR_5));
 unsigned int VAR_8 = (VAR_5->options & VAR_4) ? 1 : 0;
 u32 VAR_9;


 VAR_9 = VAR_2 | VAR_0;
 FUNC_3(VAR_9, VAR_7->reg.gpmc_ecc_control);


 VAR_9 = ((((VAR_7->nand.ecc.size >> 1) - 1) << VAR_3) |
    VAR_1);
 FUNC_3(VAR_9, VAR_7->reg.gpmc_ecc_size_config);

 switch (VAR_6) {
 case 130:
 case 128:
  FUNC_3(VAR_2 | VAR_0, VAR_7->reg.gpmc_ecc_control);
  break;
 case 129:
  FUNC_3(VAR_2, VAR_7->reg.gpmc_ecc_control);
  break;
 default:
  FUNC_0(&VAR_7->pdev->dev,
   "error: unrecognized Mode[%d]!\n", VAR_6);
  break;
 }


 VAR_9 = (VAR_8 << 7) | (VAR_7->gpmc_cs << 1) | (0x1);
 FUNC_3(VAR_9, VAR_7->reg.gpmc_ecc_config);
}
