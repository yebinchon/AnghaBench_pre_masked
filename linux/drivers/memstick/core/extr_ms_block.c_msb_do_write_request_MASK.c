
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct msb_data {size_t block_size; int cache_block_lba; int pages_in_block; scalar_t__ page_size; } ;
typedef size_t off_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct msb_data*) ;
 int FUNC_2 (struct msb_data*,int,int,int,struct scatterlist*,size_t) ;
 int FUNC_3 (struct msb_data*,int,struct scatterlist*,size_t) ;

__attribute__((used)) static int FUNC_4(struct msb_data *VAR_0, int VAR_1,
 int VAR_2, struct scatterlist *VAR_3, size_t VAR_4, int *VAR_5)
{
 int VAR_6 = 0;
 off_t VAR_7 = 0;
 *VAR_5 = 0;

 while (VAR_7 < VAR_4) {
  if (VAR_2 == 0 && VAR_4 - VAR_7 >= VAR_0->block_size) {

   if (VAR_0->cache_block_lba == VAR_1)
    FUNC_1(VAR_0);

   FUNC_0("Writing whole lba %d", VAR_1);
   VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_3, VAR_7);
   if (VAR_6)
    return VAR_6;

   VAR_7 += VAR_0->block_size;
   *VAR_5 += VAR_0->block_size;
   VAR_1++;
   continue;
  }

  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, 0, VAR_3, VAR_7);
  if (VAR_6)
   return VAR_6;

  VAR_7 += VAR_0->page_size;
  *VAR_5 += VAR_0->page_size;

  VAR_2++;
  if (VAR_2 == VAR_0->pages_in_block) {
   VAR_2 = 0;
   VAR_1++;
  }
 }
 return 0;
}
