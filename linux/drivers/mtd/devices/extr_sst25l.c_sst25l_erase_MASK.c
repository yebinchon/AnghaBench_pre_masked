
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sst25l_flash {int lock; TYPE_1__* spi; } ;
struct mtd_info {int erasesize; } ;
struct erase_info {int len; int addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sst25l_flash*,int) ;
 int FUNC_4 (struct sst25l_flash*) ;
 struct sst25l_flash* FUNC_5 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_1, struct erase_info *VAR_2)
{
 struct sst25l_flash *VAR_3 = FUNC_5(VAR_1);
 uint32_t VAR_4, VAR_5;
 int VAR_6;


 if ((uint32_t)VAR_2->len % VAR_1->erasesize)
  return -VAR_0;

 if ((uint32_t)VAR_2->addr % VAR_1->erasesize)
  return -VAR_0;

 VAR_4 = VAR_2->addr;
 VAR_5 = VAR_4 + VAR_2->len;

 FUNC_1(&VAR_3->lock);

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6) {
  FUNC_2(&VAR_3->lock);
  return VAR_6;
 }

 while (VAR_4 < VAR_5) {
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  if (VAR_6) {
   FUNC_2(&VAR_3->lock);
   FUNC_0(&VAR_3->spi->dev, "Erase failed\n");
   return VAR_6;
  }

  VAR_4 += VAR_1->erasesize;
 }

 FUNC_2(&VAR_3->lock);

 return 0;
}
