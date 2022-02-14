
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_sdr_timings {int tRST_max; int tWB_max; } ;
struct nand_operation {int dummy; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* cmdfunc ) (struct nand_chip*,int ,int,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int ,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nand_chip*,struct nand_operation*) ;
 struct nand_sdr_timings* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,int ,int,int) ;

int FUNC_9(struct nand_chip *VAR_1)
{
 if (FUNC_7(VAR_1)) {
  const struct nand_sdr_timings *VAR_2 =
   FUNC_6(&VAR_1->data_interface);
  struct nand_op_instr VAR_3[] = {
   FUNC_1(VAR_0, FUNC_4(VAR_2->tWB_max)),
   FUNC_2(FUNC_3(VAR_2->tRST_max), 0),
  };
  struct nand_operation VAR_4 = FUNC_0(VAR_1->cur_cs, VAR_3);

  return FUNC_5(VAR_1, &VAR_4);
 }

 VAR_1->legacy.cmdfunc(VAR_1, VAR_0, -1, -1);

 return 0;
}
