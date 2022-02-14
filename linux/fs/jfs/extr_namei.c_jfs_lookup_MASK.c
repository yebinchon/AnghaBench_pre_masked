
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct inode {int i_sb; } ;
struct dentry {int i_sb; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct inode* FUNC_2 (struct inode*,struct inode*) ;
 int FUNC_3 (struct inode*,struct component_name*,scalar_t__*,struct btstack*,int ) ;
 int FUNC_4 (struct component_name*) ;
 int FUNC_5 (struct component_name*,struct inode*) ;
 int FUNC_6 (char*,int) ;
 struct inode* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (char*,struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct inode *VAR_2, struct dentry *VAR_3, unsigned int VAR_4)
{
 struct btstack VAR_5;
 ino_t VAR_6;
 struct inode *VAR_7;
 struct component_name VAR_8;
 int VAR_9;

 FUNC_8("jfs_lookup: name = %pd", VAR_3);

 if ((VAR_9 = FUNC_5(&VAR_8, VAR_3)))
  return FUNC_0(VAR_9);
 VAR_9 = FUNC_3(VAR_2, &VAR_8, &VAR_6, &VAR_5, VAR_1);
 FUNC_4(&VAR_8);
 if (VAR_9 == -VAR_0) {
  VAR_7 = ((void*)0);
 } else if (VAR_9) {
  FUNC_6("jfs_lookup: dtSearch returned %d", VAR_9);
  VAR_7 = FUNC_0(VAR_9);
 } else {
  VAR_7 = FUNC_7(VAR_2->i_sb, VAR_6);
  if (FUNC_1(VAR_7))
   FUNC_6("jfs_lookup: iget failed on inum %d", (uint)VAR_6);
 }

 return FUNC_2(VAR_7, VAR_3);
}
