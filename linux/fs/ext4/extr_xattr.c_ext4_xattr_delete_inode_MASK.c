
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_xattr_inode_array {int dummy; } ;
struct ext4_xattr_ibody_header {scalar_t__ h_magic; } ;
struct ext4_xattr_entry {int e_value_size; int e_hash; int e_value_inum; } ;
struct ext4_iloc {struct buffer_head* bh; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_file_acl; } ;


 struct ext4_xattr_entry* FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,char*,int) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_xattr_entry* FUNC_3 (struct ext4_xattr_entry*) ;
 int FUNC_4 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_5 (struct inode*,int ) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct ext4_xattr_entry*) ;
 int FUNC_8 (struct buffer_head*) ;
 int VAR_3 ;
 int FUNC_9 (struct buffer_head*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,struct ext4_iloc*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (int *,struct inode*) ;
 int FUNC_15 (struct ext4_iloc*) ;
 struct buffer_head* FUNC_16 (int ,int,int ) ;
 scalar_t__ FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (struct inode*,struct buffer_head*) ;
 int FUNC_19 (int *,struct inode*,int,int *,int,int) ;
 int FUNC_20 (int *,struct inode*,struct buffer_head*,int ,int,struct ext4_xattr_inode_array**,int,int) ;
 int FUNC_21 (struct inode*,struct inode*,int ) ;
 int FUNC_22 (struct inode*,int ,int ,struct inode**) ;
 int FUNC_23 (int *,struct inode*,struct buffer_head*,struct ext4_xattr_inode_array**,int) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (int ) ;

int FUNC_26(handle_t *VAR_4, struct inode *VAR_5,
       struct ext4_xattr_inode_array **VAR_6,
       int VAR_7)
{
 struct buffer_head *VAR_8 = ((void*)0);
 struct ext4_xattr_ibody_header *VAR_9;
 struct ext4_iloc VAR_10 = { .bh = ((void*)0) };
 struct ext4_xattr_entry *VAR_11;
 struct inode *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_19(VAR_4, VAR_5, VAR_7,
       ((void*)0) ,
       0 ,
       0 );
 if (VAR_13) {
  FUNC_1(VAR_5, "ensure credits (error %d)", VAR_13);
  goto cleanup;
 }

 if (FUNC_12(VAR_5->i_sb) &&
     FUNC_17(VAR_5, VAR_1)) {

  VAR_13 = FUNC_11(VAR_5, &VAR_10);
  if (VAR_13) {
   FUNC_1(VAR_5, "inode loc (error %d)", VAR_13);
   goto cleanup;
  }

  VAR_13 = FUNC_13(VAR_4, VAR_10.bh);
  if (VAR_13) {
   FUNC_1(VAR_5, "write access (error %d)",
      VAR_13);
   goto cleanup;
  }

  VAR_9 = FUNC_5(VAR_5, FUNC_15(&VAR_10));
  if (VAR_9->h_magic == FUNC_10(VAR_2))
   FUNC_20(VAR_4, VAR_5, VAR_10.bh,
           FUNC_4(VAR_9),
           0 ,
           VAR_6,
           VAR_7,
           0 );
 }

 if (FUNC_2(VAR_5)->i_file_acl) {
  VAR_8 = FUNC_16(VAR_5->i_sb, FUNC_2(VAR_5)->i_file_acl, VAR_3);
  if (FUNC_6(VAR_8)) {
   VAR_13 = FUNC_8(VAR_8);
   if (VAR_13 == -VAR_0)
    FUNC_1(VAR_5, "block %llu read error",
       FUNC_2(VAR_5)->i_file_acl);
   VAR_8 = ((void*)0);
   goto cleanup;
  }
  VAR_13 = FUNC_18(VAR_5, VAR_8);
  if (VAR_13)
   goto cleanup;

  if (FUNC_12(VAR_5->i_sb)) {
   for (VAR_11 = FUNC_0(VAR_8); !FUNC_7(VAR_11);
        VAR_11 = FUNC_3(VAR_11)) {
    if (!VAR_11->e_value_inum)
     continue;
    VAR_13 = FUNC_22(VAR_5,
           FUNC_25(VAR_11->e_value_inum),
           FUNC_25(VAR_11->e_hash),
           &VAR_12);
    if (VAR_13)
     continue;
    FUNC_21(VAR_5, VAR_12,
           FUNC_25(VAR_11->e_value_size));
    FUNC_24(VAR_12);
   }

  }

  FUNC_23(VAR_4, VAR_5, VAR_8, VAR_6,
      VAR_7);




  FUNC_2(VAR_5)->i_file_acl = 0;
  VAR_13 = FUNC_14(VAR_4, VAR_5);
  if (VAR_13) {
   FUNC_1(VAR_5, "mark inode dirty (error %d)",
      VAR_13);
   goto cleanup;
  }
 }
 VAR_13 = 0;
cleanup:
 FUNC_9(VAR_10.bh);
 FUNC_9(VAR_8);
 return VAR_13;
}
