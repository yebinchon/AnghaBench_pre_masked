
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nand_chip {int bbt_options; int bbt_erase_shift; int base; } ;
struct nand_bbt_descr {int len; int options; int offs; scalar_t__ veroffs; } ;
struct mtd_info {int size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_6, struct nand_bbt_descr *VAR_7)
{
 u64 VAR_8 = FUNC_2(&VAR_6->base);
 struct mtd_info *VAR_9 = FUNC_1(VAR_6);
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (!VAR_7)
  return;

 VAR_10 = VAR_7->len;
 VAR_11 = VAR_7->options & VAR_1;

 FUNC_0((VAR_6->bbt_options & VAR_0) &&
   !(VAR_6->bbt_options & VAR_4));
 FUNC_0(!VAR_11);

 if (VAR_7->options & VAR_5)
  VAR_10++;

 if (VAR_7->options & VAR_0) {
  FUNC_0(!(VAR_6->bbt_options & VAR_4));
  FUNC_0(!(VAR_6->bbt_options & VAR_0));
  FUNC_0(VAR_7->offs);
  if (VAR_7->options & VAR_5)
   FUNC_0(VAR_7->veroffs != VAR_7->len);
  FUNC_0(VAR_7->options & VAR_3);
 }

 if (VAR_7->options & VAR_2)
  VAR_12 = VAR_8 >> VAR_6->bbt_erase_shift;
 else
  VAR_12 = VAR_9->size >> VAR_6->bbt_erase_shift;
 VAR_12 >>= 3;
 VAR_12 *= VAR_11;
 if (VAR_7->options & VAR_0)
  VAR_12 += VAR_10;
 FUNC_0(VAR_12 > (1 << VAR_6->bbt_erase_shift));
}
