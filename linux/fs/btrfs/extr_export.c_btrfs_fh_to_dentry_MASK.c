
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;
struct btrfs_fid {int gen; int root_objectid; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ,int) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_6, struct fid *VAR_7,
      int VAR_8, int VAR_9)
{
 struct btrfs_fid *VAR_10 = (struct btrfs_fid *) VAR_7;
 u64 VAR_11, VAR_12;
 u32 VAR_13;

 if ((VAR_9 != VAR_4 ||
      VAR_8 < VAR_0) &&
     (VAR_9 != VAR_5 ||
      VAR_8 < VAR_1) &&
     (VAR_9 != VAR_3 ||
      VAR_8 < VAR_2))
  return ((void*)0);

 VAR_11 = VAR_10->objectid;
 VAR_12 = VAR_10->root_objectid;
 VAR_13 = VAR_10->gen;

 return FUNC_0(VAR_6, VAR_11, VAR_12, VAR_13, 1);
}
