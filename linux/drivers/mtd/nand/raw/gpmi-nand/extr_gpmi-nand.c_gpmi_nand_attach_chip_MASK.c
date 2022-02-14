
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int bbt_options; int options; } ;
struct gpmi_nand_data {int swap_block_mark; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (struct gpmi_nand_data*) ;
 struct gpmi_nand_data* FUNC_2 (struct nand_chip*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_3)
{
 struct gpmi_nand_data *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_3->bbt_options & VAR_1) {
  VAR_3->bbt_options |= VAR_0;

  if (FUNC_3(VAR_4->dev->of_node,
       "fsl,no-blockmark-swap"))
   VAR_4->swap_block_mark = 0;
 }
 FUNC_0(VAR_4->dev, "Blockmark swapping %sabled\n",
  VAR_4->swap_block_mark ? "en" : "dis");

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->options |= VAR_2;

 return 0;
}
