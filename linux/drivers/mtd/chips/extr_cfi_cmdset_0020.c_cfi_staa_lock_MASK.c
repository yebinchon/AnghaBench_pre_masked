
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mtd_info {int erasesize; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {int interleave; int device_type; int chipshift; int numchips; int * chips; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct map_info*,unsigned long) ;
 int FUNC_1 (int,int,int ,struct map_info*,struct cfi_private*,int,int *) ;
 int FUNC_2 (struct map_info*,int *,unsigned long) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_1, loff_t VAR_2, uint64_t VAR_3)
{
 struct map_info *VAR_4 = VAR_1->priv;
 struct cfi_private *VAR_5 = VAR_4->fldrv_priv;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;




 if (VAR_2 & (VAR_1->erasesize - 1))
  return -VAR_0;

 if (VAR_3 & (VAR_1->erasesize -1))
  return -VAR_0;

 VAR_7 = VAR_2 >> VAR_5->chipshift;
 VAR_6 = VAR_2 - (VAR_7 << VAR_5->chipshift);

 while(VAR_3) {







  VAR_8 = FUNC_2(VAR_4, &VAR_5->chips[VAR_7], VAR_6);







  if (VAR_8)
   return VAR_8;

  VAR_6 += VAR_1->erasesize;
  VAR_3 -= VAR_1->erasesize;

  if (VAR_6 >> VAR_5->chipshift) {
   VAR_6 = 0;
   VAR_7++;

   if (VAR_7 >= VAR_5->numchips)
    break;
  }
 }
 return 0;
}
