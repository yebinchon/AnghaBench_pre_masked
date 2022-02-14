
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_oob {int block_status; } ;
struct nand_chip {int dummy; } ;
struct mtd_oob_ops {scalar_t__ oobretlen; int * datbuf; void* oobbuf; int ooblen; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {int oobsize; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sm_oob*,int,scalar_t__) ;
 int FUNC_1 (struct mtd_info*,scalar_t__,struct mtd_oob_ops*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_3, loff_t VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_2(VAR_3);
 struct mtd_oob_ops VAR_6;
 struct sm_oob VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7, -1, VAR_2);
 VAR_7.block_status = 0x0F;



 VAR_6.mode = VAR_1;
 VAR_6.ooboffs = 0;
 VAR_6.ooblen = VAR_5->oobsize;
 VAR_6.oobbuf = (void *)&VAR_7;
 VAR_6.datbuf = ((void*)0);


 VAR_8 = FUNC_1(VAR_5, VAR_4, &VAR_6);
 if (VAR_8 < 0 || VAR_6.oobretlen != VAR_2) {
  FUNC_3("sm_common: can't mark sector at %i as bad\n",
     (int)VAR_4);
  return -VAR_0;
 }

 return 0;
}
