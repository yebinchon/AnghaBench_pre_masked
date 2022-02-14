
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mxic_nand_ctlr {int dev; int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct mxic_nand_ctlr* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_2)
{
 struct mxic_nand_ctlr *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_3->complete,
       FUNC_1(VAR_1));
 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "nand device timeout\n");
  return -VAR_0;
 }

 return 0;
}
