
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nand_chip {int controller; } ;
struct marvell_nfc_op {int* ndcb; } ;
struct marvell_nfc {scalar_t__ regs; TYPE_1__* caps; int dev; } ;
struct marvell_nand_chip {int dummy; } ;
struct TYPE_4__ {int ndcb0_csel; } ;
struct TYPE_3__ {int is_nfcv2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,int,int,int,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct marvell_nand_chip* FUNC_4 (struct nand_chip*) ;
 struct marvell_nfc* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (struct marvell_nand_chip*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct nand_chip *VAR_3,
     struct marvell_nfc_op *VAR_4)
{
 struct marvell_nand_chip *VAR_5 = FUNC_4(VAR_3);
 struct marvell_nfc *VAR_6 = FUNC_5(VAR_3->controller);

 FUNC_2(VAR_6->dev, "\nNDCR:  0x%08x\n"
  "NDCB0: 0x%08x\nNDCB1: 0x%08x\nNDCB2: 0x%08x\nNDCB3: 0x%08x\n",
  (u32)FUNC_3(VAR_6->regs + VAR_2), VAR_4->ndcb[0],
  VAR_4->ndcb[1], VAR_4->ndcb[2], VAR_4->ndcb[3]);

 FUNC_8(FUNC_6(VAR_5)->ndcb0_csel | VAR_4->ndcb[0],
         VAR_6->regs + VAR_0);
 FUNC_8(VAR_4->ndcb[1], VAR_6->regs + VAR_0);
 FUNC_7(VAR_4->ndcb[2], VAR_6->regs + VAR_0);





 if (VAR_4->ndcb[0] & VAR_1 ||
     FUNC_0(VAR_4->ndcb[0]) >= 6) {
  if (!FUNC_1(!VAR_6->caps->is_nfcv2))
   FUNC_7(VAR_4->ndcb[3], VAR_6->regs + VAR_0);
 }
}
