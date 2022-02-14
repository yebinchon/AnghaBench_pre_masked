
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stm32_fmc2_nfc {size_t cs_sel; int * addr_base; int * cmd_base; } ;
struct nand_operation {unsigned int ninstrs; struct nand_op_instr* instrs; int cs; } ;
struct TYPE_11__ {int timeout_ms; } ;
struct TYPE_9__ {int out; int in; } ;
struct TYPE_10__ {int force_8bit; int len; TYPE_3__ buf; } ;
struct TYPE_8__ {unsigned int naddrs; int * addrs; } ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_12__ {TYPE_5__ waitrdy; TYPE_4__ data; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct nand_op_instr {int type; TYPE_6__ ctx; } ;
struct nand_chip {int controller; } ;







 int FUNC_0 (struct nand_chip*,int ) ;
 int FUNC_1 (struct nand_chip*,int ,int ,int ) ;
 int FUNC_2 (struct nand_chip*,int ) ;
 int FUNC_3 (struct nand_chip*,int ,int ,int ) ;
 struct stm32_fmc2_nfc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_0,
         const struct nand_operation *VAR_1,
         bool VAR_2)
{
 struct stm32_fmc2_nfc *VAR_3 = FUNC_4(VAR_0->controller);
 const struct nand_op_instr *VAR_4 = ((void*)0);
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_1->cs);
 if (VAR_7)
  return VAR_7;

 if (VAR_2)
  return VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_1->ninstrs; VAR_5++) {
  VAR_4 = &VAR_1->instrs[VAR_5];

  switch (VAR_4->type) {
  case 131:
   FUNC_5(VAR_4->ctx.cmd.opcode,
           VAR_3->cmd_base[VAR_3->cs_sel]);
   break;

  case 132:
   for (VAR_6 = 0; VAR_6 < VAR_4->ctx.addr.naddrs; VAR_6++)
    FUNC_5(VAR_4->ctx.addr.addrs[VAR_6],
            VAR_3->addr_base[VAR_3->cs_sel]);
   break;

  case 130:
   FUNC_1(VAR_0, VAR_4->ctx.data.buf.in,
          VAR_4->ctx.data.len,
          VAR_4->ctx.data.force_8bit);
   break;

  case 129:
   FUNC_3(VAR_0, VAR_4->ctx.data.buf.out,
           VAR_4->ctx.data.len,
           VAR_4->ctx.data.force_8bit);
   break;

  case 128:
   VAR_7 = FUNC_0(VAR_0,
      VAR_4->ctx.waitrdy.timeout_ms);
   break;
  }
 }

 return VAR_7;
}
