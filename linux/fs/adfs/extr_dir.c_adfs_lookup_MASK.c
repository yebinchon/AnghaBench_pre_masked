
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int *,struct object_info*) ;
 struct inode* FUNC_2 (int ,struct object_info*) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;

__attribute__((used)) static struct dentry *
FUNC_4(struct inode *VAR_2, struct dentry *VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5 = ((void*)0);
 struct object_info VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_3->d_name, &VAR_6);
 if (VAR_7 == 0) {




  VAR_5 = FUNC_2(VAR_2->i_sb, &VAR_6);
  if (!VAR_5)
   VAR_5 = FUNC_0(-VAR_0);
 } else if (VAR_7 != -VAR_1) {
  VAR_5 = FUNC_0(VAR_7);
 }
 return FUNC_3(VAR_5, VAR_3);
}
