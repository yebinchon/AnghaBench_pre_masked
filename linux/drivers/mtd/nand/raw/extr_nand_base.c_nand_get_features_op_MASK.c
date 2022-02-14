
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_sdr_timings {int tRR_min; int tFEAT_max; int tWB_max; } ;
struct nand_operation {int dummy; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* read_byte ) (struct nand_chip*) ;int (* cmdfunc ) (struct nand_chip*,int ,int ,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,void*,int ) ;
 struct nand_op_instr FUNC_2 (int,int *,int ) ;
 struct nand_op_instr FUNC_3 (int ,int ) ;
 struct nand_op_instr FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nand_chip*,struct nand_operation*) ;
 struct nand_sdr_timings* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct nand_chip*,int ,int ,int) ;
 int FUNC_11 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_12(struct nand_chip *VAR_2, u8 VAR_3,
    void *VAR_4)
{
 u8 *VAR_5 = VAR_4;
 int VAR_6;

 if (FUNC_9(VAR_2)) {
  const struct nand_sdr_timings *VAR_7 =
   FUNC_8(&VAR_2->data_interface);
  struct nand_op_instr VAR_8[] = {
   FUNC_3(VAR_0, 0),
   FUNC_2(1, &VAR_3, FUNC_6(VAR_7->tWB_max)),
   FUNC_4(FUNC_5(VAR_7->tFEAT_max),
      FUNC_6(VAR_7->tRR_min)),
   FUNC_1(VAR_1,
          VAR_4, 0),
  };
  struct nand_operation VAR_9 = FUNC_0(VAR_2->cur_cs, VAR_8);

  return FUNC_7(VAR_2, &VAR_9);
 }

 VAR_2->legacy.cmdfunc(VAR_2, VAR_0, VAR_3, -1);
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
  VAR_5[VAR_6] = VAR_2->legacy.read_byte(VAR_2);

 return 0;
}
