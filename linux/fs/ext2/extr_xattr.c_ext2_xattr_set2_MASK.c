
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct mb_cache {int dummy; } ;
struct inode {int i_ctime; struct super_block* i_sb; } ;
struct ext2_xattr_header {scalar_t__ h_refcount; scalar_t__ h_hash; } ;
struct buffer_head {int b_blocknr; int b_size; int b_data; } ;
typedef int ext2_fsblk_t ;
typedef int __u32 ;
struct TYPE_2__ {int i_file_acl; int i_block_group; } ;


 struct mb_cache* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct ext2_xattr_header* FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct buffer_head*,char*,...) ;
 int FUNC_13 (struct inode*,char*,int) ;
 int FUNC_14 (struct inode*,int,int) ;
 int FUNC_15 (struct super_block*,int ) ;
 int FUNC_16 (struct inode*,int ,int*) ;
 struct buffer_head* FUNC_17 (struct inode*,struct ext2_xattr_header*) ;
 int FUNC_18 (struct mb_cache*,struct buffer_head*) ;
 int FUNC_19 (struct super_block*) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (scalar_t__*,int) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (struct buffer_head*) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct mb_cache*,int ,int) ;
 int FUNC_27 (int ,struct ext2_xattr_header*,int ) ;
 struct buffer_head* FUNC_28 (struct super_block*,int) ;
 int FUNC_29 (struct buffer_head*) ;
 int FUNC_30 (struct buffer_head*) ;
 int FUNC_31 (struct inode*,int) ;
 scalar_t__ FUNC_32 (int) ;
 int FUNC_33 (struct buffer_head*) ;

__attribute__((used)) static int
FUNC_34(struct inode *VAR_3, struct buffer_head *VAR_4,
  struct ext2_xattr_header *VAR_5)
{
 struct super_block *VAR_6 = VAR_3->i_sb;
 struct buffer_head *VAR_7 = ((void*)0);
 int VAR_8;
 struct mb_cache *VAR_9 = FUNC_0(VAR_3);

 if (VAR_5) {
  VAR_7 = FUNC_17(VAR_3, VAR_5);
  if (VAR_7) {

   if (VAR_7 == VAR_4) {
    FUNC_12(VAR_7, "keeping this block");
   } else {


    FUNC_12(VAR_7, "reusing block");

    VAR_8 = FUNC_10(VAR_3, 1);
    if (VAR_8) {
     FUNC_33(VAR_7);
     goto cleanup;
    }
    FUNC_21(&FUNC_2(VAR_7)->h_refcount, 1);
    FUNC_12(VAR_7, "refcount now=%d",
     FUNC_22(FUNC_2(VAR_7)->h_refcount));
   }
   FUNC_33(VAR_7);
  } else if (VAR_4 && VAR_5 == FUNC_2(VAR_4)) {


   VAR_7 = VAR_4;
   FUNC_20(VAR_7);
   FUNC_18(VAR_9, VAR_7);
  } else {

   ext2_fsblk_t VAR_10 = FUNC_15(VAR_6,
      FUNC_1(VAR_3)->i_block_group);
   int VAR_11 = FUNC_16(VAR_3, VAR_10, &VAR_8);
   if (VAR_8)
    goto cleanup;
   FUNC_13(VAR_3, "creating block %d", VAR_11);

   VAR_7 = FUNC_28(VAR_6, VAR_11);
   if (FUNC_32(!VAR_7)) {
    FUNC_14(VAR_3, VAR_11, 1);
    FUNC_25(VAR_3);
    VAR_8 = -VAR_1;
    goto cleanup;
   }
   FUNC_23(VAR_7);
   FUNC_27(VAR_7->b_data, VAR_5, VAR_7->b_size);
   FUNC_29(VAR_7);
   FUNC_33(VAR_7);
   FUNC_18(VAR_9, VAR_7);

   FUNC_19(VAR_6);
  }
  FUNC_24(VAR_7);
  if (FUNC_3(VAR_3)) {
   FUNC_30(VAR_7);
   VAR_8 = -VAR_0;
   if (FUNC_6(VAR_7) && !FUNC_7(VAR_7))
    goto cleanup;
  }
 }


 FUNC_1(VAR_3)->i_file_acl = VAR_7 ? VAR_7->b_blocknr : 0;
 VAR_3->i_ctime = FUNC_9(VAR_3);
 if (FUNC_3(VAR_3)) {
  VAR_8 = FUNC_31(VAR_3, 1);



  if (VAR_8 && VAR_8 != -VAR_2) {
   if (VAR_7 && VAR_7 != VAR_4) {
    FUNC_11(VAR_3, 1);
    FUNC_25(VAR_3);
   }
   goto cleanup;
  }
 } else
  FUNC_25(VAR_3);

 VAR_8 = 0;
 if (VAR_4 && VAR_4 != VAR_7) {




  FUNC_23(VAR_4);
  if (FUNC_2(VAR_4)->h_refcount == FUNC_8(1)) {
   __u32 VAR_12 = FUNC_22(FUNC_2(VAR_4)->h_hash);





   FUNC_26(VAR_9, VAR_12,
           VAR_4->b_blocknr);

   FUNC_12(VAR_4, "freeing");
   FUNC_14(VAR_3, VAR_4->b_blocknr, 1);
   FUNC_25(VAR_3);


   FUNC_20(VAR_4);
   FUNC_4(VAR_4);
  } else {

   FUNC_21(&FUNC_2(VAR_4)->h_refcount, -1);
   FUNC_11(VAR_3, 1);
   FUNC_25(VAR_3);
   FUNC_24(VAR_4);
   FUNC_12(VAR_4, "refcount now=%d",
    FUNC_22(FUNC_2(VAR_4)->h_refcount));
  }
  FUNC_33(VAR_4);
 }

cleanup:
 FUNC_5(VAR_7);

 return VAR_8;
}
