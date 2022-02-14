
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_subop {int dummy; } ;
struct nand_chip {int controller; } ;
struct marvell_nfc_op {int rdy_delay_ns; scalar_t__ rdy_timeout_ms; int data_delay_ns; int cle_ale_delay_ns; TYPE_1__* data_instr; } ;
struct marvell_nfc {scalar_t__ regs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*,int,char*) ;
 int FUNC_2 (struct nand_chip*,struct nand_subop const*,struct marvell_nfc_op*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,struct marvell_nfc_op*) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,scalar_t__) ;
 int FUNC_7 (struct nand_chip*,struct nand_subop const*,struct marvell_nfc_op*) ;
 int FUNC_8 (scalar_t__) ;
 struct marvell_nfc* FUNC_9 (int ) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct nand_chip *VAR_5,
           const struct nand_subop *VAR_6)
{
 struct marvell_nfc_op VAR_7;
 bool VAR_8;
 int VAR_9;

 FUNC_2(VAR_5, VAR_6, &VAR_7);
 VAR_8 = (VAR_7.data_instr->type == VAR_0);

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_4(VAR_5, &VAR_7);
 VAR_9 = FUNC_1(VAR_5, VAR_3 | VAR_4,
      "RDDREQ/WRDREQ while draining raw data");
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_7.cle_ale_delay_ns);

 if (VAR_8) {
  if (VAR_7.rdy_timeout_ms) {
   VAR_9 = FUNC_6(VAR_5, VAR_7.rdy_timeout_ms);
   if (VAR_9)
    return VAR_9;
  }

  FUNC_0(VAR_7.rdy_delay_ns);
 }

 FUNC_7(VAR_5, VAR_6, &VAR_7);
 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_7.data_delay_ns);

 if (!VAR_8) {
  if (VAR_7.rdy_timeout_ms) {
   VAR_9 = FUNC_6(VAR_5, VAR_7.rdy_timeout_ms);
   if (VAR_9)
    return VAR_9;
  }

  FUNC_0(VAR_7.rdy_delay_ns);
 }






 if (!VAR_8) {
  struct marvell_nfc *VAR_10 = FUNC_9(VAR_5->controller);

  FUNC_10(FUNC_8(VAR_10->regs + VAR_1) & ~VAR_2,
          VAR_10->regs + VAR_1);
 }

 return 0;
}
