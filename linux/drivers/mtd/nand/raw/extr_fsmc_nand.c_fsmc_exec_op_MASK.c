
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


struct nand_operation {unsigned int ninstrs; struct nand_op_instr* instrs; } ;
struct TYPE_11__ {int timeout_ms; } ;
struct TYPE_9__ {int out; int in; } ;
struct TYPE_10__ {int len; TYPE_3__ buf; } ;
struct TYPE_8__ {int naddrs; int * addrs; } ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_12__ {TYPE_5__ waitrdy; TYPE_4__ data; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct nand_op_instr {int type; TYPE_6__ ctx; } ;
struct nand_chip {int dummy; } ;
struct fsmc_nand_data {int mode; int addr_va; int cmd_va; } ;







 int VAR_0 ;
 int FUNC_0 (struct fsmc_nand_data*,int ,int ) ;
 int FUNC_1 (struct fsmc_nand_data*,int ,int ) ;
 int FUNC_2 (struct fsmc_nand_data*,int ,int ) ;
 int FUNC_3 (struct fsmc_nand_data*,int ,int ) ;
 int FUNC_4 (char*,struct nand_op_instr const*) ;
 int FUNC_5 (struct nand_chip*,int ) ;
 struct fsmc_nand_data* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_1, const struct nand_operation *VAR_2,
   bool VAR_3)
{
 struct fsmc_nand_data *VAR_4 = FUNC_6(VAR_1);
 const struct nand_op_instr *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_7("Executing operation [%d instructions]:\n", VAR_2->ninstrs);

 for (VAR_7 = 0; VAR_7 < VAR_2->ninstrs; VAR_7++) {
  VAR_5 = &VAR_2->instrs[VAR_7];

  FUNC_4("  ", VAR_5);

  switch (VAR_5->type) {
  case 131:
   FUNC_8(VAR_5->ctx.cmd.opcode, VAR_4->cmd_va);
   break;

  case 132:
   for (VAR_8 = 0; VAR_8 < VAR_5->ctx.addr.naddrs; VAR_8++)
    FUNC_8(VAR_5->ctx.addr.addrs[VAR_8],
            VAR_4->addr_va);
   break;

  case 130:
   if (VAR_4->mode == VAR_0)
    FUNC_1(VAR_4, VAR_5->ctx.data.buf.in,
        VAR_5->ctx.data.len);
   else
    FUNC_0(VAR_4, VAR_5->ctx.data.buf.in,
           VAR_5->ctx.data.len);
   break;

  case 129:
   if (VAR_4->mode == VAR_0)
    FUNC_3(VAR_4,
         VAR_5->ctx.data.buf.out,
         VAR_5->ctx.data.len);
   else
    FUNC_2(VAR_4, VAR_5->ctx.data.buf.out,
            VAR_5->ctx.data.len);
   break;

  case 128:
   VAR_6 = FUNC_5(VAR_1,
      VAR_5->ctx.waitrdy.timeout_ms);
   break;
  }
 }

 return VAR_6;
}
