
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct page {scalar_t__ mapping; scalar_t__ index; } ;
struct node_info {int version; } ;
struct inode {scalar_t__ i_mapping; int i_ino; } ;
struct f2fs_summary {int dummy; } ;
struct f2fs_io_info {int in_list; int retry; scalar_t__ new_blkaddr; scalar_t__ old_blkaddr; TYPE_1__* sbi; struct page* encrypted_page; int op_flags; int op; struct page* page; int temp; int type; int ino; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; struct page* node_page; int ofs_in_node; int nid; } ;
typedef scalar_t__ block_t ;
struct TYPE_12__ {int io_order_lock; int * skipped_atomic_files; } ;
struct TYPE_11__ {int * i_gc_failures; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_10__* FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (TYPE_1__*,unsigned int,int) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (TYPE_1__*,int *,scalar_t__,scalar_t__*,struct f2fs_summary*,int ,int *,int) ;
 int FUNC_13 (TYPE_1__*,struct f2fs_summary*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_14 (struct dnode_of_data*,scalar_t__,int ) ;
 int FUNC_15 (TYPE_1__*,int ,struct node_info*) ;
 struct page* FUNC_16 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (struct inode*) ;
 struct page* FUNC_19 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_20 (struct inode*,int) ;
 int FUNC_21 (struct dnode_of_data*) ;
 int FUNC_22 (struct page*,int) ;
 int FUNC_23 (struct f2fs_io_info*) ;
 int FUNC_24 (struct f2fs_io_info*) ;
 int FUNC_25 (struct dnode_of_data*,scalar_t__) ;
 int FUNC_26 (TYPE_1__*,int ,int ) ;
 int FUNC_27 (struct inode*,scalar_t__) ;
 int FUNC_28 (struct page*,int ,int,int) ;
 int FUNC_29 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_30 (struct page*) ;
 int FUNC_31 (int ,int ,int ) ;
 int FUNC_32 (struct page*) ;
 int FUNC_33 (struct inode*,int ) ;
 int FUNC_34 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_35 (struct page*) ;
 int FUNC_36 (struct page*) ;
 int FUNC_37 (struct f2fs_summary*,int ,int ,int ) ;
 int FUNC_38 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_39 (int) ;
 int FUNC_40 (int *) ;

__attribute__((used)) static int FUNC_41(struct inode *VAR_24, block_t VAR_25,
    int VAR_26, unsigned int VAR_27, int VAR_28)
{
 struct f2fs_io_info VAR_29 = {
  .sbi = FUNC_3(VAR_24),
  .ino = VAR_24->i_ino,
  .type = VAR_2,
  .temp = VAR_0,
  .op = VAR_21,
  .op_flags = 0,
  .encrypted_page = ((void*)0),
  .in_list = 0,
  .retry = 0,
 };
 struct dnode_of_data VAR_30;
 struct f2fs_summary VAR_31;
 struct node_info VAR_32;
 struct page *VAR_33, *VAR_34;
 block_t VAR_35;
 int VAR_36 = 0;
 bool VAR_37 = FUNC_38(VAR_29.sbi, VAR_16);


 VAR_33 = FUNC_16(VAR_24->i_mapping, VAR_25, 0);
 if (!VAR_33)
  return -VAR_6;

 if (!FUNC_7(FUNC_3(VAR_24), VAR_27, VAR_28)) {
  VAR_36 = -VAR_5;
  goto out;
 }

 if (FUNC_17(VAR_24)) {
  FUNC_2(VAR_24)->i_gc_failures[VAR_14]++;
  FUNC_3(VAR_24)->skipped_atomic_files[VAR_26]++;
  VAR_36 = -VAR_3;
  goto out;
 }

 if (FUNC_18(VAR_24)) {
  FUNC_20(VAR_24, 1);
  VAR_36 = -VAR_3;
  goto out;
 }

 FUNC_34(&VAR_30, VAR_24, ((void*)0), ((void*)0), 0);
 VAR_36 = FUNC_14(&VAR_30, VAR_25, VAR_17);
 if (VAR_36)
  goto out;

 if (FUNC_39(VAR_30.data_blkaddr == VAR_19)) {
  FUNC_1(VAR_33);
  VAR_36 = -VAR_5;
  goto put_out;
 }





 FUNC_28(VAR_33, VAR_2, 1, 1);

 FUNC_27(VAR_24, VAR_30.data_blkaddr);

 VAR_36 = FUNC_15(VAR_29.sbi, VAR_30.nid, &VAR_32);
 if (VAR_36)
  goto put_out;

 FUNC_37(&VAR_31, VAR_30.nid, VAR_30.ofs_in_node, VAR_32.version);


 VAR_29.page = VAR_33;
 VAR_29.new_blkaddr = VAR_29.old_blkaddr = VAR_30.data_blkaddr;

 if (VAR_37)
  FUNC_10(&VAR_29.sbi->io_order_lock);

 VAR_34 = FUNC_16(FUNC_4(VAR_29.sbi),
     VAR_29.old_blkaddr, 0);
 if (!VAR_34)
  goto up_out;

 VAR_29.encrypted_page = VAR_34;


 if (!FUNC_5(VAR_34)) {
  VAR_36 = FUNC_23(&VAR_29);
  if (VAR_36) {
   FUNC_22(VAR_34, 1);
   goto up_out;
  }
  FUNC_30(VAR_34);
  if (FUNC_39(VAR_34->mapping != FUNC_4(VAR_29.sbi) ||
      !FUNC_5(VAR_34))) {
   VAR_36 = -VAR_4;
   FUNC_22(VAR_34, 1);
   goto up_out;
  }
 }

 FUNC_12(VAR_29.sbi, ((void*)0), VAR_29.old_blkaddr, &VAR_35,
     &VAR_31, VAR_1, ((void*)0), 0);

 VAR_29.encrypted_page = FUNC_19(FUNC_4(VAR_29.sbi),
    VAR_35, VAR_10 | VAR_9, VAR_15);
 if (!VAR_29.encrypted_page) {
  VAR_36 = -VAR_6;
  FUNC_22(VAR_34, 1);
  goto recover_block;
 }


 FUNC_28(VAR_29.encrypted_page, VAR_2, 1, 1);
 FUNC_31(FUNC_32(VAR_29.encrypted_page),
    FUNC_32(VAR_34), VAR_20);
 FUNC_22(VAR_34, 1);
 FUNC_29(FUNC_4(VAR_29.sbi),
    VAR_29.old_blkaddr, VAR_29.old_blkaddr);

 FUNC_35(VAR_29.encrypted_page);
 if (FUNC_8(VAR_29.encrypted_page))
  FUNC_9(VAR_29.sbi, VAR_8);

 FUNC_36(VAR_29.encrypted_page);
 FUNC_0(VAR_33);


 FUNC_28(VAR_30.node_page, VAR_18, 1, 1);

 VAR_29.op = VAR_22;
 VAR_29.op_flags = VAR_23;
 VAR_29.new_blkaddr = VAR_35;
 FUNC_24(&VAR_29);
 if (VAR_29.retry) {
  VAR_36 = -VAR_3;
  if (FUNC_6(VAR_29.encrypted_page))
   FUNC_11(VAR_29.encrypted_page);
  goto put_page_out;
 }

 FUNC_26(VAR_29.sbi, VAR_13, VAR_7);

 FUNC_25(&VAR_30, VAR_35);
 FUNC_33(VAR_24, VAR_11);
 if (VAR_33->index == 0)
  FUNC_33(VAR_24, VAR_12);
put_page_out:
 FUNC_22(VAR_29.encrypted_page, 1);
recover_block:
 if (VAR_36)
  FUNC_13(VAR_29.sbi, &VAR_31, VAR_35, VAR_29.old_blkaddr,
        1, 1);
up_out:
 if (VAR_37)
  FUNC_40(&VAR_29.sbi->io_order_lock);
put_out:
 FUNC_21(&VAR_30);
out:
 FUNC_22(VAR_33, 1);
 return VAR_36;
}
