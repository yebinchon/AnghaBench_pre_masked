
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u64 ;
struct nand_chip {int bbt_erase_shift; int base; } ;
struct nand_bbt_descr {int options; } ;
struct TYPE_2__ {int badblocks; } ;
struct mtd_info {int size; TYPE_1__ ecc_stats; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nand_chip*,int,int ) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 unsigned long long FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,unsigned long long) ;
 int FUNC_7 (struct nand_chip*,struct nand_bbt_descr*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_3, uint8_t *VAR_4,
        struct nand_bbt_descr *VAR_5, int VAR_6)
{
 u64 VAR_7 = FUNC_4(&VAR_3->base);
 struct mtd_info *VAR_8 = FUNC_2(VAR_3);
 int VAR_9, VAR_10, VAR_11;
 loff_t VAR_12;

 FUNC_5("Scanning device for bad blocks\n");

 if (VAR_6 == -1) {
  VAR_10 = VAR_8->size >> VAR_3->bbt_erase_shift;
  VAR_11 = 0;
  VAR_12 = 0;
 } else {
  if (VAR_6 >= FUNC_3(&VAR_3->base)) {
   FUNC_6("create_bbt(): chipnr (%d) > available chips (%d)\n",
           VAR_6 + 1, FUNC_3(&VAR_3->base));
   return -VAR_1;
  }
  VAR_10 = VAR_7 >> VAR_3->bbt_erase_shift;
  VAR_11 = VAR_6 * VAR_10;
  VAR_10 += VAR_11;
  VAR_12 = (loff_t)VAR_11 << VAR_3->bbt_erase_shift;
 }

 for (VAR_9 = VAR_11; VAR_9 < VAR_10; VAR_9++) {
  int VAR_13;

  FUNC_0(VAR_5->options & VAR_2);

  VAR_13 = FUNC_7(VAR_3, VAR_5, VAR_12, VAR_4);
  if (VAR_13 < 0)
   return VAR_13;

  if (VAR_13) {
   FUNC_1(VAR_3, VAR_9, VAR_0);
   FUNC_6("Bad eraseblock %d at 0x%012llx\n",
    VAR_9, (unsigned long long)VAR_12);
   VAR_8->ecc_stats.badblocks++;
  }

  VAR_12 += (1 << VAR_3->bbt_erase_shift);
 }
 return 0;
}
