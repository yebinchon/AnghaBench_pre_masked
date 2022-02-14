
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_node {int dummy; } ;
struct dnode_of_data {int ofs_in_node; int data_blkaddr; int inode; int node_page; } ;
typedef int __le32 ;


 struct f2fs_node* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct f2fs_node*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dnode_of_data *VAR_0)
{
 struct f2fs_node *VAR_1 = FUNC_0(VAR_0->node_page);
 __le32 *VAR_2;
 int VAR_3 = 0;

 if (FUNC_1(VAR_0->node_page) && FUNC_4(VAR_0->inode))
  VAR_3 = FUNC_5(VAR_0->inode);


 VAR_2 = FUNC_2(VAR_1);
 VAR_2[VAR_3 + VAR_0->ofs_in_node] = FUNC_3(VAR_0->data_blkaddr);
}
