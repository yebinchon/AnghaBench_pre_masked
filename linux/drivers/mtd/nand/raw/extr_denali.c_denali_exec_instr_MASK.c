
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int out; int in; } ;
struct TYPE_9__ {int force_8bit; int len; TYPE_3__ buf; } ;
struct TYPE_7__ {int naddrs; int * addrs; } ;
struct TYPE_6__ {int opcode; } ;
struct TYPE_10__ {TYPE_4__ data; TYPE_2__ addr; TYPE_1__ cmd; } ;
struct nand_op_instr {int type; TYPE_5__ ctx; } ;
struct nand_chip {int options; } ;
struct denali_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct denali_controller*,int ,int ,int ,int) ;
 int FUNC_2 (struct denali_controller*,int ,int ,int ,int) ;
 int FUNC_3 (struct denali_controller*,int ,int *,int) ;
 int FUNC_4 (struct denali_controller*) ;
 struct denali_controller* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_5,
        const struct nand_op_instr *VAR_6)
{
 struct denali_controller *VAR_7 = FUNC_5(VAR_5);

 switch (VAR_6->type) {
 case 131:
  FUNC_3(VAR_7, VAR_1,
     &VAR_6->ctx.cmd.opcode, 1);
  return 0;
 case 132:
  FUNC_3(VAR_7, VAR_0,
     VAR_6->ctx.addr.addrs,
     VAR_6->ctx.addr.naddrs);
  return 0;
 case 130:
  FUNC_1(VAR_7, VAR_2,
          VAR_6->ctx.data.buf.in,
          VAR_6->ctx.data.len,
          !VAR_6->ctx.data.force_8bit &&
          VAR_5->options & VAR_4);
  return 0;
 case 129:
  FUNC_2(VAR_7, VAR_2,
    VAR_6->ctx.data.buf.out,
    VAR_6->ctx.data.len,
    !VAR_6->ctx.data.force_8bit &&
    VAR_5->options & VAR_4);
  return 0;
 case 128:
  return FUNC_4(VAR_7);
 default:
  FUNC_0(1, "unsupported NAND instruction type: %d\n",
     VAR_6->type);

  return -VAR_3;
 }
}
