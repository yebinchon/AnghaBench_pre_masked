
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int lstart; } ;
struct udf_inode_info {struct inode vfs_inode; int i_extent_cache_lock; TYPE_1__ cached_extent; int i_data_sem; scalar_t__ i_streamdir; scalar_t__ i_strat4096; scalar_t__ i_next_alloc_goal; scalar_t__ i_next_alloc_block; scalar_t__ i_lenStreams; scalar_t__ i_lenExtents; scalar_t__ i_unique; } ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct udf_inode_info* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_2)
{
 struct udf_inode_info *VAR_3;
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->i_unique = 0;
 VAR_3->i_lenExtents = 0;
 VAR_3->i_lenStreams = 0;
 VAR_3->i_next_alloc_block = 0;
 VAR_3->i_next_alloc_goal = 0;
 VAR_3->i_strat4096 = 0;
 VAR_3->i_streamdir = 0;
 FUNC_0(&VAR_3->i_data_sem);
 VAR_3->cached_extent.lstart = -1;
 FUNC_2(&VAR_3->i_extent_cache_lock);

 return &VAR_3->vfs_inode;
}
