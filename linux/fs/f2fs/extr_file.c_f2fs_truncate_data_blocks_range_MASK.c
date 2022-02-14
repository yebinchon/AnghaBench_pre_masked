
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_node {int dummy; } ;
struct dnode_of_data {int ofs_in_node; int nid; int inode; int node_page; scalar_t__ data_blkaddr; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ block_t ;
typedef int __le32 ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (int ) ;
 struct f2fs_node* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * FUNC_4 (struct f2fs_node*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_9 (struct f2fs_sb_info*,scalar_t__,int ) ;
 int FUNC_10 (struct dnode_of_data*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct dnode_of_data*,scalar_t__,int ,int) ;
 int FUNC_13 (struct f2fs_sb_info*,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int,int) ;

void FUNC_18(struct dnode_of_data *VAR_4, int VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_0(VAR_4->inode);
 struct f2fs_node *VAR_7;
 int VAR_8 = 0, VAR_9 = VAR_4->ofs_in_node, VAR_10 = VAR_5;
 __le32 *VAR_11;
 int VAR_12 = 0;

 if (FUNC_2(VAR_4->node_page) && FUNC_7(VAR_4->inode))
  VAR_12 = FUNC_14(VAR_4->inode);

 VAR_7 = FUNC_1(VAR_4->node_page);
 VAR_11 = FUNC_4(VAR_7) + VAR_12 + VAR_9;

 for (; VAR_5 > 0; VAR_5--, VAR_11++, VAR_4->ofs_in_node++) {
  block_t VAR_13 = FUNC_15(*VAR_11);

  if (VAR_13 == VAR_2)
   continue;

  VAR_4->data_blkaddr = VAR_2;
  FUNC_10(VAR_4);

  if (FUNC_3(VAR_13) &&
   !FUNC_9(VAR_6, VAR_13,
     VAR_0))
   continue;

  FUNC_8(VAR_6, VAR_13);
  if (VAR_4->ofs_in_node == 0 && FUNC_2(VAR_4->node_page))
   FUNC_5(VAR_4->inode, VAR_1);
  VAR_8++;
 }

 if (VAR_8) {
  pgoff_t VAR_14;




  VAR_14 = FUNC_11(FUNC_16(VAR_4->node_page),
       VAR_4->inode) + VAR_9;
  FUNC_12(VAR_4, VAR_14, 0, VAR_10);
  FUNC_6(VAR_6, VAR_4->inode, VAR_8);
 }
 VAR_4->ofs_in_node = VAR_9;

 FUNC_13(VAR_6, VAR_3);
 FUNC_17(VAR_4->inode, VAR_4->nid,
      VAR_4->ofs_in_node, VAR_8);
}
