
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_ino; TYPE_2__* i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_sb_info {int s_inode_size; TYPE_1__* s_es; } ;
struct ext4_inode {int dummy; } ;
struct buffer_head {int b_size; void* b_data; } ;
typedef int handle_t ;
struct TYPE_8__ {int i_extra_isize; scalar_t__ i_file_acl; } ;
struct TYPE_7__ {size_t s_blocksize; } ;
struct TYPE_6__ {int s_mnt_count; int s_min_extra_isize; } ;


 void* FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 struct ext4_sb_info* FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_5 (struct inode*,struct ext4_inode*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int VAR_2 ;
 int FUNC_8 (struct buffer_head*) ;
 struct buffer_head* FUNC_9 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int ) ;
 int FUNC_11 (struct inode*,struct buffer_head*) ;
 size_t FUNC_12 (void*,size_t*,void*,int*) ;
 int FUNC_13 (int *,struct inode*,struct ext4_inode*,int,size_t,size_t,int*) ;
 int FUNC_14 (void*,int,void*,void*,int) ;
 unsigned int FUNC_15 (int ) ;
 int FUNC_16 (struct inode*,struct ext4_xattr_ibody_header*,void*) ;

int FUNC_17(struct inode *VAR_3, int VAR_4,
          struct ext4_inode *VAR_5, handle_t *VAR_6)
{
 struct ext4_xattr_ibody_header *VAR_7;
 struct ext4_sb_info *VAR_8 = FUNC_3(VAR_3->i_sb);
 static unsigned int VAR_9;
 size_t VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13;
 void *VAR_14, *VAR_15;
 int VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = FUNC_15(VAR_8->s_es->s_min_extra_isize);
 int VAR_19;

retry:
 VAR_19 = VAR_4 - FUNC_2(VAR_3)->i_extra_isize;
 if (FUNC_2(VAR_3)->i_extra_isize >= VAR_4)
  return 0;

 VAR_7 = FUNC_5(VAR_3, VAR_5);






 VAR_14 = FUNC_4(VAR_7);
 VAR_15 = (void *)VAR_5 + FUNC_3(VAR_3->i_sb)->s_inode_size;
 VAR_10 = VAR_15 - VAR_14;
 VAR_13 = sizeof(struct ext4_xattr_ibody_header) + sizeof(u32);

 VAR_16 = FUNC_16(VAR_3, VAR_7, VAR_15);
 if (VAR_16)
  goto cleanup;

 VAR_11 = FUNC_12(VAR_14, &VAR_10, VAR_14, &VAR_13);
 if (VAR_11 >= VAR_19)
  goto shift;





 if (FUNC_2(VAR_3)->i_file_acl) {
  struct buffer_head *VAR_20;

  VAR_20 = FUNC_9(VAR_3->i_sb, FUNC_2(VAR_3)->i_file_acl, VAR_2);
  if (FUNC_6(VAR_20)) {
   VAR_16 = FUNC_7(VAR_20);
   goto cleanup;
  }
  VAR_16 = FUNC_11(VAR_3, VAR_20);
  if (VAR_16) {
   FUNC_8(VAR_20);
   goto cleanup;
  }
  VAR_14 = FUNC_1(VAR_20);
  VAR_15 = VAR_20->b_data + VAR_20->b_size;
  VAR_10 = VAR_15 - VAR_14;
  VAR_12 = FUNC_12(FUNC_0(VAR_20), &VAR_10, VAR_14,
           ((void*)0));
  FUNC_8(VAR_20);
  if (VAR_12 + VAR_11 < VAR_19) {
   if (!VAR_17 && VAR_18) {
    VAR_17++;
    VAR_4 = VAR_18;
    goto retry;
   }
   VAR_16 = -VAR_0;
   goto cleanup;
  }
 } else {
  VAR_12 = VAR_3->i_sb->s_blocksize;
 }

 VAR_16 = FUNC_13(VAR_6, VAR_3, VAR_5,
         VAR_19, VAR_11, VAR_12,
         &VAR_13);
 if (VAR_16) {
  if (VAR_16 == -VAR_0 && !VAR_17 &&
      VAR_18) {
   VAR_17++;
   VAR_4 = VAR_18;
   goto retry;
  }
  goto cleanup;
 }
shift:

 FUNC_14(FUNC_4(VAR_7), FUNC_2(VAR_3)->i_extra_isize
   - VAR_4, (void *)VAR_5 +
   VAR_1 + VAR_4,
   (void *)VAR_7, VAR_13);
 FUNC_2(VAR_3)->i_extra_isize = VAR_4;

cleanup:
 if (VAR_16 && (VAR_9 != FUNC_15(VAR_8->s_es->s_mnt_count))) {
  FUNC_10(VAR_3->i_sb, "Unable to expand inode %lu. Delete some EAs or run e2fsck.",
        VAR_3->i_ino);
  VAR_9 = FUNC_15(VAR_8->s_es->s_mnt_count);
 }
 return VAR_16;
}
