
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode {int i_sb; } ;
struct hfsplus_inode_info {scalar_t__ cached_start; scalar_t__ cached_blocks; } ;
struct hfs_find_data {int dummy; } ;
struct TYPE_2__ {int ext_tree; } ;


 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct hfs_find_data*,struct inode*,scalar_t__) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (int ,struct hfs_find_data*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, u32 VAR_1)
{
 struct hfsplus_inode_info *VAR_2 = FUNC_0(VAR_0);
 struct hfs_find_data VAR_3;
 int VAR_4;

 if (VAR_1 >= VAR_2->cached_start &&
     VAR_1 < VAR_2->cached_start + VAR_2->cached_blocks)
  return 0;

 VAR_4 = FUNC_4(FUNC_1(VAR_0->i_sb)->ext_tree, &VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_2(&VAR_3, VAR_0, VAR_1);
  FUNC_3(&VAR_3);
 }
 return VAR_4;
}
