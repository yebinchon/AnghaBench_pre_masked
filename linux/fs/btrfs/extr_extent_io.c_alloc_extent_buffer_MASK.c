
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct page {scalar_t__ private; } ;
struct extent_buffer {struct page** pages; int refs; int bflags; } ;
struct btrfs_fs_info {unsigned long nodesize; int buffer_lock; int buffer_radix; int sectorsize; TYPE_1__* btree_inode; } ;
struct address_space {int private_lock; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct extent_buffer* FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long VAR_6 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 struct extent_buffer* FUNC_7 (struct btrfs_fs_info*,unsigned long,unsigned long) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct extent_buffer*,struct page*) ;
 int FUNC_11 (struct btrfs_fs_info*,char*,unsigned long) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_14 (struct btrfs_fs_info*,unsigned long) ;
 struct page* FUNC_15 (struct address_space*,unsigned long,int) ;
 int FUNC_16 (struct extent_buffer*,struct page*) ;
 int FUNC_17 (struct extent_buffer*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (int *,unsigned long,struct extent_buffer*) ;
 int FUNC_20 (int) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct page*) ;

struct extent_buffer *FUNC_26(struct btrfs_fs_info *VAR_8,
       u64 VAR_9)
{
 unsigned long VAR_10 = VAR_8->nodesize;
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13 = VAR_9 >> VAR_6;
 struct extent_buffer *VAR_14;
 struct extent_buffer *VAR_15 = ((void*)0);
 struct page *VAR_16;
 struct address_space *VAR_17 = VAR_8->btree_inode->i_mapping;
 int VAR_18 = 1;
 int VAR_19;

 if (!FUNC_2(VAR_9, VAR_8->sectorsize)) {
  FUNC_11(VAR_8, "bad tree block start %llu", VAR_9);
  return FUNC_1(-VAR_1);
 }

 VAR_14 = FUNC_14(VAR_8, VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_8, VAR_9, VAR_10);
 if (!VAR_14)
  return FUNC_1(-VAR_2);

 VAR_11 = FUNC_17(VAR_14);
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++, VAR_13++) {
  VAR_16 = FUNC_15(VAR_17, VAR_13, VAR_5|VAR_7);
  if (!VAR_16) {
   VAR_15 = FUNC_1(-VAR_2);
   goto free_eb;
  }

  FUNC_23(&VAR_17->private_lock);
  if (FUNC_4(VAR_16)) {







   VAR_15 = (struct extent_buffer *)VAR_16->private;
   if (FUNC_9(&VAR_15->refs)) {
    FUNC_24(&VAR_17->private_lock);
    FUNC_25(VAR_16);
    FUNC_18(VAR_16);
    FUNC_16(VAR_15, VAR_16);
    goto free_eb;
   }
   VAR_15 = ((void*)0);





   FUNC_0(VAR_16);
   FUNC_6(FUNC_3(VAR_16));
   FUNC_18(VAR_16);
  }
  FUNC_10(VAR_14, VAR_16);
  FUNC_24(&VAR_17->private_lock);
  FUNC_6(FUNC_3(VAR_16));
  VAR_14->pages[VAR_12] = VAR_16;
  if (!FUNC_5(VAR_16))
   VAR_18 = 0;
 }
 if (VAR_18)
  FUNC_22(VAR_4, &VAR_14->bflags);
again:
 VAR_19 = FUNC_20(VAR_5);
 if (VAR_19) {
  VAR_15 = FUNC_1(VAR_19);
  goto free_eb;
 }

 FUNC_23(&VAR_8->buffer_lock);
 VAR_19 = FUNC_19(&VAR_8->buffer_radix,
    VAR_9 >> VAR_6, VAR_14);
 FUNC_24(&VAR_8->buffer_lock);
 FUNC_21();
 if (VAR_19 == -VAR_0) {
  VAR_15 = FUNC_14(VAR_8, VAR_9);
  if (VAR_15)
   goto free_eb;
  else
   goto again;
 }

 FUNC_13(VAR_14);
 FUNC_22(VAR_3, &VAR_14->bflags);






 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  FUNC_25(VAR_14->pages[VAR_12]);
 return VAR_14;

free_eb:
 FUNC_6(!FUNC_8(&VAR_14->refs));
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (VAR_14->pages[VAR_12])
   FUNC_25(VAR_14->pages[VAR_12]);
 }

 FUNC_12(VAR_14);
 return VAR_15;
}
