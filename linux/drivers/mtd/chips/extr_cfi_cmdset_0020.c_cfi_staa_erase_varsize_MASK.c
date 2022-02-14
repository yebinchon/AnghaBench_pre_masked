
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int numeraseregions; struct mtd_erase_region_info* eraseregions; struct map_info* priv; } ;
struct mtd_erase_region_info {int offset; int erasesize; unsigned long numblocks; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct erase_info {int addr; scalar_t__ len; } ;
struct cfi_private {int chipshift; int numchips; int * chips; } ;


 int VAR_0 ;
 int FUNC_0 (struct map_info*,int *,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1,
      struct erase_info *VAR_2)
{ struct map_info *VAR_3 = VAR_1->priv;
 struct cfi_private *VAR_4 = VAR_3->fldrv_priv;
 unsigned long VAR_5, VAR_6;
 int VAR_7, VAR_8 = 0;
 int VAR_9, VAR_10;
 struct mtd_erase_region_info *VAR_11 = VAR_1->eraseregions;





 VAR_9 = 0;







 while (VAR_9 < VAR_1->numeraseregions && VAR_2->addr >= VAR_11[VAR_9].offset)
        VAR_9++;
 VAR_9--;







 if (VAR_2->addr & (VAR_11[VAR_9].erasesize-1))
  return -VAR_0;


 VAR_10 = VAR_9;





 while (VAR_9<VAR_1->numeraseregions && (VAR_2->addr + VAR_2->len) >= VAR_11[VAR_9].offset)
  VAR_9++;




 VAR_9--;

 if ((VAR_2->addr + VAR_2->len) & (VAR_11[VAR_9].erasesize-1))
  return -VAR_0;

 VAR_7 = VAR_2->addr >> VAR_4->chipshift;
 VAR_5 = VAR_2->addr - (VAR_7 << VAR_4->chipshift);
 VAR_6 = VAR_2->len;

 VAR_9=VAR_10;

 while(VAR_6) {
  VAR_8 = FUNC_0(VAR_3, &VAR_4->chips[VAR_7], VAR_5);

  if (VAR_8)
   return VAR_8;

  VAR_5 += VAR_11[VAR_9].erasesize;
  VAR_6 -= VAR_11[VAR_9].erasesize;

  if (VAR_5 % (1<< VAR_4->chipshift) == (((unsigned long)VAR_11[VAR_9].offset + (VAR_11[VAR_9].erasesize * VAR_11[VAR_9].numblocks)) %( 1<< VAR_4->chipshift)))
   VAR_9++;

  if (VAR_5 >> VAR_4->chipshift) {
   VAR_5 = 0;
   VAR_7++;

   if (VAR_7 >= VAR_4->numchips)
    break;
  }
 }

 return 0;
}
