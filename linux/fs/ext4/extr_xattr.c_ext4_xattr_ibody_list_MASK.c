
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_xattr_ibody_header {int dummy; } ;
struct ext4_inode {int dummy; } ;
struct ext4_iloc {int bh; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_inode_size; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ext4_xattr_ibody_header*) ;
 struct ext4_xattr_ibody_header* FUNC_2 (struct inode*,struct ext4_inode*) ;
 int FUNC_3 (int ) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,struct ext4_iloc*) ;
 struct ext4_inode* FUNC_6 (struct ext4_iloc*) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct dentry*,int ,char*,size_t) ;
 int FUNC_9 (struct inode*,struct ext4_xattr_ibody_header*,void*) ;

__attribute__((used)) static int
FUNC_10(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_1);
 struct ext4_xattr_ibody_header *VAR_5;
 struct ext4_inode *VAR_6;
 struct ext4_iloc VAR_7;
 void *VAR_8;
 int VAR_9;

 if (!FUNC_7(VAR_4, VAR_0))
  return 0;
 VAR_9 = FUNC_5(VAR_4, &VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_6 = FUNC_6(&VAR_7);
 VAR_5 = FUNC_2(VAR_4, VAR_6);
 VAR_8 = (void *)VAR_6 + FUNC_0(VAR_4->i_sb)->s_inode_size;
 VAR_9 = FUNC_9(VAR_4, VAR_5, VAR_8);
 if (VAR_9)
  goto cleanup;
 VAR_9 = FUNC_8(VAR_1, FUNC_1(VAR_5),
     VAR_2, VAR_3);

cleanup:
 FUNC_3(VAR_7.bh);
 return VAR_9;
}
