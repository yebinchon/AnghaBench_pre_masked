
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct fid {int dummy; } ;
struct fat_fid {int i_pos_hi; int i_pos_low; int i_gen; } ;
struct dentry {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;


 struct inode* FUNC_0 (struct super_block*,int ,int ,int) ;
 struct dentry* FUNC_1 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_2(struct super_block *VAR_2,
            struct fid *VAR_3, int VAR_4,
            int VAR_5)
{
 struct inode *VAR_6 = ((void*)0);
 struct fat_fid *VAR_7 = (struct fat_fid *)VAR_3;
 loff_t VAR_8;

 switch (VAR_5) {
 case 129:
  if (VAR_4 < VAR_0)
   return ((void*)0);
  break;
 case 128:
  if (VAR_4 < VAR_1)
   return ((void*)0);
  break;
 default:
  return ((void*)0);
 }
 VAR_8 = VAR_7->i_pos_hi;
 VAR_8 = (VAR_8 << 32) | (VAR_7->i_pos_low);
 VAR_6 = FUNC_0(VAR_2, 0, VAR_7->i_gen, VAR_8);

 return FUNC_1(VAR_6);
}
