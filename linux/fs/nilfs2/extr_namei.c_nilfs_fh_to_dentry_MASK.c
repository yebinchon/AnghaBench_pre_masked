
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_fid {int gen; int ino; int cno; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_3, struct fid *VAR_4,
      int VAR_5, int VAR_6)
{
 struct nilfs_fid *VAR_7 = (struct nilfs_fid *)VAR_4;

 if (VAR_5 < VAR_2 ||
     (VAR_6 != VAR_1 &&
      VAR_6 != VAR_0))
  return ((void*)0);

 return FUNC_0(VAR_3, VAR_7->cno, VAR_7->ino, VAR_7->gen);
}
