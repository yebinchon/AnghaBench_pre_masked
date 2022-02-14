
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {struct page** pages; int io_pages; scalar_t__ read_mirror; int bflags; TYPE_1__* fs_info; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {struct extent_io_tree io_tree; } ;
struct TYPE_3__ {int btree_inode; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct extent_io_tree*,struct page*,int ,struct bio**,int,unsigned long*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_6 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct bio*,int,unsigned long) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;

int FUNC_15(struct extent_buffer *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 struct page *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 1;
 int VAR_16;
 unsigned long VAR_17 = 0;
 struct bio *VAR_18 = ((void*)0);
 unsigned long VAR_19 = 0;
 struct extent_io_tree *VAR_20 = &FUNC_0(VAR_7->fs_info->btree_inode)->io_tree;

 if (FUNC_11(VAR_2, &VAR_7->bflags))
  return 0;

 VAR_16 = FUNC_8(VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
  VAR_11 = VAR_7->pages[VAR_10];
  if (VAR_8 == VAR_5) {
   if (!FUNC_12(VAR_11))
    goto unlock_exit;
  } else {
   FUNC_7(VAR_11);
  }
  VAR_14++;
 }





 for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
  VAR_11 = VAR_7->pages[VAR_10];
  if (!FUNC_2(VAR_11)) {
   VAR_17++;
   VAR_15 = 0;
  }
 }

 if (VAR_15) {
  FUNC_9(VAR_2, &VAR_7->bflags);
  goto unlock_exit;
 }

 FUNC_6(VAR_1, &VAR_7->bflags);
 VAR_7->read_mirror = 0;
 FUNC_5(&VAR_7->io_pages, VAR_17);
 for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
  VAR_11 = VAR_7->pages[VAR_10];

  if (!FUNC_2(VAR_11)) {
   if (VAR_13) {
    FUNC_4(&VAR_7->io_pages);
    FUNC_13(VAR_11);
    continue;
   }

   FUNC_1(VAR_11);
   VAR_12 = FUNC_3(VAR_20, VAR_11,
            VAR_6, &VAR_18,
            VAR_9, &VAR_19,
            VAR_3);
   if (VAR_12) {
    VAR_13 = VAR_12;
    FUNC_4(&VAR_7->io_pages);
   }
  } else {
   FUNC_13(VAR_11);
  }
 }

 if (VAR_18) {
  VAR_12 = FUNC_10(VAR_18, VAR_9, VAR_19);
  if (VAR_12)
   return VAR_12;
 }

 if (VAR_13 || VAR_8 != VAR_4)
  return VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
  VAR_11 = VAR_7->pages[VAR_10];
  FUNC_14(VAR_11);
  if (!FUNC_2(VAR_11))
   VAR_13 = -VAR_0;
 }

 return VAR_13;

unlock_exit:
 while (VAR_14 > 0) {
  VAR_14--;
  VAR_11 = VAR_7->pages[VAR_14];
  FUNC_13(VAR_11);
 }
 return VAR_13;
}
