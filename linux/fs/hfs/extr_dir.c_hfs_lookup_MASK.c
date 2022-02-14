
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; int d_name; int i_ino; } ;
struct hfs_find_data {TYPE_1__* search_key; } ;
struct dentry {int i_sb; int d_name; int i_ino; } ;
typedef int rec ;
typedef int hfs_cat_rec ;
struct TYPE_4__ {int cat_tree; } ;
struct TYPE_3__ {int cat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct inode*,struct inode*) ;
 int FUNC_3 (struct hfs_find_data*,int *,int) ;
 int FUNC_4 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (int ,struct hfs_find_data*) ;
 struct inode* FUNC_7 (int ,int *,int *) ;

__attribute__((used)) static struct dentry *FUNC_8(struct inode *VAR_2, struct dentry *VAR_3,
     unsigned int VAR_4)
{
 hfs_cat_rec VAR_5;
 struct hfs_find_data VAR_6;
 struct inode *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_8 = FUNC_6(FUNC_1(VAR_2->i_sb)->cat_tree, &VAR_6);
 if (VAR_8)
  return FUNC_0(VAR_8);
 FUNC_4(VAR_2->i_sb, VAR_6.search_key, VAR_2->i_ino, &VAR_3->d_name);
 VAR_8 = FUNC_3(&VAR_6, &VAR_5, sizeof(VAR_5));
 if (VAR_8) {
  if (VAR_8 != -VAR_1)
   VAR_7 = FUNC_0(VAR_8);
 } else {
  VAR_7 = FUNC_7(VAR_2->i_sb, &VAR_6.search_key->cat, &VAR_5);
  if (!VAR_7)
   VAR_7 = FUNC_0(-VAR_0);
 }
 FUNC_5(&VAR_6);
 return FUNC_2(VAR_7, VAR_3);
}
