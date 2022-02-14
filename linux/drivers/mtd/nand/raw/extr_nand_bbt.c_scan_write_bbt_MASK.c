
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct mtd_oob_ops {size_t len; int * oobbuf; int * datbuf; int ooblen; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {int oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_1, loff_t VAR_2, size_t VAR_3,
     uint8_t *VAR_4, uint8_t *VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_1(VAR_1);
 struct mtd_oob_ops VAR_7;

 VAR_7.mode = VAR_0;
 VAR_7.ooboffs = 0;
 VAR_7.ooblen = VAR_6->oobsize;
 VAR_7.datbuf = VAR_4;
 VAR_7.oobbuf = VAR_5;
 VAR_7.len = VAR_3;

 return FUNC_0(VAR_6, VAR_2, &VAR_7);
}
