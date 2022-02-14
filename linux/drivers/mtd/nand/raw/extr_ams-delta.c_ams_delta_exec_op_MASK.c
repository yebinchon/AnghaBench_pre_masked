
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


struct nand_operation {int ninstrs; struct nand_op_instr const* instrs; } ;
struct TYPE_11__ {int timeout_ms; } ;
struct TYPE_9__ {int * out; int in; } ;
struct TYPE_10__ {int len; TYPE_3__ buf; } ;
struct TYPE_8__ {int naddrs; int * addrs; } ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_12__ {TYPE_5__ waitrdy; TYPE_4__ data; TYPE_2__ addr; TYPE_1__ cmd; } ;
typedef struct nand_op_instr {int type; TYPE_6__ ctx; } const nand_op_instr ;
struct nand_chip {int dummy; } ;
struct ams_delta_nand {int gpiod_rdy; int gpiod_ale; int gpiod_cle; } ;







 int FUNC_0 (struct ams_delta_nand*,int) ;
 int FUNC_1 (struct ams_delta_nand*,int ,int) ;
 int FUNC_2 (struct ams_delta_nand*,int *,int) ;
 int FUNC_3 (int ,int) ;
 struct ams_delta_nand* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int ,int ) ;
 int FUNC_6 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0,
        const struct nand_operation *VAR_1, bool VAR_2)
{
 struct ams_delta_nand *VAR_3 = FUNC_4(VAR_0);
 const struct nand_op_instr *VAR_4;
 int VAR_5 = 0;

 if (VAR_2)
  return 0;

 FUNC_0(VAR_3, 1);

 for (VAR_4 = VAR_1->instrs; VAR_4 < VAR_1->instrs + VAR_1->ninstrs; VAR_4++) {
  switch (VAR_4->type) {
  case 131:
   FUNC_3(VAR_3->gpiod_cle, 1);
   FUNC_2(VAR_3, &VAR_4->ctx.cmd.opcode, 1);
   FUNC_3(VAR_3->gpiod_cle, 0);
   break;

  case 132:
   FUNC_3(VAR_3->gpiod_ale, 1);
   FUNC_2(VAR_3, VAR_4->ctx.addr.addrs,
         VAR_4->ctx.addr.naddrs);
   FUNC_3(VAR_3->gpiod_ale, 0);
   break;

  case 130:
   FUNC_1(VAR_3, VAR_4->ctx.data.buf.in,
        VAR_4->ctx.data.len);
   break;

  case 129:
   FUNC_2(VAR_3, VAR_4->ctx.data.buf.out,
         VAR_4->ctx.data.len);
   break;

  case 128:
   VAR_5 = VAR_3->gpiod_rdy ?
         FUNC_5(VAR_0, VAR_3->gpiod_rdy,
      VAR_4->ctx.waitrdy.timeout_ms) :
         FUNC_6(VAR_0,
      VAR_4->ctx.waitrdy.timeout_ms);
   break;
  }

  if (VAR_5)
   break;
 }

 FUNC_0(VAR_3, 0);

 return VAR_5;
}
