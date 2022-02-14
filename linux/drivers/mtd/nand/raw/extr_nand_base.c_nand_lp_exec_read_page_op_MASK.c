
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct nand_sdr_timings {int tRR_min; int tR_max; int tWB_max; } ;
struct nand_operation {int ninstrs; } ;
struct TYPE_3__ {int naddrs; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct nand_op_instr {TYPE_2__ ctx; } ;
struct nand_chip {int options; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,unsigned int*,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 struct nand_op_instr FUNC_3 (unsigned int,void*,int ) ;
 struct nand_op_instr FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nand_chip*,struct nand_operation*) ;
 int FUNC_8 (struct nand_chip*,unsigned int*,unsigned int) ;
 struct nand_sdr_timings* FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_3, unsigned int VAR_4,
         unsigned int VAR_5, void *VAR_6,
         unsigned int VAR_7)
{
 const struct nand_sdr_timings *VAR_8 =
  FUNC_9(&VAR_3->data_interface);
 u8 VAR_9[5];
 struct nand_op_instr VAR_10[] = {
  FUNC_2(VAR_0, 0),
  FUNC_1(4, VAR_9, 0),
  FUNC_2(VAR_1, FUNC_6(VAR_8->tWB_max)),
  FUNC_4(FUNC_5(VAR_8->tR_max),
     FUNC_6(VAR_8->tRR_min)),
  FUNC_3(VAR_7, VAR_6, 0),
 };
 struct nand_operation VAR_11 = FUNC_0(VAR_3->cur_cs, VAR_10);
 int VAR_12;


 if (!VAR_7)
  VAR_11.ninstrs--;

 VAR_12 = FUNC_8(VAR_3, VAR_9, VAR_5);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_9[2] = VAR_4;
 VAR_9[3] = VAR_4 >> 8;

 if (VAR_3->options & VAR_2) {
  VAR_9[4] = VAR_4 >> 16;
  VAR_10[1].ctx.addr.naddrs++;
 }

 return FUNC_7(VAR_3, &VAR_11);
}
