
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_sdr_timings {int tPROG_max; int tWB_max; } ;
struct nand_operation {int dummy; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* waitfunc ) (struct nand_chip*) ;int (* cmdfunc ) (struct nand_chip*,int ,int,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int ,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nand_chip*,struct nand_operation*) ;
 struct nand_sdr_timings* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,int*) ;
 int FUNC_9 (struct nand_chip*,int ,int,int) ;
 int FUNC_10 (struct nand_chip*) ;

int FUNC_11(struct nand_chip *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 if (FUNC_7(VAR_3)) {
  const struct nand_sdr_timings *VAR_6 =
   FUNC_6(&VAR_3->data_interface);
  struct nand_op_instr VAR_7[] = {
   FUNC_1(VAR_1,
        FUNC_4(VAR_6->tWB_max)),
   FUNC_2(FUNC_3(VAR_6->tPROG_max), 0),
  };
  struct nand_operation VAR_8 = FUNC_0(VAR_3->cur_cs, VAR_7);

  VAR_4 = FUNC_5(VAR_3, &VAR_8);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_8(VAR_3, &VAR_5);
  if (VAR_4)
   return VAR_4;
 } else {
  VAR_3->legacy.cmdfunc(VAR_3, VAR_1, -1, -1);
  VAR_4 = VAR_3->legacy.waitfunc(VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_5 = VAR_4;
 }

 if (VAR_5 & VAR_2)
  return -VAR_0;

 return 0;
}
