
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nand_subop {int dummy; } ;
struct TYPE_4__ {int * out; int * in; } ;
struct TYPE_5__ {scalar_t__ force_8bit; TYPE_1__ buf; } ;
struct TYPE_6__ {TYPE_2__ data; } ;
struct nand_op_instr {scalar_t__ type; TYPE_3__ ctx; } ;
struct nand_chip {int controller; } ;
struct marvell_nfc_op {unsigned int data_instr_idx; struct nand_op_instr* data_instr; } ;
struct marvell_nfc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (struct marvell_nfc*,int *,unsigned int) ;
 int FUNC_2 (struct marvell_nfc*,int const*,unsigned int) ;
 unsigned int FUNC_3 (struct nand_subop const*,unsigned int) ;
 unsigned int FUNC_4 (struct nand_subop const*,unsigned int) ;
 struct marvell_nfc* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_1,
         const struct nand_subop *VAR_2,
         struct marvell_nfc_op *VAR_3)
{
 struct marvell_nfc *VAR_4 = FUNC_5(VAR_1->controller);
 const struct nand_op_instr *VAR_5 = VAR_3->data_instr;
 unsigned int VAR_6 = VAR_3->data_instr_idx;
 unsigned int VAR_7 = FUNC_3(VAR_2, VAR_6);
 unsigned int VAR_8 = FUNC_4(VAR_2, VAR_6);
 bool VAR_9 = (VAR_5->type == VAR_0);
 int VAR_10;

 if (VAR_5->ctx.data.force_8bit)
  FUNC_0(VAR_1, 1);

 if (VAR_9) {
  u8 *VAR_11 = VAR_5->ctx.data.buf.in + VAR_8;

  VAR_10 = FUNC_1(VAR_4, VAR_11, VAR_7);
 } else {
  const u8 *VAR_12 = VAR_5->ctx.data.buf.out + VAR_8;

  VAR_10 = FUNC_2(VAR_4, VAR_12, VAR_7);
 }

 if (VAR_5->ctx.data.force_8bit)
  FUNC_0(VAR_1, 0);

 return VAR_10;
}
