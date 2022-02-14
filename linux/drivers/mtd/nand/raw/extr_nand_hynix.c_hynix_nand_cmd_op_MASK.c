
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_operation {int dummy; } ;
struct nand_op_instr {int dummy; } ;
struct TYPE_2__ {int (* cmdfunc ) (struct nand_chip*,int ,int,int) ;} ;
struct nand_chip {TYPE_1__ legacy; int cur_cs; } ;


 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nand_chip*,struct nand_operation*) ;
 scalar_t__ FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0, u8 VAR_1)
{
 if (FUNC_3(VAR_0)) {
  struct nand_op_instr VAR_2[] = {
   FUNC_1(VAR_1, 0),
  };
  struct nand_operation VAR_3 = FUNC_0(VAR_0->cur_cs, VAR_2);

  return FUNC_2(VAR_0, &VAR_3);
 }

 VAR_0->legacy.cmdfunc(VAR_0, VAR_1, -1, -1);

 return 0;
}
