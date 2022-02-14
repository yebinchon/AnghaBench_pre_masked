
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct node_info {int version; } ;
struct inode {int dummy; } ;
struct f2fs_io_info {scalar_t__ old_blkaddr; scalar_t__ need_lock; int sbi; int version; struct page* page; int encrypted_page; } ;
struct extent_info {scalar_t__ blk; scalar_t__ fofs; int member_2; int member_1; int member_0; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; int nid; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct f2fs_io_info*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dnode_of_data*,scalar_t__,int ) ;
 int FUNC_9 (int ,int ,struct node_info*) ;
 int FUNC_10 (struct f2fs_io_info*) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (struct inode*,scalar_t__,struct extent_info*) ;
 int FUNC_13 (struct dnode_of_data*,struct f2fs_io_info*) ;
 int FUNC_14 (struct dnode_of_data*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct f2fs_io_info*) ;
 int FUNC_19 (struct inode*,int ) ;
 int FUNC_20 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*,int ) ;

int FUNC_23(struct f2fs_io_info *VAR_13)
{
 struct page *VAR_14 = VAR_13->page;
 struct inode *VAR_15 = VAR_14->mapping->host;
 struct dnode_of_data VAR_16;
 struct extent_info VAR_17 = {0,0,0};
 struct node_info VAR_18;
 bool VAR_19 = 0;
 int VAR_20 = 0;

 FUNC_20(&VAR_16, VAR_15, ((void*)0), ((void*)0), 0);
 if (FUNC_18(VAR_13) &&
   FUNC_12(VAR_15, VAR_14->index, &VAR_17)) {
  VAR_13->old_blkaddr = VAR_17.blk + VAR_14->index - VAR_17.fofs;

  if (!FUNC_11(VAR_13->sbi, VAR_13->old_blkaddr,
      VAR_0))
   return -VAR_2;

  VAR_19 = 1;
  VAR_13->need_lock = VAR_7;
  goto got_it;
 }


 if (VAR_13->need_lock == VAR_8 && !FUNC_15(VAR_13->sbi))
  return -VAR_1;

 VAR_20 = FUNC_8(&VAR_16, VAR_14->index, VAR_10);
 if (VAR_20)
  goto out;

 VAR_13->old_blkaddr = VAR_16.data_blkaddr;


 if (VAR_13->old_blkaddr == VAR_11) {
  FUNC_1(VAR_14);
  FUNC_4(VAR_14);
  goto out_writepage;
 }
got_it:
 if (FUNC_3(VAR_13->old_blkaddr) &&
  !FUNC_11(VAR_13->sbi, VAR_13->old_blkaddr,
      VAR_0)) {
  VAR_20 = -VAR_2;
  goto out_writepage;
 }




 if (VAR_19 ||
  (FUNC_3(VAR_13->old_blkaddr) &&
     FUNC_18(VAR_13))) {
  VAR_20 = FUNC_5(VAR_13);
  if (VAR_20)
   goto out_writepage;

  FUNC_21(VAR_14);
  FUNC_0(VAR_14);
  FUNC_14(&VAR_16);
  if (VAR_13->need_lock == VAR_8)
   FUNC_16(VAR_13->sbi);
  VAR_20 = FUNC_10(VAR_13);
  if (VAR_20) {
   if (FUNC_7(VAR_15))
    FUNC_17(&VAR_13->encrypted_page);
   if (FUNC_2(VAR_14))
    FUNC_6(VAR_14);
  } else {
   FUNC_19(VAR_15, VAR_5);
  }
  FUNC_22(VAR_13->page, VAR_6);
  return VAR_20;
 }

 if (VAR_13->need_lock == VAR_9) {
  if (!FUNC_15(VAR_13->sbi)) {
   VAR_20 = -VAR_1;
   goto out_writepage;
  }
  VAR_13->need_lock = VAR_8;
 }

 VAR_20 = FUNC_9(VAR_13->sbi, VAR_16.nid, &VAR_18);
 if (VAR_20)
  goto out_writepage;

 VAR_13->version = VAR_18.version;

 VAR_20 = FUNC_5(VAR_13);
 if (VAR_20)
  goto out_writepage;

 FUNC_21(VAR_14);
 FUNC_0(VAR_14);


 FUNC_13(&VAR_16, VAR_13);
 FUNC_22(VAR_14, VAR_12);
 FUNC_19(VAR_15, VAR_3);
 if (VAR_14->index == 0)
  FUNC_19(VAR_15, VAR_4);
out_writepage:
 FUNC_14(&VAR_16);
out:
 if (VAR_13->need_lock == VAR_8)
  FUNC_16(VAR_13->sbi);
 return VAR_20;
}
