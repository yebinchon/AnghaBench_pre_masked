
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mb_cache {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_xattr_entry {int e_value_offs; scalar_t__ e_value_inum; int e_value_size; } ;
struct buffer_head {int b_size; void* b_data; int b_count; } ;
struct TYPE_4__ {int h_refcount; } ;
struct TYPE_3__ {scalar_t__ i_file_acl; } ;


 struct ext4_xattr_entry* FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct buffer_head*) ;
 struct mb_cache* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct inode*) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*,char*,int ,size_t) ;
 int FUNC_9 (struct inode*,char*,unsigned long long,...) ;
 struct buffer_head* FUNC_10 (int ,scalar_t__,int ) ;
 int FUNC_11 (struct mb_cache*,struct buffer_head*) ;
 int FUNC_12 (struct inode*,struct buffer_head*) ;
 int FUNC_13 (struct inode*,struct ext4_xattr_entry*,void*,size_t) ;
 int FUNC_14 (int ) ;
 size_t FUNC_15 (int ) ;
 int FUNC_16 (void*,void*,size_t) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct inode*,struct ext4_xattr_entry**,void*,int,char const*,int) ;

__attribute__((used)) static int
FUNC_19(struct inode *VAR_4, int VAR_5, const char *VAR_6,
       void *VAR_7, size_t VAR_8)
{
 struct buffer_head *VAR_9 = ((void*)0);
 struct ext4_xattr_entry *VAR_10;
 size_t VAR_11;
 void *VAR_12;
 int VAR_13;
 struct mb_cache *VAR_14 = FUNC_2(VAR_4);

 FUNC_9(VAR_4, "name=%d.%s, buffer=%p, buffer_size=%ld",
    VAR_5, VAR_6, VAR_7, (long)VAR_8);

 if (!FUNC_3(VAR_4)->i_file_acl)
  return -VAR_0;
 FUNC_9(VAR_4, "reading block %llu",
    (unsigned long long)FUNC_3(VAR_4)->i_file_acl);
 VAR_9 = FUNC_10(VAR_4->i_sb, FUNC_3(VAR_4)->i_file_acl, VAR_3);
 if (FUNC_4(VAR_9))
  return FUNC_5(VAR_9);
 FUNC_8(VAR_9, "b_count=%d, refcount=%d",
  FUNC_6(&(VAR_9->b_count)), FUNC_15(FUNC_1(VAR_9)->h_refcount));
 VAR_13 = FUNC_12(VAR_4, VAR_9);
 if (VAR_13)
  goto cleanup;
 FUNC_11(VAR_14, VAR_9);
 VAR_10 = FUNC_0(VAR_9);
 VAR_12 = VAR_9->b_data + VAR_9->b_size;
 VAR_13 = FUNC_18(VAR_4, &VAR_10, VAR_12, VAR_5, VAR_6, 1);
 if (VAR_13)
  goto cleanup;
 VAR_11 = FUNC_15(VAR_10->e_value_size);
 VAR_13 = -VAR_1;
 if (FUNC_17(VAR_11 > VAR_2))
  goto cleanup;
 if (VAR_7) {
  if (VAR_11 > VAR_8)
   goto cleanup;
  if (VAR_10->e_value_inum) {
   VAR_13 = FUNC_13(VAR_4, VAR_10, VAR_7,
           VAR_11);
   if (VAR_13)
    goto cleanup;
  } else {
   u16 VAR_15 = FUNC_14(VAR_10->e_value_offs);
   void *VAR_16 = VAR_9->b_data + VAR_15;

   if (FUNC_17(VAR_16 + VAR_11 > VAR_12))
    goto cleanup;
   FUNC_16(VAR_7, VAR_16, VAR_11);
  }
 }
 VAR_13 = VAR_11;

cleanup:
 FUNC_7(VAR_9);
 return VAR_13;
}
