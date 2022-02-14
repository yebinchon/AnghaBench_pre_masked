
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_ino; struct address_space* i_mapping; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int in_list; int retry; struct page* encrypted_page; scalar_t__ old_blkaddr; scalar_t__ new_blkaddr; struct page* page; int op_flags; int op; int temp; int type; int ino; struct f2fs_sb_info* sbi; } ;
struct extent_info {scalar_t__ fofs; scalar_t__ blk; int member_2; int member_1; int member_0; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dnode_of_data*,scalar_t__,int ) ;
 struct page* FUNC_4 (struct address_space*,scalar_t__,int) ;
 int FUNC_5 (struct f2fs_sb_info*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct inode*,scalar_t__,struct extent_info*) ;
 struct page* FUNC_7 (int ,scalar_t__,int,int ) ;
 int FUNC_8 (struct dnode_of_data*) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (struct f2fs_io_info*) ;
 int FUNC_11 (struct inode*,scalar_t__) ;
 int FUNC_12 (struct page*,int ,int,int) ;
 int FUNC_13 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_12, pgoff_t VAR_13)
{
 struct f2fs_sb_info *VAR_14 = FUNC_0(VAR_12);
 struct address_space *VAR_15 = VAR_12->i_mapping;
 struct dnode_of_data VAR_16;
 struct page *VAR_17;
 struct extent_info VAR_18 = {0, 0, 0};
 struct f2fs_io_info VAR_19 = {
  .sbi = VAR_14,
  .ino = VAR_12->i_ino,
  .type = VAR_1,
  .temp = VAR_0,
  .op = VAR_11,
  .op_flags = 0,
  .encrypted_page = ((void*)0),
  .in_list = 0,
  .retry = 0,
 };
 int VAR_20;

 VAR_17 = FUNC_4(VAR_15, VAR_13, 1);
 if (!VAR_17)
  return -VAR_6;

 if (FUNC_6(VAR_12, VAR_13, &VAR_18)) {
  VAR_16.data_blkaddr = VAR_18.blk + VAR_13 - VAR_18.fofs;
  if (FUNC_14(!FUNC_5(VAR_14, VAR_16.data_blkaddr,
      VAR_3))) {
   VAR_20 = -VAR_4;
   goto put_page;
  }
  goto got_it;
 }

 FUNC_13(&VAR_16, VAR_12, ((void*)0), ((void*)0), 0);
 VAR_20 = FUNC_3(&VAR_16, VAR_13, VAR_10);
 if (VAR_20)
  goto put_page;
 FUNC_8(&VAR_16);

 if (!FUNC_2(VAR_16.data_blkaddr)) {
  VAR_20 = -VAR_5;
  goto put_page;
 }
 if (FUNC_14(!FUNC_5(VAR_14, VAR_16.data_blkaddr,
      VAR_2))) {
  VAR_20 = -VAR_4;
  goto put_page;
 }
got_it:

 VAR_19.page = VAR_17;
 VAR_19.new_blkaddr = VAR_19.old_blkaddr = VAR_16.data_blkaddr;





 FUNC_12(VAR_17, VAR_1, 1, 1);

 FUNC_11(VAR_12, VAR_16.data_blkaddr);

 VAR_19.encrypted_page = FUNC_7(FUNC_1(VAR_14),
     VAR_16.data_blkaddr,
     VAR_8 | VAR_7, VAR_9);
 if (!VAR_19.encrypted_page) {
  VAR_20 = -VAR_6;
  goto put_page;
 }

 VAR_20 = FUNC_10(&VAR_19);
 if (VAR_20)
  goto put_encrypted_page;
 FUNC_9(VAR_19.encrypted_page, 0);
 FUNC_9(VAR_17, 1);
 return 0;
put_encrypted_page:
 FUNC_9(VAR_19.encrypted_page, 1);
put_page:
 FUNC_9(VAR_17, 1);
 return VAR_20;
}
