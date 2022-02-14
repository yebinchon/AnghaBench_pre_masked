
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct inode {int i_mtime; int i_ctime; int i_ino; } ;
struct f2fs_dir_entry {int name_len; } ;
struct f2fs_dentry_block {int dentry_bitmap; struct f2fs_dir_entry* dentry; } ;
struct TYPE_2__ {scalar_t__ fsync_mode; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 TYPE_1__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (unsigned int,int *) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 void FUNC_11 (struct f2fs_dir_entry*,struct page*,struct inode*,struct inode*) ;
 int FUNC_12 (struct inode*,struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct page*,int) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (struct page*,int ,int,int) ;
 unsigned int FUNC_20 (int *,unsigned int,int ) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct page*) ;
 struct f2fs_dentry_block* FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;

void FUNC_26(struct f2fs_dir_entry *VAR_5, struct page *VAR_6,
     struct inode *VAR_7, struct inode *VAR_8)
{
 struct f2fs_dentry_block *VAR_9;
 unsigned int VAR_10;
 int VAR_11 = FUNC_3(FUNC_22(VAR_5->name_len));
 int VAR_12;

 FUNC_18(FUNC_1(VAR_7), VAR_3);

 if (FUNC_2(FUNC_1(VAR_7)).fsync_mode == VAR_1)
  FUNC_8(FUNC_1(VAR_7), VAR_7->i_ino, VAR_4);

 if (FUNC_13(VAR_7))
  return FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);

 FUNC_23(VAR_6);
 FUNC_19(VAR_6, VAR_0, 1, 1);

 VAR_9 = FUNC_24(VAR_6);
 VAR_10 = VAR_5 - VAR_9->dentry;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  FUNC_4(VAR_10 + VAR_12, &VAR_9->dentry_bitmap);


 VAR_10 = FUNC_20(&VAR_9->dentry_bitmap,
   VAR_2,
   0);
 FUNC_25(VAR_6);

 VAR_7->i_ctime = VAR_7->i_mtime = FUNC_7(VAR_7);
 FUNC_14(VAR_7, 0);

 if (VAR_8)
  FUNC_12(VAR_7, VAR_8);

 if (VAR_10 == VAR_2 &&
  !FUNC_17(VAR_7, VAR_6->index, VAR_6->index + 1)) {
  FUNC_9(VAR_6);
  FUNC_6(VAR_6);
  FUNC_10(VAR_6);
  FUNC_0(VAR_6);
  FUNC_5(VAR_6);
  FUNC_21(VAR_7);
  FUNC_16(VAR_7);
 }
 FUNC_15(VAR_6, 1);
}
