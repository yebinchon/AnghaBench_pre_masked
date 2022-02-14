
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_operation {int dummy; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int chip_delay; int dev_ready; } ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; } ;


 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct nand_chip*,struct nand_operation*) ;
 scalar_t__ FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 if (FUNC_5(VAR_0)) {
  struct nand_op_instr VAR_3[] = {
   FUNC_1(FUNC_2(VAR_1),
      FUNC_3(VAR_2)),
  };
  struct nand_operation VAR_4 = FUNC_0(VAR_0->cur_cs, VAR_3);

  return FUNC_4(VAR_0, &VAR_4);
 }


 if (!VAR_0->legacy.dev_ready)
  FUNC_7(VAR_0->legacy.chip_delay);
 else
  FUNC_6(VAR_0);

 return 0;
}
