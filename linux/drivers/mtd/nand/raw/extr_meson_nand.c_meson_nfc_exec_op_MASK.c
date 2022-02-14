
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


typedef size_t u32 ;
struct nand_operation {size_t ninstrs; struct nand_op_instr* instrs; int cs; } ;
struct TYPE_11__ {int timeout_ms; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {int naddrs; int* addrs; } ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_12__ {TYPE_5__ waitrdy; TYPE_4__ data; TYPE_3__ addr; TYPE_1__ cmd; } ;
struct nand_op_instr {int type; int delay_ns; TYPE_6__ ctx; } ;
struct nand_chip {int dummy; } ;
struct meson_nfc_nand_chip {int level1_divider; } ;
struct TYPE_8__ {size_t chip_select; } ;
struct meson_nfc {scalar_t__ reg_base; TYPE_2__ param; } ;


 size_t FUNC_0 (int ,int) ;
 int VAR_0 ;





 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct nand_op_instr const*) ;
 void* FUNC_3 (struct nand_op_instr const*) ;
 int FUNC_4 (struct nand_op_instr const*,void*) ;
 int FUNC_5 (struct nand_op_instr const*,void*) ;
 int FUNC_6 (struct meson_nfc*,size_t) ;
 int FUNC_7 (struct meson_nfc*,int ) ;
 int FUNC_8 (struct nand_chip*,void*,int ) ;
 int FUNC_9 (struct nand_chip*,int ) ;
 int FUNC_10 (struct meson_nfc*,int) ;
 int FUNC_11 (struct nand_chip*,void*,int ) ;
 struct meson_nfc* FUNC_12 (struct nand_chip*) ;
 struct meson_nfc_nand_chip* FUNC_13 (struct nand_chip*) ;
 int FUNC_14 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct nand_chip *VAR_5,
        const struct nand_operation *VAR_6, bool VAR_7)
{
 struct meson_nfc_nand_chip *VAR_8 = FUNC_13(VAR_5);
 struct meson_nfc *VAR_9 = FUNC_12(VAR_5);
 const struct nand_op_instr *VAR_10 = ((void*)0);
 void *VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15;

 FUNC_9(VAR_5, VAR_6->cs);
 for (VAR_12 = 0; VAR_12 < VAR_6->ninstrs; VAR_12++) {
  VAR_10 = &VAR_6->instrs[VAR_12];
  VAR_13 = FUNC_0(FUNC_1(VAR_10->delay_ns),
       VAR_8->level1_divider *
       VAR_1);
  switch (VAR_10->type) {
  case 131:
   VAR_14 = VAR_9->param.chip_select | VAR_3;
   VAR_14 |= VAR_10->ctx.cmd.opcode & 0xff;
   FUNC_14(VAR_14, VAR_9->reg_base + VAR_4);
   FUNC_6(VAR_9, VAR_13);
   break;

  case 132:
   for (VAR_15 = 0; VAR_15 < VAR_10->ctx.addr.naddrs; VAR_15++) {
    VAR_14 = VAR_9->param.chip_select | VAR_2;
    VAR_14 |= VAR_10->ctx.addr.addrs[VAR_15] & 0xff;
    FUNC_14(VAR_14, VAR_9->reg_base + VAR_4);
   }
   FUNC_6(VAR_9, VAR_13);
   break;

  case 130:
   VAR_11 = FUNC_2(VAR_10);
   if (!VAR_11)
    return -VAR_0;
   FUNC_8(VAR_5, VAR_11, VAR_10->ctx.data.len);
   FUNC_4(VAR_10, VAR_11);
   break;

  case 129:
   VAR_11 = FUNC_3(VAR_10);
   if (!VAR_11)
    return -VAR_0;
   FUNC_11(VAR_5, VAR_11, VAR_10->ctx.data.len);
   FUNC_5(VAR_10, VAR_11);
   break;

  case 128:
   FUNC_7(VAR_9, VAR_10->ctx.waitrdy.timeout_ms);
   if (VAR_10->delay_ns)
    FUNC_6(VAR_9, VAR_13);
   break;
  }
 }
 FUNC_10(VAR_9, 1000);
 return 0;
}
