
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_fid {int parent_gen; int parent_ino; int cno; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_2, struct fid *VAR_3,
      int VAR_4, int VAR_5)
{
 struct nilfs_fid *VAR_6 = (struct nilfs_fid *)VAR_3;

 if (VAR_4 < VAR_1 ||
     VAR_5 != VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_2, VAR_6->cno, VAR_6->parent_ino, VAR_6->parent_gen);
}
