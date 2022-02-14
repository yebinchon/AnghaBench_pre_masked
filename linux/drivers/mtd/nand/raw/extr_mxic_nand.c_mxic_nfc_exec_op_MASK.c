
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nand_operation {unsigned int ninstrs; struct nand_op_instr* instrs; } ;
struct TYPE_8__ {int * out; int * in; } ;
struct TYPE_9__ {int len; TYPE_3__ buf; } ;
struct TYPE_7__ {int naddrs; int * addrs; } ;
struct TYPE_6__ {int opcode; } ;
struct TYPE_10__ {TYPE_4__ data; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct nand_op_instr {int type; TYPE_5__ ctx; } ;
struct nand_chip {int dummy; } ;
struct mxic_nand_ctlr {scalar_t__ regs; int complete; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mxic_nand_ctlr*) ;
 int FUNC_10 (struct mxic_nand_ctlr*) ;
 int FUNC_11 (struct mxic_nand_ctlr*,int *,int *,int) ;
 int FUNC_12 (struct nand_chip*) ;
 struct mxic_nand_ctlr* FUNC_13 (struct nand_chip*) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct nand_chip *VAR_4,
       const struct nand_operation *VAR_5, bool VAR_6)
{
 struct mxic_nand_ctlr *VAR_7 = FUNC_13(VAR_4);
 const struct nand_op_instr *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 unsigned int VAR_10;

 FUNC_10(VAR_7);
 FUNC_8(&VAR_7->complete);
 for (VAR_10 = 0; VAR_10 < VAR_5->ninstrs; VAR_10++) {
  VAR_8 = &VAR_5->instrs[VAR_10];

  switch (VAR_8->type) {
  case 131:
   FUNC_14(0, VAR_7->regs + VAR_0);
   FUNC_14(VAR_1, VAR_7->regs + VAR_0);
   FUNC_14(FUNC_3(VAR_2) | FUNC_6(0x3F) |
          FUNC_4(0), VAR_7->regs + FUNC_7(0));

   VAR_9 = FUNC_11(VAR_7,
       &VAR_8->ctx.cmd.opcode,
       ((void*)0), 1);
   break;

  case 132:
   FUNC_14(FUNC_1(VAR_2) | FUNC_6(0x3F) |
          FUNC_2(VAR_8->ctx.addr.naddrs),
          VAR_7->regs + FUNC_7(0));
   VAR_9 = FUNC_11(VAR_7,
       VAR_8->ctx.addr.addrs, ((void*)0),
       VAR_8->ctx.addr.naddrs);
   break;

  case 130:
   FUNC_14(0x0, VAR_7->regs + FUNC_0(0));
   FUNC_14(FUNC_5(VAR_2) | FUNC_6(0x3F) |
          VAR_3, VAR_7->regs + FUNC_7(0));
   VAR_9 = FUNC_11(VAR_7, ((void*)0),
       VAR_8->ctx.data.buf.in,
       VAR_8->ctx.data.len);
   break;

  case 129:
   FUNC_14(VAR_8->ctx.data.len,
          VAR_7->regs + FUNC_0(0));
   FUNC_14(FUNC_5(VAR_2) | FUNC_6(0x3F),
          VAR_7->regs + FUNC_7(0));
   VAR_9 = FUNC_11(VAR_7,
       VAR_8->ctx.data.buf.out, ((void*)0),
       VAR_8->ctx.data.len);
   break;

  case 128:
   VAR_9 = FUNC_12(VAR_4);
   break;
  }
 }
 FUNC_9(VAR_7);

 return VAR_9;
}
