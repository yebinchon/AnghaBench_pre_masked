
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {scalar_t__ data_blkaddr; int inode; scalar_t__ ofs_in_node; int node_page; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct dnode_of_data *VAR_2)
{
 pgoff_t VAR_3;
 block_t VAR_4;

 if (!FUNC_0(VAR_2->inode))
  return;

 if (VAR_2->data_blkaddr == VAR_0)
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_2->data_blkaddr;

 VAR_3 = FUNC_1(FUNC_3(VAR_2->node_page), VAR_2->inode) +
        VAR_2->ofs_in_node;
 FUNC_2(VAR_2->inode, VAR_3, VAR_4, 1);
}
