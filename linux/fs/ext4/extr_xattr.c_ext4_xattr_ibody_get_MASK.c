
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct inode {int i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_xattr_entry {int e_value_offs; scalar_t__ e_value_inum; int e_value_size; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {int bh; } ;
struct TYPE_2__ {int s_inode_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct ext4_xattr_entry* FUNC_1 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_2 (struct inode*,struct ext4_inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct ext4_iloc*) ;
 struct ext4_inode* FUNC_5 (struct ext4_iloc*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,struct ext4_xattr_entry*,void*,size_t) ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (void*,void*,size_t) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct inode*,struct ext4_xattr_ibody_header*,void*) ;
 int FUNC_13 (struct inode*,struct ext4_xattr_entry**,void*,int,char const*,int ) ;

int
FUNC_14(struct inode *VAR_4, int VAR_5, const char *VAR_6,
       void *VAR_7, size_t VAR_8)
{
 struct ext4_xattr_ibody_header *VAR_9;
 struct ext4_xattr_entry *VAR_10;
 struct ext4_inode *VAR_11;
 struct ext4_iloc VAR_12;
 size_t VAR_13;
 void *VAR_14;
 int VAR_15;

 if (!FUNC_6(VAR_4, VAR_2))
  return -VAR_0;
 VAR_15 = FUNC_4(VAR_4, &VAR_12);
 if (VAR_15)
  return VAR_15;
 VAR_11 = FUNC_5(&VAR_12);
 VAR_9 = FUNC_2(VAR_4, VAR_11);
 VAR_14 = (void *)VAR_11 + FUNC_0(VAR_4->i_sb)->s_inode_size;
 VAR_15 = FUNC_12(VAR_4, VAR_9, VAR_14);
 if (VAR_15)
  goto cleanup;
 VAR_10 = FUNC_1(VAR_9);
 VAR_15 = FUNC_13(VAR_4, &VAR_10, VAR_14, VAR_5, VAR_6, 0);
 if (VAR_15)
  goto cleanup;
 VAR_13 = FUNC_9(VAR_10->e_value_size);
 VAR_15 = -VAR_1;
 if (FUNC_11(VAR_13 > VAR_3))
  goto cleanup;
 if (VAR_7) {
  if (VAR_13 > VAR_8)
   goto cleanup;
  if (VAR_10->e_value_inum) {
   VAR_15 = FUNC_7(VAR_4, VAR_10, VAR_7,
           VAR_13);
   if (VAR_15)
    goto cleanup;
  } else {
   u16 VAR_16 = FUNC_8(VAR_10->e_value_offs);
   void *VAR_17 = (void *)FUNC_1(VAR_9) + VAR_16;

   if (FUNC_11(VAR_17 + VAR_13 > VAR_14))
    goto cleanup;
   FUNC_10(VAR_7, VAR_17, VAR_13);
  }
 }
 VAR_15 = VAR_13;

cleanup:
 FUNC_3(VAR_12.bh);
 return VAR_15;
}
