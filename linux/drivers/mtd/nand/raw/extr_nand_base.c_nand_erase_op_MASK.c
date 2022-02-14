
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
struct nand_sdr_timings {int tBERS_max; int tWB_max; } ;
struct nand_operation {int dummy; } ;
struct TYPE_4__ {int naddrs; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct nand_op_instr {TYPE_2__ ctx; } ;
struct TYPE_6__ {int (* waitfunc ) (struct nand_chip*) ;int (* cmdfunc ) (struct nand_chip*,int ,int,int) ;} ;
struct nand_chip {unsigned int phys_erase_shift; unsigned int page_shift; int options; TYPE_3__ legacy; int cur_cs; int data_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,unsigned int*,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 struct nand_op_instr FUNC_3 (int ,int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nand_chip*,struct nand_operation*) ;
 struct nand_sdr_timings* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,unsigned int*) ;
 int FUNC_9 (struct nand_chip*,int ,int,unsigned int) ;
 int FUNC_10 (struct nand_chip*,int ,int,int) ;
 int FUNC_11 (struct nand_chip*) ;

int FUNC_12(struct nand_chip *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_6 <<
       (VAR_5->phys_erase_shift - VAR_5->page_shift);
 int VAR_8;
 u8 VAR_9;

 if (FUNC_7(VAR_5)) {
  const struct nand_sdr_timings *VAR_10 =
   FUNC_6(&VAR_5->data_interface);
  u8 VAR_11[3] = { VAR_7, VAR_7 >> 8, VAR_7 >> 16 };
  struct nand_op_instr VAR_12[] = {
   FUNC_2(VAR_1, 0),
   FUNC_1(2, VAR_11, 0),
   FUNC_2(VAR_2,
        FUNC_4(VAR_10->tWB_max)),
   FUNC_3(FUNC_4(VAR_10->tBERS_max), 0),
  };
  struct nand_operation VAR_13 = FUNC_0(VAR_5->cur_cs, VAR_12);

  if (VAR_5->options & VAR_3)
   VAR_12[1].ctx.addr.naddrs++;

  VAR_8 = FUNC_5(VAR_5, &VAR_13);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_8(VAR_5, &VAR_9);
  if (VAR_8)
   return VAR_8;
 } else {
  VAR_5->legacy.cmdfunc(VAR_5, VAR_1, -1, VAR_7);
  VAR_5->legacy.cmdfunc(VAR_5, VAR_2, -1, -1);

  VAR_8 = VAR_5->legacy.waitfunc(VAR_5);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9 = VAR_8;
 }

 if (VAR_9 & VAR_4)
  return -VAR_0;

 return 0;
}
