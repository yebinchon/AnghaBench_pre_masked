
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nand_operation {int dummy; } ;
struct TYPE_4__ {int force_8bit; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct nand_op_instr {TYPE_2__ ctx; } ;
struct TYPE_6__ {int (* write_buf ) (struct nand_chip*,void const*,unsigned int) ;int (* write_byte ) (struct nand_chip*,int const) ;} ;
struct nand_chip {TYPE_3__ legacy; int cur_cs; } ;


 int VAR_0 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (unsigned int,void const*,int ) ;
 int FUNC_2 (struct nand_chip*,struct nand_operation*) ;
 scalar_t__ FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int const) ;
 int FUNC_5 (struct nand_chip*,void const*,unsigned int) ;

int FUNC_6(struct nand_chip *VAR_1, const void *VAR_2,
         unsigned int VAR_3, bool VAR_4)
{
 if (!VAR_3 || !VAR_2)
  return -VAR_0;

 if (FUNC_3(VAR_1)) {
  struct nand_op_instr VAR_5[] = {
   FUNC_1(VAR_3, VAR_2, 0),
  };
  struct nand_operation VAR_6 = FUNC_0(VAR_1->cur_cs, VAR_5);

  VAR_5[0].ctx.data.force_8bit = VAR_4;

  return FUNC_2(VAR_1, &VAR_6);
 }

 if (VAR_4) {
  const u8 *VAR_7 = VAR_2;
  unsigned int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
   VAR_1->legacy.write_byte(VAR_1, VAR_7[VAR_8]);
 } else {
  VAR_1->legacy.write_buf(VAR_1, VAR_2, VAR_3);
 }

 return 0;
}
