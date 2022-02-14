
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct inode {int i_ctime; TYPE_2__* i_sb; } ;
struct ext4_xattr_info {int name_index; char const* name; void const* value; size_t value_len; int in_inode; } ;
struct TYPE_14__ {struct buffer_head* bh; } ;
struct TYPE_12__ {scalar_t__ not_found; int base; } ;
struct ext4_xattr_ibody_find {TYPE_3__ iloc; TYPE_1__ s; } ;
struct ext4_xattr_block_find {struct buffer_head* bh; TYPE_1__ s; } ;
struct ext4_inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_15__ {int s_inode_size; } ;
struct TYPE_13__ {int s_blocksize; } ;
struct TYPE_11__ {scalar_t__ i_file_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_10__* FUNC_0 (struct inode*) ;
 TYPE_8__* FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct buffer_head*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_2__*,struct inode*,struct buffer_head*,size_t,int) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *,struct inode*,TYPE_3__*) ;
 struct ext4_inode* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *,struct inode*,TYPE_3__*) ;
 scalar_t__ FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct inode*,int*) ;
 int FUNC_20 (struct inode*,int*) ;
 int FUNC_21 (struct inode*,struct ext4_xattr_info*,struct ext4_xattr_block_find*) ;
 int FUNC_22 (int *,struct inode*,struct ext4_xattr_info*,struct ext4_xattr_block_find*) ;
 struct buffer_head* FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*,struct ext4_xattr_info*,struct ext4_xattr_ibody_find*) ;
 int FUNC_25 (int *,struct inode*,struct ext4_xattr_info*,struct ext4_xattr_ibody_find*) ;
 int FUNC_26 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_27 (TYPE_1__*,struct ext4_xattr_info*) ;
 int FUNC_28 (struct ext4_inode*,int ,int ) ;
 int FUNC_29 (char const*) ;

int
FUNC_30(handle_t *VAR_8, struct inode *VAR_9, int VAR_10,
        const char *VAR_11, const void *VAR_12, size_t VAR_13,
        int VAR_14)
{
 struct ext4_xattr_info VAR_15 = {
  .name_index = VAR_10,
  .name = VAR_11,
  .value = VAR_12,
  .value_len = VAR_13,
  .in_inode = 0,
 };
 struct ext4_xattr_ibody_find VAR_16 = {
  .s = { .not_found = -VAR_2, },
 };
 struct ext4_xattr_block_find VAR_17 = {
  .s = { .not_found = -VAR_2, },
 };
 int VAR_18;
 int VAR_19;

 if (!VAR_11)
  return -VAR_1;
 if (FUNC_29(VAR_11) > 255)
  return -VAR_4;

 FUNC_19(VAR_9, &VAR_18);


 if (FUNC_13(VAR_8)) {
  struct buffer_head *VAR_20;
  int VAR_21;

  VAR_20 = FUNC_23(VAR_9);
  if (FUNC_4(VAR_20)) {
   VAR_19 = FUNC_6(VAR_20);
   goto cleanup;
  }

  VAR_21 = FUNC_7(VAR_9->i_sb, VAR_9, VAR_20,
         VAR_13,
         VAR_14 & VAR_6);
  FUNC_8(VAR_20);

  if (!FUNC_11(VAR_8, VAR_21)) {
   VAR_19 = -VAR_3;
   goto cleanup;
  }
 }

 VAR_19 = FUNC_17(VAR_8, VAR_9, &VAR_16.iloc);
 if (VAR_19)
  goto cleanup;

 if (FUNC_18(VAR_9, VAR_5)) {
  struct ext4_inode *VAR_22 = FUNC_16(&VAR_16.iloc);
  FUNC_28(VAR_22, 0, FUNC_1(VAR_9->i_sb)->s_inode_size);
  FUNC_10(VAR_9, VAR_5);
 }

 VAR_19 = FUNC_24(VAR_9, &VAR_15, &VAR_16);
 if (VAR_19)
  goto cleanup;
 if (VAR_16.s.not_found)
  VAR_19 = FUNC_21(VAR_9, &VAR_15, &VAR_17);
 if (VAR_19)
  goto cleanup;
 if (VAR_16.s.not_found && VAR_17.s.not_found) {
  VAR_19 = -VAR_2;
  if (VAR_14 & VAR_7)
   goto cleanup;
  VAR_19 = 0;
  if (!VAR_12)
   goto cleanup;
 } else {
  VAR_19 = -VAR_0;
  if (VAR_14 & VAR_6)
   goto cleanup;
 }

 if (!VAR_12) {
  if (!VAR_16.s.not_found)
   VAR_19 = FUNC_25(VAR_8, VAR_9, &VAR_15, &VAR_16);
  else if (!VAR_17.s.not_found)
   VAR_19 = FUNC_22(VAR_8, VAR_9, &VAR_15, &VAR_17);
 } else {
  VAR_19 = 0;

  if (!VAR_16.s.not_found && FUNC_27(&VAR_16.s, &VAR_15))
   goto cleanup;
  if (!VAR_17.s.not_found && FUNC_27(&VAR_17.s, &VAR_15))
   goto cleanup;

  if (FUNC_14(VAR_9->i_sb) &&
      (FUNC_3(VAR_15.value_len) >
   FUNC_2(VAR_9->i_sb->s_blocksize)))
   VAR_15.in_inode = 1;
retry_inode:
  VAR_19 = FUNC_25(VAR_8, VAR_9, &VAR_15, &VAR_16);
  if (!VAR_19 && !VAR_17.s.not_found) {
   VAR_15.value = ((void*)0);
   VAR_19 = FUNC_22(VAR_8, VAR_9, &VAR_15, &VAR_17);
  } else if (VAR_19 == -VAR_3) {
   if (FUNC_0(VAR_9)->i_file_acl && !VAR_17.s.base) {
    FUNC_8(VAR_17.bh);
    VAR_17.bh = ((void*)0);
    VAR_19 = FUNC_21(VAR_9, &VAR_15, &VAR_17);
    if (VAR_19)
     goto cleanup;
   }
   VAR_19 = FUNC_22(VAR_8, VAR_9, &VAR_15, &VAR_17);
   if (!VAR_19 && !VAR_16.s.not_found) {
    VAR_15.value = ((void*)0);
    VAR_19 = FUNC_25(VAR_8, VAR_9, &VAR_15,
            &VAR_16);
   } else if (VAR_19 == -VAR_3) {




    if (FUNC_14(VAR_9->i_sb) &&
        !VAR_15.in_inode) {
     VAR_15.in_inode = 1;
     goto retry_inode;
    }
   }
  }
 }
 if (!VAR_19) {
  FUNC_26(VAR_8, VAR_9->i_sb);
  VAR_9->i_ctime = FUNC_9(VAR_9);
  if (!VAR_12)
   VAR_18 = 0;
  VAR_19 = FUNC_15(VAR_8, VAR_9, &VAR_16.iloc);




  VAR_16.iloc.bh = ((void*)0);
  if (FUNC_5(VAR_9))
   FUNC_12(VAR_8);
 }

cleanup:
 FUNC_8(VAR_16.iloc.bh);
 FUNC_8(VAR_17.bh);
 FUNC_20(VAR_9, &VAR_18);
 return VAR_19;
}
