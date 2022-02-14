
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct scatterlist {int dummy; } ;
struct msb_data {size_t cache_block_lba; size_t* lba_to_pba_table; int pages_in_block; int page_size; int valid_cache_bitmap; int block_size; int cache; scalar_t__ read_only; } ;
struct ms_extra_data_register {int overwrite_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,size_t) ;
 int FUNC_2 (struct msb_data*) ;
 int FUNC_3 (struct msb_data*,size_t,int,struct ms_extra_data_register*,struct scatterlist*,int) ;
 int FUNC_4 (struct msb_data*,size_t,int,int) ;
 int FUNC_5 (struct msb_data*,size_t,struct scatterlist*,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct scatterlist*,int ,int ) ;
 scalar_t__ FUNC_9 (int,int *) ;

__attribute__((used)) static int FUNC_10(struct msb_data *VAR_4)
{
 struct scatterlist VAR_5;
 struct ms_extra_data_register VAR_6;
 int VAR_7, VAR_8, VAR_9;
 u16 VAR_10, VAR_11;

 if (VAR_4->read_only)
  return -VAR_1;

 if (VAR_4->cache_block_lba == VAR_3)
  return 0;

 VAR_11 = VAR_4->cache_block_lba;
 VAR_10 = VAR_4->lba_to_pba_table[VAR_11];

 FUNC_1("Flushing the write cache of pba %d (LBA %d)",
      VAR_10, VAR_4->cache_block_lba);

 FUNC_8(&VAR_5, VAR_4->cache , VAR_4->block_size);


 for (VAR_7 = 0; VAR_7 < VAR_4->pages_in_block; VAR_7++) {

  if (FUNC_9(VAR_7, &VAR_4->valid_cache_bitmap))
   continue;

  VAR_8 = VAR_7 * VAR_4->page_size;

  FUNC_1("reading non-present sector %d of cache block %d",
   VAR_7, VAR_11);
  VAR_9 = FUNC_3(VAR_4, VAR_10, VAR_7, &VAR_6, &VAR_5, VAR_8);


  if (VAR_9 == -VAR_0) {
   FUNC_6("read error on sector %d, contents probably damaged", VAR_7);
   continue;
  }

  if (VAR_9)
   return VAR_9;

  if ((VAR_6.overwrite_flag & VAR_2) !=
       VAR_2) {
   FUNC_0("page %d is marked as bad", VAR_7);
   continue;
  }

  FUNC_7(VAR_7, &VAR_4->valid_cache_bitmap);
 }


 VAR_9 = FUNC_5(VAR_4, VAR_4->cache_block_lba, &VAR_5, 0);
 VAR_10 = VAR_4->lba_to_pba_table[VAR_4->cache_block_lba];


 if (!VAR_9) {
  for (VAR_7 = 0; VAR_7 < VAR_4->pages_in_block; VAR_7++) {

   if (FUNC_9(VAR_7, &VAR_4->valid_cache_bitmap))
    continue;

   FUNC_0("marking page %d as containing damaged data",
    VAR_7);
   FUNC_4(VAR_4,
    VAR_10 , VAR_7, 0xFF & ~VAR_2);
  }
 }

 FUNC_2(VAR_4);
 return VAR_9;
}
