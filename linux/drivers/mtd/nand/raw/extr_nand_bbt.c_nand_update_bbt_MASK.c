
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int bbt_erase_shift; int page_shift; int chip_shift; int bbt; struct nand_bbt_descr* bbt_md; struct nand_bbt_descr* bbt_td; } ;
struct nand_bbt_descr {int options; int * version; } ;
struct mtd_info {int oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int *,struct nand_bbt_descr*,struct nand_bbt_descr*,int) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_5, loff_t VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_2(VAR_5);
 int VAR_8, VAR_9 = 0;
 int VAR_10, VAR_11;
 uint8_t *VAR_12;
 struct nand_bbt_descr *VAR_13 = VAR_5->bbt_td;
 struct nand_bbt_descr *VAR_14 = VAR_5->bbt_md;

 if (!VAR_5->bbt || !VAR_13)
  return -VAR_0;


 VAR_8 = (1 << VAR_5->bbt_erase_shift);
 VAR_8 += (VAR_8 >> VAR_5->page_shift) * VAR_7->oobsize;
 VAR_12 = FUNC_1(VAR_8, VAR_2);
 if (!VAR_12)
  return -VAR_1;


 if (VAR_13->options & VAR_3) {
  VAR_10 = (int)(VAR_6 >> VAR_5->chip_shift);
  VAR_11 = VAR_10;
 } else {
  VAR_10 = 0;
  VAR_11 = -1;
 }

 VAR_13->version[VAR_10]++;
 if (VAR_14)
  VAR_14->version[VAR_10]++;


 if (VAR_13->options & VAR_4) {
  VAR_9 = FUNC_3(VAR_5, VAR_12, VAR_13, VAR_14, VAR_11);
  if (VAR_9 < 0)
   goto out;
 }

 if (VAR_14 && (VAR_14->options & VAR_4)) {
  VAR_9 = FUNC_3(VAR_5, VAR_12, VAR_14, VAR_13, VAR_11);
 }

 out:
 FUNC_0(VAR_12);
 return VAR_9;
}
