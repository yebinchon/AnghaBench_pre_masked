
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int fs_id; int khandle; } ;
struct orangefs_inode_s {struct inode vfs_inode; int * link_target; scalar_t__ last_failed_block_index_read; TYPE_1__ refn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct inode*) ;
 struct orangefs_inode_s* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_4)
{
 struct orangefs_inode_s *VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);





 FUNC_2(&VAR_5->refn.khandle, 0, 16);
 VAR_5->refn.fs_id = VAR_2;
 VAR_5->last_failed_block_index_read = 0;
 FUNC_2(VAR_5->link_target, 0, sizeof(VAR_5->link_target));

 FUNC_0(VAR_1,
       "orangefs_alloc_inode: allocated %p\n",
       &VAR_5->vfs_inode);
 return &VAR_5->vfs_inode;
}
