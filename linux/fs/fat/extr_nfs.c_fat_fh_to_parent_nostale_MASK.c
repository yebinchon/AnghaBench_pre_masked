
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct fid {int dummy; } ;
struct fat_fid {int parent_i_pos_hi; int parent_i_pos_low; int parent_i_gen; } ;
struct dentry {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;

 struct inode* FUNC_0 (struct super_block*,int ,int ,int) ;
 struct dentry* FUNC_1 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_2(struct super_block *VAR_1,
            struct fid *VAR_2, int VAR_3,
            int VAR_4)
{
 struct inode *VAR_5 = ((void*)0);
 struct fat_fid *VAR_6 = (struct fat_fid *)VAR_2;
 loff_t VAR_7;

 if (VAR_3 < VAR_0)
  return ((void*)0);

 switch (VAR_4) {
 case 128:
  VAR_7 = VAR_6->parent_i_pos_hi;
  VAR_7 = (VAR_7 << 32) | (VAR_6->parent_i_pos_low);
  VAR_5 = FUNC_0(VAR_1, 0, VAR_6->parent_i_gen, VAR_7);
  break;
 }

 return FUNC_1(VAR_5);
}
