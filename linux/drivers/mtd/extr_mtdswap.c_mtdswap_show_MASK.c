
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct seq_file {scalar_t__ private; } ;
struct rb_root {scalar_t__ rb_node; } ;
struct mtdswap_dev {unsigned int curr_write_pos; unsigned int eblks; scalar_t__* page_data; unsigned int pages_per_eblk; unsigned int sect_read_count; unsigned int sect_write_count; unsigned int discard_count; unsigned int mtd_read_count; unsigned int mtd_write_count; unsigned int discard_page_count; TYPE_4__* mbd_dev; TYPE_5__* mtd; TYPE_3__* eb_data; TYPE_2__* curr_write; TYPE_1__* trees; } ;
struct TYPE_10__ {int erasesize; } ;
struct TYPE_9__ {unsigned int size; int lock; } ;
struct TYPE_8__ {scalar_t__ erase_count; } ;
struct TYPE_7__ {unsigned int erase_count; } ;
struct TYPE_6__ {unsigned int count; struct rb_root root; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct rb_root*) ;
 unsigned int FUNC_1 (struct rb_root*) ;
 int VAR_1 ;
 unsigned int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct seq_file*,char*,...) ;
 int FUNC_6 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_2, void *VAR_3)
{
 struct mtdswap_dev *VAR_4 = (struct mtdswap_dev *) VAR_2->private;
 unsigned long VAR_5;
 unsigned int VAR_6[VAR_1];
 unsigned int VAR_7[VAR_1];
 unsigned int VAR_8[VAR_1];
 unsigned int VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13, VAR_14, VAR_15;
 uint64_t VAR_16;
 static const char * const VAR_17[] = {
  "clean", "used", "low", "high", "dirty", "bitflip", "failing"
 };

 FUNC_3(&VAR_4->mbd_dev->lock);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  struct rb_root *VAR_18 = &VAR_4->trees[VAR_9].root;

  if (VAR_18->rb_node) {
   VAR_6[VAR_9] = VAR_4->trees[VAR_9].count;
   VAR_7[VAR_9] = FUNC_1(VAR_18);
   VAR_8[VAR_9] = FUNC_0(VAR_18);
  } else
   VAR_6[VAR_9] = 0;
 }

 if (VAR_4->curr_write) {
  VAR_10 = 1;
  VAR_11 = VAR_4->curr_write_pos;
  VAR_12 = VAR_4->curr_write->erase_count;
 }

 VAR_5 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_4->eblks; VAR_9++)
  VAR_5 += VAR_4->eb_data[VAR_9].erase_count;

 VAR_16 = (uint64_t)VAR_4->eblks * VAR_4->mtd->erasesize;
 VAR_13 = FUNC_2(VAR_4->mtd, VAR_16);

 VAR_14 = 0;
 VAR_15 = VAR_4->mbd_dev->size;
 for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
  if (VAR_4->page_data[VAR_9] != VAR_0)
   VAR_14++;

 FUNC_4(&VAR_4->mbd_dev->lock);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (!VAR_6[VAR_9])
   continue;

  if (VAR_7[VAR_9] != VAR_8[VAR_9])
   FUNC_5(VAR_2, "%s:\t%5d erase blocks, erased min %d, "
    "max %d times\n",
    VAR_17[VAR_9], VAR_6[VAR_9], VAR_7[VAR_9], VAR_8[VAR_9]);
  else
   FUNC_5(VAR_2, "%s:\t%5d erase blocks, all erased %d "
    "times\n", VAR_17[VAR_9], VAR_6[VAR_9], VAR_7[VAR_9]);
 }

 if (VAR_13)
  FUNC_5(VAR_2, "bad:\t%5u erase blocks\n", VAR_13);

 if (VAR_10)
  FUNC_5(VAR_2, "current erase block: %u pages used, %u free, "
   "erased %u times\n",
   VAR_11, VAR_4->pages_per_eblk - VAR_11, VAR_12);

 FUNC_5(VAR_2, "total erasures: %lu\n", VAR_5);

 FUNC_6(VAR_2, "\n");

 FUNC_5(VAR_2, "mtdswap_readsect count: %llu\n", VAR_4->sect_read_count);
 FUNC_5(VAR_2, "mtdswap_writesect count: %llu\n", VAR_4->sect_write_count);
 FUNC_5(VAR_2, "mtdswap_discard count: %llu\n", VAR_4->discard_count);
 FUNC_5(VAR_2, "mtd read count: %llu\n", VAR_4->mtd_read_count);
 FUNC_5(VAR_2, "mtd write count: %llu\n", VAR_4->mtd_write_count);
 FUNC_5(VAR_2, "discarded pages count: %llu\n", VAR_4->discard_page_count);

 FUNC_6(VAR_2, "\n");
 FUNC_5(VAR_2, "total pages: %u\n", VAR_15);
 FUNC_5(VAR_2, "pages mapped: %u\n", VAR_14);

 return 0;
}
