
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_subop {TYPE_1__* instrs; } ;
struct nand_chip {int controller; } ;
struct marvell_nfc_op {int* ndcb; int cle_ale_delay_ns; int data_instr; } ;
struct marvell_nfc {scalar_t__ regs; } ;
struct TYPE_2__ {int type; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nand_chip*,int,char*) ;
 int FUNC_4 (struct nand_chip*,struct nand_subop const*,struct marvell_nfc_op*) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,struct marvell_nfc_op*) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,struct nand_subop const*,struct marvell_nfc_op*) ;
 int FUNC_9 (scalar_t__) ;
 struct marvell_nfc* FUNC_10 (int ) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct nand_chip *VAR_11,
      const struct nand_subop *VAR_12)
{
 struct marvell_nfc_op VAR_13;
 int VAR_14;

 FUNC_4(VAR_11, VAR_12, &VAR_13);






 VAR_13.ndcb[0] &= ~(FUNC_0(VAR_4) |
       FUNC_1(VAR_10));
 switch (VAR_12->instrs[0].type) {
 case 130:
  VAR_13.ndcb[0] |= FUNC_0(VAR_6);
  break;
 case 131:
  VAR_13.ndcb[0] |= FUNC_0(VAR_5);
  break;
 case 129:
  VAR_13.ndcb[0] |= FUNC_0(VAR_7) |
      FUNC_1(VAR_9);
  break;
 case 128:
  VAR_13.ndcb[0] |= FUNC_0(VAR_8) |
      FUNC_1(VAR_9);
  break;
 default:

  break;
 }

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14)
  return VAR_14;

 FUNC_6(VAR_11, &VAR_13);

 if (!VAR_13.data_instr) {
  VAR_14 = FUNC_7(VAR_11);
  FUNC_2(VAR_13.cle_ale_delay_ns);
  return VAR_14;
 }

 VAR_14 = FUNC_3(VAR_11, VAR_2 | VAR_3,
      "RDDREQ/WRDREQ while draining raw data");
 if (VAR_14)
  return VAR_14;

 FUNC_8(VAR_11, VAR_12, &VAR_13);
 VAR_14 = FUNC_7(VAR_11);
 if (VAR_14)
  return VAR_14;






 if (VAR_12->instrs[0].type == 128) {
  struct marvell_nfc *VAR_15 = FUNC_10(VAR_11->controller);

  FUNC_11(FUNC_9(VAR_15->regs + VAR_0) & ~VAR_1,
          VAR_15->regs + VAR_0);
 }

 return 0;
}
