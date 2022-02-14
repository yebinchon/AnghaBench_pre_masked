
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
struct TYPE_6__ {int (* write_buf ) (struct nand_chip*,void const*,unsigned int) ;int (* cmdfunc ) (struct nand_chip*,int ,unsigned int,int) ;} ;
struct nand_chip {TYPE_3__ legacy; int cur_cs; int data_interface; } ;
struct mtd_info {unsigned int writesize; unsigned int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nand_operation FUNC_0 (int ,struct nand_op_instr*) ;
 struct nand_op_instr FUNC_1 (int,int *,int ) ;
 struct nand_op_instr FUNC_2 (int ,int ) ;
 struct nand_op_instr FUNC_3 (unsigned int,void const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nand_chip*,struct nand_operation*) ;
 int FUNC_6 (struct nand_chip*,int *,unsigned int) ;
 struct nand_sdr_timings* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct nand_chip*) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct nand_chip*,int ,unsigned int,int) ;
 int FUNC_11 (struct nand_chip*,void const*,unsigned int) ;

int FUNC_12(struct nand_chip *VAR_3,
    unsigned int VAR_4,
    const void *VAR_5, unsigned int VAR_6,
    bool VAR_7)
{
 struct mtd_info *VAR_8 = FUNC_9(VAR_3);

 if (VAR_6 && !VAR_5)
  return -VAR_0;

 if (VAR_4 + VAR_6 > VAR_8->writesize + VAR_8->oobsize)
  return -VAR_0;


 if (VAR_8->writesize <= 512)
  return -VAR_1;

 if (FUNC_8(VAR_3)) {
  const struct nand_sdr_timings *VAR_9 =
   FUNC_7(&VAR_3->data_interface);
  u8 VAR_10[2];
  struct nand_op_instr VAR_11[] = {
   FUNC_2(VAR_2, 0),
   FUNC_1(2, VAR_10, FUNC_4(VAR_9->tCCS_min)),
   FUNC_3(VAR_6, VAR_5, 0),
  };
  struct nand_operation VAR_12 = FUNC_0(VAR_3->cur_cs, VAR_11);
  int VAR_13;

  VAR_13 = FUNC_6(VAR_3, VAR_10, VAR_4);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_11[2].ctx.data.force_8bit = VAR_7;


  if (!VAR_6)
   VAR_12.ninstrs--;

  return FUNC_5(VAR_3, &VAR_12);
 }

 VAR_3->legacy.cmdfunc(VAR_3, VAR_2, VAR_4, -1);
 if (VAR_6)
  VAR_3->legacy.write_buf(VAR_3, VAR_5, VAR_6);

 return 0;
}
