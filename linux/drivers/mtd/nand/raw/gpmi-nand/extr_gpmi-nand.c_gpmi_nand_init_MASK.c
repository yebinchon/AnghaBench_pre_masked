
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int block_markbad; } ;
struct nand_chip {TYPE_6__* controller; int options; int * badblock_pattern; TYPE_4__ legacy; } ;
struct TYPE_7__ {int parent; } ;
struct mtd_info {char* name; TYPE_1__ dev; } ;
struct TYPE_12__ {int * ops; } ;
struct TYPE_11__ {int payload_size; int auxiliary_size; } ;
struct gpmi_nand_data {int swap_block_mark; TYPE_6__ base; TYPE_5__ bch_geometry; TYPE_3__* pdev; int dev; struct nand_chip nand; } ;
struct TYPE_8__ {int of_node; } ;
struct TYPE_9__ {TYPE_2__ dev; } ;


 int FUNC_0 (struct gpmi_nand_data*) ;
 scalar_t__ FUNC_1 (struct gpmi_nand_data*) ;
 int VAR_0 ;
 int FUNC_2 (struct gpmi_nand_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct gpmi_nand_data*) ;
 int VAR_3 ;
 int FUNC_4 (struct mtd_info*,int *,int ) ;
 int FUNC_5 (struct gpmi_nand_data*) ;
 int FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct nand_chip*,int) ;
 int FUNC_10 (struct nand_chip*,struct gpmi_nand_data*) ;
 int FUNC_11 (struct nand_chip*,int ) ;
 struct mtd_info* FUNC_12 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_13(struct gpmi_nand_data *VAR_4)
{
 struct nand_chip *VAR_5 = &VAR_4->nand;
 struct mtd_info *VAR_6 = FUNC_12(VAR_5);
 int VAR_7;


 VAR_6->name = "gpmi-nand";
 VAR_6->dev.parent = VAR_4->dev;


 FUNC_10(VAR_5, VAR_4);
 FUNC_11(VAR_5, VAR_4->pdev->dev.of_node);
 VAR_5->legacy.block_markbad = VAR_2;
 VAR_5->badblock_pattern = &VAR_1;
 VAR_5->options |= VAR_0;


 VAR_4->swap_block_mark = !FUNC_0(VAR_4);





 VAR_4->bch_geometry.payload_size = 1024;
 VAR_4->bch_geometry.auxiliary_size = 128;
 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7)
  goto err_out;

 FUNC_7(&VAR_4->base);
 VAR_4->base.ops = &VAR_3;
 VAR_5->controller = &VAR_4->base;

 VAR_7 = FUNC_9(VAR_5, FUNC_1(VAR_4) ? 2 : 1);
 if (VAR_7)
  goto err_out;

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  goto err_nand_cleanup;
 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7)
  goto err_nand_cleanup;

 VAR_7 = FUNC_4(VAR_6, ((void*)0), 0);
 if (VAR_7)
  goto err_nand_cleanup;
 return 0;

err_nand_cleanup:
 FUNC_6(VAR_5);
err_out:
 FUNC_3(VAR_4);
 return VAR_7;
}
