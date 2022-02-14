
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_sdr_timings {int tADL_min; } ;
struct nand_operation {int ninstrs; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* read_byte ) (struct nand_chip*) ;int (* cmdfunc ) (struct nand_chip*,int ,int,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,int *,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nand_chip*,struct nand_operation*) ;
 struct nand_sdr_timings* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*,int ,int,int) ;
 int FUNC_8 (struct nand_chip*) ;

int FUNC_9(struct nand_chip *VAR_1, u8 *VAR_2)
{
 if (FUNC_6(VAR_1)) {
  const struct nand_sdr_timings *VAR_3 =
   FUNC_5(&VAR_1->data_interface);
  struct nand_op_instr VAR_4[] = {
   FUNC_2(VAR_0,
        FUNC_3(VAR_3->tADL_min)),
   FUNC_1(1, VAR_2, 0),
  };
  struct nand_operation VAR_5 = FUNC_0(VAR_1->cur_cs, VAR_4);

  if (!VAR_2)
   VAR_5.ninstrs--;

  return FUNC_4(VAR_1, &VAR_5);
 }

 VAR_1->legacy.cmdfunc(VAR_1, VAR_0, -1, -1);
 if (VAR_2)
  *VAR_2 = VAR_1->legacy.read_byte(VAR_1);

 return 0;
}
