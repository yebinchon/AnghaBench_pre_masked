
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;
struct btrfs_fid {int parent_gen; int parent_objectid; int parent_root_objectid; int root_objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ,int) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_4, struct fid *VAR_5,
      int VAR_6, int VAR_7)
{
 struct btrfs_fid *VAR_8 = (struct btrfs_fid *) VAR_5;
 u64 VAR_9, VAR_10;
 u32 VAR_11;

 if (VAR_7 == VAR_2) {
  if (VAR_6 < VAR_0)
   return ((void*)0);
  VAR_10 = VAR_8->root_objectid;
 } else if (VAR_7 == VAR_3) {
  if (VAR_6 < VAR_1)
   return ((void*)0);
  VAR_10 = VAR_8->parent_root_objectid;
 } else
  return ((void*)0);

 VAR_9 = VAR_8->parent_objectid;
 VAR_11 = VAR_8->parent_gen;

 return FUNC_0(VAR_4, VAR_9, VAR_10, VAR_11, 1);
}
