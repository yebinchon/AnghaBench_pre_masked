
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct list_head {int dummy; } ;
struct fsync_inode_entry {scalar_t__ last_dentry; scalar_t__ blkaddr; int list; int inode; } ;
struct f2fs_sb_info {int dummy; } ;
struct curseg_info {int dummy; } ;
typedef scalar_t__ block_t ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,struct curseg_info*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct f2fs_sb_info*,int ,struct page*) ;
 int FUNC_6 (struct f2fs_sb_info*) ;
 struct page* FUNC_7 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_8 (struct f2fs_sb_info*,scalar_t__,int ) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (struct f2fs_sb_info*,scalar_t__) ;
 struct fsync_inode_entry* FUNC_11 (struct list_head*,int ) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int *,struct list_head*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (int ,struct page*,struct list_head*) ;
 int FUNC_17 (int ,struct page*) ;

__attribute__((used)) static int FUNC_18(struct f2fs_sb_info *VAR_2, struct list_head *VAR_3,
  struct list_head *VAR_4, struct list_head *VAR_5)
{
 struct curseg_info *VAR_6;
 struct page *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 block_t VAR_9;


 VAR_6 = FUNC_0(VAR_2, VAR_0);
 VAR_9 = FUNC_3(VAR_2, VAR_6);

 while (1) {
  struct fsync_inode_entry *VAR_10;

  if (!FUNC_8(VAR_2, VAR_9, VAR_1))
   break;

  FUNC_10(VAR_2, VAR_9);

  VAR_7 = FUNC_7(VAR_2, VAR_9);
  if (FUNC_1(VAR_7)) {
   VAR_8 = FUNC_4(VAR_7);
   break;
  }

  if (!FUNC_13(VAR_7)) {
   FUNC_9(VAR_7, 1);
   break;
  }

  VAR_10 = FUNC_11(VAR_3, FUNC_12(VAR_7));
  if (!VAR_10)
   goto next;





  if (FUNC_2(VAR_7)) {
   VAR_8 = FUNC_17(VAR_10->inode, VAR_7);
   if (VAR_8) {
    FUNC_9(VAR_7, 1);
    break;
   }
  }
  if (VAR_10->last_dentry == VAR_9) {
   VAR_8 = FUNC_16(VAR_10->inode, VAR_7, VAR_5);
   if (VAR_8) {
    FUNC_9(VAR_7, 1);
    break;
   }
  }
  VAR_8 = FUNC_5(VAR_2, VAR_10->inode, VAR_7);
  if (VAR_8) {
   FUNC_9(VAR_7, 1);
   break;
  }

  if (VAR_10->blkaddr == VAR_9)
   FUNC_14(&VAR_10->list, VAR_4);
next:

  VAR_9 = FUNC_15(VAR_7);
  FUNC_9(VAR_7, 1);
 }
 if (!VAR_8)
  FUNC_6(VAR_2);
 return VAR_8;
}
