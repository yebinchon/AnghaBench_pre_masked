
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct scatterlist {int dummy; } ;
struct msb_data {scalar_t__* boot_block_locations; int page_size; int pages_in_block; scalar_t__ block_count; int used_blocks_bitmap; struct ms_boot_page* boot_page; } ;
struct TYPE_3__ {int data_size; int start_addr; } ;
struct TYPE_4__ {TYPE_1__ disabled_block; } ;
struct ms_boot_page {TYPE_2__ entry; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int,int ) ;
 int FUNC_6 (struct msb_data*,scalar_t__) ;
 int FUNC_7 (struct msb_data*,scalar_t__,int,int *,struct scatterlist*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct scatterlist*,scalar_t__*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct msb_data *VAR_4, int VAR_5)
{
 struct ms_boot_page *VAR_6;
 struct scatterlist VAR_7;
 u16 *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 int VAR_10, VAR_11 = 0;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17;

 FUNC_0(VAR_5 > 1);
 VAR_6 = &VAR_4->boot_page[VAR_5];
 VAR_17 = VAR_4->boot_block_locations[VAR_5];

 if (VAR_4->boot_block_locations[VAR_5] == VAR_3)
  return -VAR_0;

 VAR_12 = VAR_6->entry.disabled_block.data_size;
 VAR_13 = sizeof(struct ms_boot_page) +
   VAR_6->entry.disabled_block.start_addr;
 if (!VAR_12)
  return 0;

 VAR_14 = VAR_13 / VAR_4->page_size;
 VAR_15 = VAR_13 % VAR_4->page_size;
 VAR_16 =
  FUNC_1(VAR_12 + VAR_15, VAR_4->page_size) *
   VAR_4->page_size;

 FUNC_3("reading bad block of boot block at pba %d, offset %d len %d",
  VAR_17, VAR_13, VAR_12);

 VAR_8 = FUNC_5(VAR_16, VAR_2);
 if (!VAR_8)
  return -VAR_1;


 FUNC_9(&VAR_7, VAR_8, VAR_16);

 while (VAR_9 < VAR_16) {
  VAR_11 = FUNC_7(VAR_4, VAR_17, VAR_14, ((void*)0), &VAR_7, VAR_9);
  if (VAR_11)
   goto out;

  VAR_14++;
  VAR_9 += VAR_4->page_size;

  if (VAR_14 == VAR_4->pages_in_block) {
   FUNC_8(
   "bad block table extends beyond the boot block");
   break;
  }
 }


 for (VAR_10 = VAR_15; VAR_10 < VAR_12 / sizeof(u16); VAR_10++) {

  u16 VAR_18 = FUNC_2(VAR_8[VAR_10]);

  if (VAR_18 >= VAR_4->block_count) {
   FUNC_3("bad block table contains invalid block %d",
        VAR_18);
   continue;
  }

  if (FUNC_10(VAR_18, VAR_4->used_blocks_bitmap)) {
   FUNC_3("duplicate bad block %d in the table",
    VAR_18);
   continue;
  }

  FUNC_3("block %d is marked as factory bad", VAR_18);
  FUNC_6(VAR_4, VAR_18);
 }
out:
 FUNC_4(VAR_8);
 return VAR_11;
}
