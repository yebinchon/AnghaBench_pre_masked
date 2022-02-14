
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_size; } ;
struct hfs_btree {int free_nodes; int node_size_shift; int node_count; TYPE_2__* sb; struct inode* inode; } ;
typedef int loff_t ;
struct TYPE_6__ {int phys_size; int fs_blocks; scalar_t__ alloc_blocks; } ;
struct TYPE_5__ {int s_blocksize_bits; } ;
struct TYPE_4__ {int alloc_blksz; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;

int FUNC_4(struct hfs_btree *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = VAR_0->inode;
 u32 VAR_3;
 int VAR_4;

 while (VAR_0->free_nodes < VAR_1) {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4)
   return VAR_4;
  FUNC_0(VAR_2)->phys_size = VAR_2->i_size =
    (loff_t)FUNC_0(VAR_2)->alloc_blocks *
    FUNC_1(VAR_0->sb)->alloc_blksz;
  FUNC_0(VAR_2)->fs_blocks = VAR_2->i_size >>
       VAR_0->sb->s_blocksize_bits;
  FUNC_3(VAR_2, VAR_2->i_size);
  VAR_3 = VAR_2->i_size >> VAR_0->node_size_shift;
  VAR_0->free_nodes += VAR_3 - VAR_0->node_count;
  VAR_0->node_count = VAR_3;
 }
 return 0;
}
