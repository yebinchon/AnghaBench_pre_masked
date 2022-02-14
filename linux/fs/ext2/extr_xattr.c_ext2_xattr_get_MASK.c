
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mb_cache {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_ino; } ;
struct ext2_xattr_entry {int e_value_offs; int e_value_size; } ;
struct buffer_head {char* b_data; int b_size; int b_count; } ;
struct TYPE_8__ {int xattr_sem; int i_file_acl; } ;
struct TYPE_7__ {int h_refcount; } ;
struct TYPE_6__ {int s_blocksize; } ;


 struct mb_cache* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 (struct inode*) ;
 struct ext2_xattr_entry* FUNC_2 (struct ext2_xattr_entry*) ;
 struct ext2_xattr_entry* FUNC_3 (struct buffer_head*) ;
 TYPE_2__* FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct ext2_xattr_entry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct buffer_head*,char*,int ,size_t) ;
 int FUNC_10 (struct inode*,char*,...) ;
 int FUNC_11 (TYPE_1__*,char*,char*,int ,int ) ;
 scalar_t__ FUNC_12 (struct mb_cache*,struct buffer_head*) ;
 int FUNC_13 (int,size_t,char const*,struct ext2_xattr_entry*) ;
 int FUNC_14 (struct ext2_xattr_entry*,char*,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int ) ;
 size_t FUNC_17 (int ) ;
 int FUNC_18 (void*,char*,size_t) ;
 struct buffer_head* FUNC_19 (TYPE_1__*,int ) ;
 size_t FUNC_20 (char const*) ;
 int FUNC_21 (int *) ;

int
FUNC_22(struct inode *VAR_4, int VAR_5, const char *VAR_6,
        void *VAR_7, size_t VAR_8)
{
 struct buffer_head *VAR_9 = ((void*)0);
 struct ext2_xattr_entry *VAR_10;
 size_t VAR_11, VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15;
 struct mb_cache *VAR_16 = FUNC_0(VAR_4);

 FUNC_10(VAR_4, "name=%d.%s, buffer=%p, buffer_size=%ld",
    VAR_5, VAR_6, VAR_7, (long)VAR_8);

 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_11 = FUNC_20(VAR_6);
 if (VAR_11 > 255)
  return -VAR_3;

 FUNC_8(&FUNC_1(VAR_4)->xattr_sem);
 VAR_14 = -VAR_2;
 if (!FUNC_1(VAR_4)->i_file_acl)
  goto cleanup;
 FUNC_10(VAR_4, "reading block %d", FUNC_1(VAR_4)->i_file_acl);
 VAR_9 = FUNC_19(VAR_4->i_sb, FUNC_1(VAR_4)->i_file_acl);
 VAR_14 = -VAR_1;
 if (!VAR_9)
  goto cleanup;
 FUNC_9(VAR_9, "b_count=%d, refcount=%d",
  FUNC_6(&(VAR_9->b_count)), FUNC_17(FUNC_4(VAR_9)->h_refcount));
 VAR_13 = VAR_9->b_data + VAR_9->b_size;
 if (!FUNC_15(FUNC_4(VAR_9))) {
bad_block:
  FUNC_11(VAR_4->i_sb, "ext2_xattr_get",
   "inode %ld: bad block %d", VAR_4->i_ino,
   FUNC_1(VAR_4)->i_file_acl);
  VAR_14 = -VAR_1;
  goto cleanup;
 }


 VAR_10 = FUNC_3(VAR_9);
 while (!FUNC_5(VAR_10)) {
  if (!FUNC_14(VAR_10, VAR_13,
      VAR_4->i_sb->s_blocksize))
   goto bad_block;

  VAR_15 = FUNC_13(VAR_5, VAR_11, VAR_6,
       VAR_10);
  if (!VAR_15)
   goto found;
  if (VAR_15 < 0)
   break;

  VAR_10 = FUNC_2(VAR_10);
 }
 if (FUNC_12(VAR_16, VAR_9))
  FUNC_10(VAR_4, "cache insert failed");
 VAR_14 = -VAR_2;
 goto cleanup;
found:
 VAR_12 = FUNC_17(VAR_10->e_value_size);
 if (FUNC_12(VAR_16, VAR_9))
  FUNC_10(VAR_4, "cache insert failed");
 if (VAR_7) {
  VAR_14 = -VAR_3;
  if (VAR_12 > VAR_8)
   goto cleanup;

  FUNC_18(VAR_7, VAR_9->b_data + FUNC_16(VAR_10->e_value_offs),
   VAR_12);
 }
 VAR_14 = VAR_12;

cleanup:
 FUNC_7(VAR_9);
 FUNC_21(&FUNC_1(VAR_4)->xattr_sem);

 return VAR_14;
}
