
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nand_sdr_timings {int tPROG_max; int tWB_max; int tADL_min; } ;
struct nand_operation {scalar_t__ ninstrs; int instrs; } ;
struct TYPE_5__ {int opcode; } ;
struct TYPE_4__ {int naddrs; } ;
struct TYPE_6__ {TYPE_2__ cmd; TYPE_1__ addr; } ;
struct nand_op_instr {TYPE_3__ ctx; } ;
struct nand_chip {int options; int cur_cs; int data_interface; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int ,int*,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 struct nand_op_instr FUNC_3 (unsigned int,void const*,int ) ;
 struct nand_op_instr FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nand_chip*,struct nand_operation*) ;
 int FUNC_8 (struct nand_chip*,int*,unsigned int) ;
 struct nand_sdr_timings* FUNC_9 (int *) ;
 int FUNC_10 (struct nand_chip*,int*) ;
 struct mtd_info* FUNC_11 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_12(struct nand_chip *VAR_7, unsigned int VAR_8,
      unsigned int VAR_9, const void *VAR_10,
      unsigned int VAR_11, bool VAR_12)
{
 struct mtd_info *VAR_13 = FUNC_11(VAR_7);
 const struct nand_sdr_timings *VAR_14 =
  FUNC_9(&VAR_7->data_interface);
 u8 VAR_15[5] = {};
 struct nand_op_instr VAR_16[] = {





  FUNC_2(VAR_2, 0),
  FUNC_2(VAR_5, 0),
  FUNC_1(0, VAR_15, FUNC_6(VAR_14->tADL_min)),
  FUNC_3(VAR_11, VAR_10, 0),
  FUNC_2(VAR_1, FUNC_6(VAR_14->tWB_max)),
  FUNC_4(FUNC_5(VAR_14->tPROG_max), 0),
 };
 struct nand_operation VAR_17 = FUNC_0(VAR_7->cur_cs, VAR_16);
 int VAR_18 = FUNC_8(VAR_7, VAR_15, VAR_9);
 int VAR_19;
 u8 VAR_20;

 if (VAR_18 < 0)
  return VAR_18;

 VAR_15[VAR_18++] = VAR_8;
 VAR_15[VAR_18++] = VAR_8 >> 8;
 if (VAR_7->options & VAR_6)
  VAR_15[VAR_18++] = VAR_8 >> 16;

 VAR_16[2].ctx.addr.naddrs = VAR_18;


 if (!VAR_12) {
  VAR_17.ninstrs -= 2;

  if (!VAR_11)
   VAR_17.ninstrs--;
 }

 if (VAR_13->writesize <= 512) {





  if (VAR_9 >= VAR_13->writesize)
   VAR_16[0].ctx.cmd.opcode = VAR_4;
  else if (VAR_9 >= 256 &&
    !(VAR_7->options & VAR_0))
   VAR_16[0].ctx.cmd.opcode = VAR_3;
 } else {




  VAR_17.instrs++;
  VAR_17.ninstrs--;
 }

 VAR_19 = FUNC_7(VAR_7, &VAR_17);
 if (!VAR_12 || VAR_19)
  return VAR_19;

 VAR_19 = FUNC_10(VAR_7, &VAR_20);
 if (VAR_19)
  return VAR_19;

 return VAR_20;
}
