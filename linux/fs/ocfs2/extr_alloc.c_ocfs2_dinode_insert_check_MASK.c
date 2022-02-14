
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dev_str; } ;
struct TYPE_2__ {int i_sb; } ;
struct ocfs2_inode_info {int ip_dyn_features; scalar_t__ ip_clusters; scalar_t__ ip_blkno; TYPE_1__ vfs_inode; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 struct ocfs2_inode_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int ,unsigned long long,int ,scalar_t__) ;
 int FUNC_5 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_extent_tree *VAR_1,
         struct ocfs2_extent_rec *VAR_2)
{
 struct ocfs2_inode_info *VAR_3 = FUNC_2(VAR_1->et_ci);
 struct ocfs2_super *VAR_4 = FUNC_1(VAR_3->vfs_inode.i_sb);

 FUNC_0(VAR_3->ip_dyn_features & VAR_0);
 FUNC_4(!FUNC_5(VAR_4) &&
   (VAR_3->ip_clusters != FUNC_3(VAR_2->e_cpos)),
   "Device %s, asking for sparse allocation: inode %llu, "
   "cpos %u, clusters %u\n",
   VAR_4->dev_str,
   (unsigned long long)VAR_3->ip_blkno,
   VAR_2->e_cpos, VAR_3->ip_clusters);

 return 0;
}
