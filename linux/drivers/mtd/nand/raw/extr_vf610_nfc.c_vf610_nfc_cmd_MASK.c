
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vf610_nfc {int data_access; scalar_t__ regs; } ;
struct nand_subop {int dummy; } ;
struct TYPE_8__ {scalar_t__ in; scalar_t__ out; } ;
struct TYPE_9__ {int force_8bit; TYPE_3__ buf; } ;
struct TYPE_7__ {int opcode; } ;
struct TYPE_6__ {int * addrs; } ;
struct TYPE_10__ {TYPE_4__ data; TYPE_2__ cmd; TYPE_1__ addr; } ;
struct nand_op_instr {scalar_t__ type; TYPE_5__ ctx; } ;
struct nand_chip {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 struct vf610_nfc* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_subop const*,int) ;
 int FUNC_6 (struct nand_subop const*,int) ;
 int FUNC_7 (struct nand_subop const*,int) ;
 int FUNC_8 (struct nand_subop const*,int) ;
 struct nand_op_instr* FUNC_9 (struct nand_subop const*,int*) ;
 int FUNC_10 (struct vf610_nfc*,int ,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_12 (struct vf610_nfc*,int,int,int,int,int) ;
 int FUNC_13 (struct vf610_nfc*,int ,int ) ;
 int FUNC_14 (scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_15(struct nand_chip *VAR_17,
    const struct nand_subop *VAR_18)
{
 const struct nand_op_instr *VAR_19;
 struct vf610_nfc *VAR_20 = FUNC_4(VAR_17);
 int VAR_21 = -1, VAR_22 = 0, VAR_23 = 0;
 u32 VAR_24 = 0, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;
 bool VAR_29 = 0;







 VAR_19 = FUNC_9(VAR_18, &VAR_21);
 if (!VAR_19)
  return -VAR_9;

 if (VAR_19 && VAR_19->type == VAR_12) {
  VAR_27 |= VAR_19->ctx.cmd.opcode << VAR_0;
  VAR_28 |= VAR_3;

  VAR_19 = FUNC_9(VAR_18, &VAR_21);
 }

 if (VAR_19 && VAR_19->type == VAR_11) {
  int VAR_30 = FUNC_8(VAR_18, VAR_21);
  int VAR_31 = FUNC_5(VAR_18, VAR_21);

  for (; VAR_31 < VAR_30; VAR_31++) {
   u8 VAR_32 = VAR_19->ctx.addr.addrs[VAR_31];

   if (VAR_31 < 2)
    VAR_24 |= FUNC_0(VAR_31, VAR_32);
   else
    VAR_25 |= FUNC_3(VAR_31 - 2, VAR_32);
  }
  VAR_28 |= FUNC_1(VAR_30);

  VAR_19 = FUNC_9(VAR_18, &VAR_21);
 }

 if (VAR_19 && VAR_19->type == VAR_14) {
  VAR_22 = FUNC_6(VAR_18, VAR_21);
  VAR_23 = FUNC_7(VAR_18, VAR_21);
  VAR_29 = VAR_19->ctx.data.force_8bit;





  FUNC_14(VAR_20->regs + FUNC_2(0) + VAR_23,
         VAR_19->ctx.data.buf.out + VAR_23,
         VAR_22, !VAR_20->data_access);
  VAR_28 |= VAR_7;

  VAR_19 = FUNC_9(VAR_18, &VAR_21);
 }

 if (VAR_19 && VAR_19->type == VAR_12) {
  VAR_26 |= VAR_19->ctx.cmd.opcode << VAR_1;
  VAR_28 |= VAR_4;

  VAR_19 = FUNC_9(VAR_18, &VAR_21);
 }

 if (VAR_19 && VAR_19->type == VAR_15) {
  VAR_28 |= VAR_5;

  VAR_19 = FUNC_9(VAR_18, &VAR_21);
 }

 if (VAR_19 && VAR_19->type == VAR_13) {
  VAR_22 = FUNC_6(VAR_18, VAR_21);
  VAR_23 = FUNC_7(VAR_18, VAR_21);
  VAR_29 = VAR_19->ctx.data.force_8bit;

  VAR_28 |= VAR_6;
 }

 if (VAR_29 && (VAR_17->options & VAR_10))
  FUNC_10(VAR_20, VAR_16, VAR_8);

 VAR_27 |= VAR_28 << VAR_2;

 FUNC_12(VAR_20, VAR_24, VAR_25, VAR_26, VAR_27, VAR_22);

 if (VAR_19 && VAR_19->type == VAR_13) {




  FUNC_11(VAR_19->ctx.data.buf.in + VAR_23,
           VAR_20->regs + FUNC_2(0) + VAR_23,
           VAR_22, !VAR_20->data_access);
 }

 if (VAR_29 && (VAR_17->options & VAR_10))
  FUNC_13(VAR_20, VAR_16, VAR_8);

 return 0;
}
