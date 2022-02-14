
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_sdr_timings {int tFEAT_max; int tWB_max; int tADL_min; } ;
struct nand_operation {int dummy; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* waitfunc ) (struct nand_chip*) ;int (* write_byte ) (struct nand_chip*,int const) ;int (* cmdfunc ) (struct nand_chip*,int ,int ,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,void const*,int ) ;
 struct nand_op_instr FUNC_2 (int,int *,int ) ;
 struct nand_op_instr FUNC_3 (int ,int ) ;
 struct nand_op_instr FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nand_chip*,struct nand_operation*) ;
 struct nand_sdr_timings* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct nand_chip*,int ,int ,int) ;
 int FUNC_11 (struct nand_chip*,int const) ;
 int FUNC_12 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_13(struct nand_chip *VAR_4, u8 VAR_5,
    const void *VAR_6)
{
 const u8 *VAR_7 = VAR_6;
 int VAR_8, VAR_9;

 if (FUNC_9(VAR_4)) {
  const struct nand_sdr_timings *VAR_10 =
   FUNC_8(&VAR_4->data_interface);
  struct nand_op_instr VAR_11[] = {
   FUNC_3(VAR_1, 0),
   FUNC_2(1, &VAR_5, FUNC_6(VAR_10->tADL_min)),
   FUNC_1(VAR_3, VAR_6,
           FUNC_6(VAR_10->tWB_max)),
   FUNC_4(FUNC_5(VAR_10->tFEAT_max), 0),
  };
  struct nand_operation VAR_12 = FUNC_0(VAR_4->cur_cs, VAR_11);

  return FUNC_7(VAR_4, &VAR_12);
 }

 VAR_4->legacy.cmdfunc(VAR_4, VAR_1, VAR_5, -1);
 for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8)
  VAR_4->legacy.write_byte(VAR_4, VAR_7[VAR_8]);

 VAR_9 = VAR_4->legacy.waitfunc(VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 & VAR_2)
  return -VAR_0;

 return 0;
}
