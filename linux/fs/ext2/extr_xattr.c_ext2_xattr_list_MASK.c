
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xattr_handler {char* name; int prefix; scalar_t__ (* list ) (struct dentry*) ;} ;
struct mb_cache {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_ino; } ;
struct ext2_xattr_entry {size_t e_name_len; char const* e_name; int e_name_index; } ;
struct dentry {int dummy; } ;
struct buffer_head {char* b_data; int b_size; int b_count; } ;
struct TYPE_8__ {int xattr_sem; int i_file_acl; } ;
struct TYPE_7__ {int h_refcount; } ;
struct TYPE_6__ {int s_blocksize; } ;


 struct mb_cache* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (struct inode*) ;
 struct ext2_xattr_entry* FUNC_2 (struct ext2_xattr_entry*) ;
 struct ext2_xattr_entry* FUNC_3 (struct buffer_head*) ;
 TYPE_2__* FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct ext2_xattr_entry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct buffer_head*,char*,int ,int ) ;
 int FUNC_11 (struct inode*,char*,...) ;
 int FUNC_12 (TYPE_1__*,char*,char*,int ,int ) ;
 scalar_t__ FUNC_13 (struct mb_cache*,struct buffer_head*) ;
 int FUNC_14 (struct ext2_xattr_entry*,char*,int ) ;
 struct xattr_handler* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,char const*,size_t) ;
 struct buffer_head* FUNC_19 (TYPE_1__*,int ) ;
 size_t FUNC_20 (char const*) ;
 scalar_t__ FUNC_21 (struct dentry*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int
FUNC_23(struct dentry *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct inode *VAR_5 = FUNC_8(VAR_2);
 struct buffer_head *VAR_6 = ((void*)0);
 struct ext2_xattr_entry *VAR_7;
 char *VAR_8;
 size_t VAR_9 = VAR_4;
 int VAR_10;
 struct mb_cache *VAR_11 = FUNC_0(VAR_5);

 FUNC_11(VAR_5, "buffer=%p, buffer_size=%ld",
    VAR_3, (long)VAR_4);

 FUNC_9(&FUNC_1(VAR_5)->xattr_sem);
 VAR_10 = 0;
 if (!FUNC_1(VAR_5)->i_file_acl)
  goto cleanup;
 FUNC_11(VAR_5, "reading block %d", FUNC_1(VAR_5)->i_file_acl);
 VAR_6 = FUNC_19(VAR_5->i_sb, FUNC_1(VAR_5)->i_file_acl);
 VAR_10 = -VAR_0;
 if (!VAR_6)
  goto cleanup;
 FUNC_10(VAR_6, "b_count=%d, refcount=%d",
  FUNC_6(&(VAR_6->b_count)), FUNC_17(FUNC_4(VAR_6)->h_refcount));
 VAR_8 = VAR_6->b_data + VAR_6->b_size;
 if (!FUNC_16(FUNC_4(VAR_6))) {
bad_block:
  FUNC_12(VAR_5->i_sb, "ext2_xattr_list",
   "inode %ld: bad block %d", VAR_5->i_ino,
   FUNC_1(VAR_5)->i_file_acl);
  VAR_10 = -VAR_0;
  goto cleanup;
 }


 VAR_7 = FUNC_3(VAR_6);
 while (!FUNC_5(VAR_7)) {
  if (!FUNC_14(VAR_7, VAR_8,
      VAR_5->i_sb->s_blocksize))
   goto bad_block;
  VAR_7 = FUNC_2(VAR_7);
 }
 if (FUNC_13(VAR_11, VAR_6))
  FUNC_11(VAR_5, "cache insert failed");


 for (VAR_7 = FUNC_3(VAR_6); !FUNC_5(VAR_7);
      VAR_7 = FUNC_2(VAR_7)) {
  const struct xattr_handler *VAR_12 =
   FUNC_15(VAR_7->e_name_index);

  if (VAR_12 && (!VAR_12->list || VAR_12->list(VAR_2))) {
   const char *VAR_13 = VAR_12->prefix ?: VAR_12->name;
   size_t VAR_14 = FUNC_20(VAR_13);
   size_t VAR_15 = VAR_14 + VAR_7->e_name_len + 1;

   if (VAR_3) {
    if (VAR_15 > VAR_9) {
     VAR_10 = -VAR_1;
     goto cleanup;
    }
    FUNC_18(VAR_3, VAR_13, VAR_14);
    VAR_3 += VAR_14;
    FUNC_18(VAR_3, VAR_7->e_name, VAR_7->e_name_len);
    VAR_3 += VAR_7->e_name_len;
    *VAR_3++ = 0;
   }
   VAR_9 -= VAR_15;
  }
 }
 VAR_10 = VAR_4 - VAR_9;

cleanup:
 FUNC_7(VAR_6);
 FUNC_22(&FUNC_1(VAR_5)->xattr_sem);

 return VAR_10;
}
