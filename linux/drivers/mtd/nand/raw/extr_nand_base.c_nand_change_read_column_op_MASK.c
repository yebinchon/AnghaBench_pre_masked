
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nand_sdr_timings {int tCCS_min; } ;
struct nand_operation {int ninstrs; } ;
struct TYPE_4__ {int force_8bit; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct nand_op_instr {TYPE_2__ ctx; } ;
struct TYPE_6__ {int (* read_buf ) (struct nand_chip*,void*,unsigned int) ;int (* cmdfunc ) (struct nand_chip*,int ,unsigned int,int) ;} ;
struct nand_chip {TYPE_3__ legacy; int cur_cs; int data_interface; } ;
struct mtd_info {unsigned int writesize; unsigned int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,int *,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 struct nand_op_instr FUNC_3 (unsigned int,void*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nand_chip*,struct nand_operation*) ;
 int FUNC_6 (struct nand_chip*,int *,unsigned int) ;
 struct nand_sdr_timings* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct nand_chip*) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct nand_chip*,int ,unsigned int,int) ;
 int FUNC_11 (struct nand_chip*,void*,unsigned int) ;

int FUNC_12(struct nand_chip *VAR_4,
          unsigned int VAR_5, void *VAR_6,
          unsigned int VAR_7, bool VAR_8)
{
 struct mtd_info *VAR_9 = FUNC_9(VAR_4);

 if (VAR_7 && !VAR_6)
  return -VAR_0;

 if (VAR_5 + VAR_7 > VAR_9->writesize + VAR_9->oobsize)
  return -VAR_0;


 if (VAR_9->writesize <= 512)
  return -VAR_1;

 if (FUNC_8(VAR_4)) {
  const struct nand_sdr_timings *VAR_10 =
   FUNC_7(&VAR_4->data_interface);
  u8 VAR_11[2] = {};
  struct nand_op_instr VAR_12[] = {
   FUNC_2(VAR_2, 0),
   FUNC_1(2, VAR_11, 0),
   FUNC_2(VAR_3,
        FUNC_4(VAR_10->tCCS_min)),
   FUNC_3(VAR_7, VAR_6, 0),
  };
  struct nand_operation VAR_13 = FUNC_0(VAR_4->cur_cs, VAR_12);
  int VAR_14;

  VAR_14 = FUNC_6(VAR_4, VAR_11, VAR_5);
  if (VAR_14 < 0)
   return VAR_14;


  if (!VAR_7)
   VAR_13.ninstrs--;

  VAR_12[3].ctx.data.force_8bit = VAR_8;

  return FUNC_5(VAR_4, &VAR_13);
 }

 VAR_4->legacy.cmdfunc(VAR_4, VAR_2, VAR_5, -1);
 if (VAR_7)
  VAR_4->legacy.read_buf(VAR_4, VAR_6, VAR_7);

 return 0;
}
