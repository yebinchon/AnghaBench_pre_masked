
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_size; } ;
struct hfsplus_inode_info {int phys_size; int alloc_blocks; int fs_blocks; } ;
struct hfs_btree {int free_nodes; int node_size_shift; int node_count; int sb; struct inode* inode; } ;
typedef int loff_t ;
struct TYPE_2__ {int alloc_blksz_shift; int fs_shift; } ;


 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct hfs_btree*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int) ;

int FUNC_5(struct hfs_btree *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = VAR_0->inode;
 struct hfsplus_inode_info *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;
 int VAR_5;

 if (VAR_1 <= 0)
  return 0;

 while (VAR_0->free_nodes < VAR_1) {
  VAR_5 = FUNC_3(VAR_2, FUNC_2(VAR_0));
  if (VAR_5)
   return VAR_5;
  VAR_3->phys_size = VAR_2->i_size =
   (loff_t)VAR_3->alloc_blocks <<
    FUNC_1(VAR_0->sb)->alloc_blksz_shift;
  VAR_3->fs_blocks =
   VAR_3->alloc_blocks << FUNC_1(VAR_0->sb)->fs_shift;
  FUNC_4(VAR_2, VAR_2->i_size);
  VAR_4 = VAR_2->i_size >> VAR_0->node_size_shift;
  VAR_0->free_nodes += VAR_4 - VAR_0->node_count;
  VAR_0->node_count = VAR_4;
 }
 return 0;
}
