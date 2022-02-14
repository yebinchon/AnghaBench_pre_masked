
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct msb_data {int* lba_to_pba_table; int cache_block_lba; int page_size; scalar_t__ cache; int valid_cache_bitmap; } ;


 int FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (struct msb_data*,int,int,int,struct scatterlist*,int) ;
 int FUNC_3 (struct msb_data*,int,int,int *,struct scatterlist*,int) ;
 int FUNC_4 (struct scatterlist*,struct scatterlist*,int ,int,int) ;
 int FUNC_5 (struct scatterlist*,int ,scalar_t__,int) ;
 int FUNC_6 (struct scatterlist*,int ) ;
 int FUNC_7 (struct scatterlist*) ;
 scalar_t__ FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(struct msb_data *VAR_0, int VAR_1,
    int VAR_2, struct scatterlist *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_0->lba_to_pba_table[VAR_1];
 struct scatterlist VAR_6[10];
 int VAR_7 = 0;

 if (VAR_1 == VAR_0->cache_block_lba &&
   FUNC_8(VAR_2, &VAR_0->valid_cache_bitmap)) {

  FUNC_1("Read of LBA %d (pba %d) sector %d from cache",
       VAR_1, VAR_5, VAR_2);

  FUNC_6(VAR_6, FUNC_0(VAR_6));
  FUNC_4(VAR_3, VAR_6, FUNC_0(VAR_6),
   VAR_4, VAR_0->page_size);
  FUNC_5(VAR_6, FUNC_7(VAR_6),
   VAR_0->cache + VAR_0->page_size * VAR_2,
       VAR_0->page_size);
 } else {
  FUNC_1("Read of LBA %d (pba %d) sector %d from device",
       VAR_1, VAR_5, VAR_2);

  VAR_7 = FUNC_3(VAR_0, VAR_5, VAR_2, ((void*)0), VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;

  FUNC_2(VAR_0, VAR_1, VAR_2, 1, VAR_3, VAR_4);
 }
 return VAR_7;
}
