
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_sdr_timings {int tRR_min; int tR_max; int tWB_max; } ;
struct nand_operation {int ninstrs; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* read_byte ) (struct nand_chip*) ;int (* cmdfunc ) (struct nand_chip*,int ,int ,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (unsigned int,void*,int ) ;
 struct nand_op_instr FUNC_2 (int,int *,int ) ;
 struct nand_op_instr FUNC_3 (int ,int ) ;
 struct nand_op_instr FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nand_chip*,struct nand_operation*) ;
 struct nand_sdr_timings* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct nand_chip*,int ,int ,int) ;
 int FUNC_11 (struct nand_chip*) ;

int FUNC_12(struct nand_chip *VAR_2, u8 VAR_3, void *VAR_4,
       unsigned int VAR_5)
{
 unsigned int VAR_6;
 u8 *VAR_7 = VAR_4;

 if (VAR_5 && !VAR_4)
  return -VAR_0;

 if (FUNC_9(VAR_2)) {
  const struct nand_sdr_timings *VAR_8 =
   FUNC_8(&VAR_2->data_interface);
  struct nand_op_instr VAR_9[] = {
   FUNC_3(VAR_1, 0),
   FUNC_2(1, &VAR_3, FUNC_6(VAR_8->tWB_max)),
   FUNC_4(FUNC_5(VAR_8->tR_max),
      FUNC_6(VAR_8->tRR_min)),
   FUNC_1(VAR_5, VAR_4, 0),
  };
  struct nand_operation VAR_10 = FUNC_0(VAR_2->cur_cs, VAR_9);


  if (!VAR_5)
   VAR_10.ninstrs--;

  return FUNC_7(VAR_2, &VAR_10);
 }

 VAR_2->legacy.cmdfunc(VAR_2, VAR_1, VAR_3, -1);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_7[VAR_6] = VAR_2->legacy.read_byte(VAR_2);

 return 0;
}
