
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
struct nand_sdr_timings {int tRR_min; int tR_max; int tWB_max; } ;
struct nand_operation {int ninstrs; } ;
struct TYPE_5__ {int naddrs; } ;
struct TYPE_4__ {int opcode; } ;
struct TYPE_6__ {TYPE_2__ addr; TYPE_1__ cmd; } ;
struct nand_op_instr {TYPE_3__ ctx; } ;
struct nand_chip {int options; int cur_cs; int data_interface; } ;
struct mtd_info {unsigned int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,unsigned int*,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 struct nand_op_instr FUNC_3 (unsigned int,void*,int ) ;
 struct nand_op_instr FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nand_chip*,struct nand_operation*) ;
 int FUNC_8 (struct nand_chip*,unsigned int*,unsigned int) ;
 struct nand_sdr_timings* FUNC_9 (int *) ;
 struct mtd_info* FUNC_10 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_11(struct nand_chip *VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, void *VAR_8,
         unsigned int VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_10(VAR_5);
 const struct nand_sdr_timings *VAR_11 =
  FUNC_9(&VAR_5->data_interface);
 u8 VAR_12[4];
 struct nand_op_instr VAR_13[] = {
  FUNC_2(VAR_1, 0),
  FUNC_1(3, VAR_12, FUNC_6(VAR_11->tWB_max)),
  FUNC_4(FUNC_5(VAR_11->tR_max),
     FUNC_6(VAR_11->tRR_min)),
  FUNC_3(VAR_9, VAR_8, 0),
 };
 struct nand_operation VAR_14 = FUNC_0(VAR_5->cur_cs, VAR_13);
 int VAR_15;


 if (!VAR_9)
  VAR_14.ninstrs--;

 if (VAR_7 >= VAR_10->writesize)
  VAR_13[0].ctx.cmd.opcode = VAR_3;
 else if (VAR_7 >= 256 &&
   !(VAR_5->options & VAR_0))
  VAR_13[0].ctx.cmd.opcode = VAR_2;

 VAR_15 = FUNC_8(VAR_5, VAR_12, VAR_7);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_12[1] = VAR_6;
 VAR_12[2] = VAR_6 >> 8;

 if (VAR_5->options & VAR_4) {
  VAR_12[3] = VAR_6 >> 16;
  VAR_13[1].ctx.addr.naddrs++;
 }

 return FUNC_7(VAR_5, &VAR_14);
}
