
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct msb_data {int cache_block_lba; int page_size; int valid_cache_bitmap; scalar_t__ cache; int cache_flush_timer; scalar_t__ read_only; } ;


 int FUNC_0 (struct scatterlist*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct msb_data*) ;
 int FUNC_4 (struct scatterlist*,struct scatterlist*,int ,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct scatterlist*,int ,scalar_t__,int) ;
 int FUNC_8 (struct scatterlist*,int ) ;
 int FUNC_9 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_10(struct msb_data *VAR_4, int VAR_5,
 int VAR_6, bool VAR_7, struct scatterlist *VAR_8, int VAR_9)
{
 int VAR_10;
 struct scatterlist VAR_11[10];

 if (VAR_4->read_only)
  return -VAR_0;

 if (VAR_4->cache_block_lba == VAR_1 ||
      VAR_5 != VAR_4->cache_block_lba)
  if (VAR_7)
   return 0;


 if (VAR_4->cache_block_lba != VAR_1 &&
      VAR_5 != VAR_4->cache_block_lba) {
  FUNC_1("first flush the cache");
  VAR_10 = FUNC_3(VAR_4);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_4->cache_block_lba == VAR_1) {
  VAR_4->cache_block_lba = VAR_5;
  FUNC_2(&VAR_4->cache_flush_timer,
   VAR_3 + FUNC_5(VAR_2));
 }

 FUNC_1("Write of LBA %d page %d to cache ", VAR_5, VAR_6);

 FUNC_8(VAR_11, FUNC_0(VAR_11));
 FUNC_4(VAR_8, VAR_11, FUNC_0(VAR_11), VAR_9, VAR_4->page_size);

 FUNC_7(VAR_11, FUNC_9(VAR_11),
  VAR_4->cache + VAR_6 * VAR_4->page_size, VAR_4->page_size);

 FUNC_6(VAR_6, &VAR_4->valid_cache_bitmap);
 return 0;
}
