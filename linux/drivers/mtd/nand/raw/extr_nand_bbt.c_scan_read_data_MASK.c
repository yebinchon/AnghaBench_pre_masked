
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct nand_bbt_descr {size_t len; int options; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,size_t,size_t*,int *) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_1, uint8_t *VAR_2, loff_t VAR_3,
     struct nand_bbt_descr *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_1);
 size_t VAR_6;
 size_t VAR_7;

 VAR_7 = VAR_4->len;
 if (VAR_4->options & VAR_0)
  VAR_7++;

 return FUNC_0(VAR_5, VAR_3, VAR_7, &VAR_6, VAR_2);
}
