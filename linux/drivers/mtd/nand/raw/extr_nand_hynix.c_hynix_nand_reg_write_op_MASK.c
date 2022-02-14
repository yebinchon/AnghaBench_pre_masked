
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nand_operation {int dummy; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* write_byte ) (struct nand_chip*,int) ;int (* cmdfunc ) (struct nand_chip*,int ,int,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; } ;


 int VAR_0 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,int*,int ) ;
 struct nand_op_instr FUNC_2 (int,int*,int ) ;
 int FUNC_3 (struct nand_chip*,struct nand_operation*) ;
 scalar_t__ FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int ,int,int) ;
 int FUNC_6 (struct nand_chip*,int) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u16 VAR_4 = ((u16)VAR_2 << 8) | VAR_2;

 if (FUNC_4(VAR_1)) {
  struct nand_op_instr VAR_5[] = {
   FUNC_2(1, &VAR_2, 0),
   FUNC_1(1, &VAR_3, 0),
  };
  struct nand_operation VAR_6 = FUNC_0(VAR_1->cur_cs, VAR_5);

  return FUNC_3(VAR_1, &VAR_6);
 }

 VAR_1->legacy.cmdfunc(VAR_1, VAR_0, VAR_4, -1);
 VAR_1->legacy.write_byte(VAR_1, VAR_3);

 return 0;
}
