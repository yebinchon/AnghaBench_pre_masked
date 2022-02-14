
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int chip_shift; } ;
struct mtd_oob_ops {size_t len; size_t retlen; int mode; int * datbuf; } ;
struct mtd_info {int dummy; } ;
typedef int ops ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_oob_ops*,int ,int) ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct nand_chip*,int,struct mtd_oob_ops*) ;
 int FUNC_3 (struct nand_chip*,int) ;
 int FUNC_4 (struct nand_chip*,int) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
       size_t *VAR_4, const uint8_t *VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_1(VAR_1);
 int VAR_7 = (int)(VAR_2 >> VAR_6->chip_shift);
 struct mtd_oob_ops VAR_8;
 int VAR_9;

 FUNC_3(VAR_6, VAR_7);


 FUNC_4(VAR_6, 400);

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.len = VAR_3;
 VAR_8.datbuf = (uint8_t *)VAR_5;
 VAR_8.mode = VAR_0;

 VAR_9 = FUNC_2(VAR_6, VAR_2, &VAR_8);

 *VAR_4 = VAR_8.retlen;
 return VAR_9;
}
