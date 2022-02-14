
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct ext2_sb_info {int dummy; } ;
struct buffer_head {int b_blocknr; int b_count; } ;
typedef int __u32 ;
struct TYPE_5__ {int xattr_sem; scalar_t__ i_file_acl; } ;
struct TYPE_4__ {scalar_t__ h_refcount; scalar_t__ h_hash; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 struct ext2_sb_info* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct buffer_head*,char*,int ) ;
 int FUNC_12 (struct ext2_sb_info*,scalar_t__,int) ;
 int FUNC_13 (int ,char*,char*,int ,scalar_t__) ;
 int FUNC_14 (struct inode*,scalar_t__,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (scalar_t__*,int) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (int ,int ,int ) ;
 struct buffer_head* FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (int *) ;

void
FUNC_26(struct inode *VAR_0)
{
 struct buffer_head *VAR_1 = ((void*)0);
 struct ext2_sb_info *VAR_2 = FUNC_2(VAR_0->i_sb);

 FUNC_9(&FUNC_1(VAR_0)->xattr_sem);
 if (!FUNC_1(VAR_0)->i_file_acl)
  goto cleanup;

 if (!FUNC_12(VAR_2, FUNC_1(VAR_0)->i_file_acl, 1)) {
  FUNC_13(VAR_0->i_sb, "ext2_xattr_delete_inode",
   "inode %ld: xattr block %d is out of data blocks range",
   VAR_0->i_ino, FUNC_1(VAR_0)->i_file_acl);
  goto cleanup;
 }

 VAR_1 = FUNC_22(VAR_0->i_sb, FUNC_1(VAR_0)->i_file_acl);
 if (!VAR_1) {
  FUNC_13(VAR_0->i_sb, "ext2_xattr_delete_inode",
   "inode %ld: block %d read error", VAR_0->i_ino,
   FUNC_1(VAR_0)->i_file_acl);
  goto cleanup;
 }
 FUNC_11(VAR_1, "b_count=%d", FUNC_5(&(VAR_1->b_count)));
 if (!FUNC_15(FUNC_3(VAR_1))) {
  FUNC_13(VAR_0->i_sb, "ext2_xattr_delete_inode",
   "inode %ld: bad block %d", VAR_0->i_ino,
   FUNC_1(VAR_0)->i_file_acl);
  goto cleanup;
 }
 FUNC_19(VAR_1);
 if (FUNC_3(VAR_1)->h_refcount == FUNC_8(1)) {
  __u32 VAR_3 = FUNC_18(FUNC_3(VAR_1)->h_hash);





  FUNC_21(FUNC_0(VAR_0), VAR_3,
          VAR_1->b_blocknr);
  FUNC_14(VAR_0, FUNC_1(VAR_0)->i_file_acl, 1);
  FUNC_16(VAR_1);
  FUNC_6(VAR_1);
  FUNC_24(VAR_1);
 } else {
  FUNC_17(&FUNC_3(VAR_1)->h_refcount, -1);
  FUNC_11(VAR_1, "refcount now=%d",
   FUNC_18(FUNC_3(VAR_1)->h_refcount));
  FUNC_24(VAR_1);
  FUNC_20(VAR_1);
  if (FUNC_4(VAR_0))
   FUNC_23(VAR_1);
  FUNC_10(VAR_0, 1);
 }
 FUNC_1(VAR_0)->i_file_acl = 0;

cleanup:
 FUNC_7(VAR_1);
 FUNC_25(&FUNC_1(VAR_0)->xattr_sem);
}
