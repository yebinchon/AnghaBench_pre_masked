
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct isofs_fid {int parent_generation; int parent_offset; int parent_block; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_0,
  struct fid *VAR_1, int VAR_2, int VAR_3)
{
 struct isofs_fid *VAR_4 = (struct isofs_fid *)VAR_1;

 if (VAR_2 < 2 || VAR_3 != 2)
  return ((void*)0);

 return FUNC_0(VAR_0,
   VAR_2 > 2 ? VAR_4->parent_block : 0,
   VAR_4->parent_offset,
   VAR_2 > 4 ? VAR_4->parent_generation : 0);
}
