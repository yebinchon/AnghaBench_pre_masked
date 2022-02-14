
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct btrfs_fs_info {int delalloc_workers; int async_delalloc_pages; } ;
struct async_cow {int num_chunks; struct async_chunk* chunks; } ;
struct async_chunk {int start; int end; unsigned int write_flags; int work; int extents; struct page* locked_page; struct inode* inode; int * pending; } ;
struct TYPE_2__ {int flags; int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 void* FUNC_1 (int,int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (unsigned long,int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_19 ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 struct btrfs_fs_info* FUNC_7 (int ) ;
 int FUNC_8 (struct btrfs_fs_info*,int ) ;
 int VAR_20 ;
 int FUNC_9 (struct inode*,int,int,struct page*,unsigned int,unsigned long) ;
 int FUNC_10 (struct inode*) ;
 struct async_cow* FUNC_11 (int ,int ) ;
 int FUNC_12 (unsigned int) ;
 unsigned int FUNC_13 () ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct async_cow*,int ,int) ;
 int FUNC_16 (int *,int,int) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_21, struct page *VAR_22,
    u64 VAR_23, u64 VAR_24, int *VAR_25,
    unsigned long *VAR_26,
    unsigned int VAR_27)
{
 struct btrfs_fs_info *VAR_28 = FUNC_7(VAR_21->i_sb);
 struct async_cow *VAR_29;
 struct async_chunk *VAR_30;
 unsigned long VAR_31;
 u64 VAR_32;
 u64 VAR_33 = FUNC_1(VAR_24 - VAR_23, VAR_15);
 int VAR_34;
 bool VAR_35;
 unsigned VAR_36;

 FUNC_16(&FUNC_0(VAR_21)->io_tree, VAR_23, VAR_24);

 if (FUNC_0(VAR_21)->flags & VAR_0 &&
     !FUNC_8(VAR_28, VAR_7)) {
  VAR_33 = 1;
  VAR_35 = 0;
 } else {
  VAR_35 = 1;
 }

 VAR_36 = FUNC_13();
 VAR_29 = FUNC_11(FUNC_15(VAR_29, VAR_20, VAR_33), VAR_8);
 FUNC_12(VAR_36);

 if (!VAR_29) {
  unsigned VAR_37 = VAR_6 | VAR_3 |
   VAR_4 | VAR_2 |
   VAR_5;
  unsigned long VAR_38 = VAR_14 | VAR_9 |
   VAR_12 | VAR_10 |
   VAR_11;

  FUNC_9(VAR_21, VAR_23, VAR_24, VAR_22,
          VAR_37, VAR_38);
  return -VAR_1;
 }

 VAR_30 = VAR_29->chunks;
 FUNC_4(&VAR_29->num_chunks, VAR_33);

 for (VAR_34 = 0; VAR_34 < VAR_33; VAR_34++) {
  if (VAR_35)
   VAR_32 = FUNC_14(VAR_24, VAR_23 + VAR_15 - 1);
  else
   VAR_32 = VAR_24;





  FUNC_10(VAR_21);
  VAR_30[VAR_34].pending = &VAR_29->num_chunks;
  VAR_30[VAR_34].inode = VAR_21;
  VAR_30[VAR_34].start = VAR_23;
  VAR_30[VAR_34].end = VAR_32;
  VAR_30[VAR_34].locked_page = VAR_22;
  VAR_30[VAR_34].write_flags = VAR_27;
  FUNC_2(&VAR_30[VAR_34].extents);

  FUNC_5(&VAR_30[VAR_34].work,
    VAR_19,
    VAR_17, VAR_18,
    VAR_16);

  VAR_31 = FUNC_1(VAR_32 - VAR_23, VAR_13);
  FUNC_3(VAR_31, &VAR_28->async_delalloc_pages);

  FUNC_6(VAR_28->delalloc_workers, &VAR_30[VAR_34].work);

  *VAR_26 += VAR_31;
  VAR_23 = VAR_32 + 1;
 }
 *VAR_25 = 1;
 return 0;
}
