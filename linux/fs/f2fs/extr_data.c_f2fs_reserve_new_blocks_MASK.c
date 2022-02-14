
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int node_changed; int node_page; int data_blkaddr; int ofs_in_node; int inode; int nid; } ;
typedef scalar_t__ block_t ;
typedef int blkcnt_t ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct dnode_of_data*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (struct f2fs_sb_info*,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct dnode_of_data *VAR_5, blkcnt_t VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_5->inode);
 int VAR_8;

 if (!VAR_6)
  return 0;

 if (FUNC_8(FUNC_5(VAR_5->inode, VAR_1)))
  return -VAR_0;
 if (FUNC_8((VAR_8 = FUNC_4(VAR_7, VAR_5->inode, &VAR_6))))
  return VAR_8;

 FUNC_7(VAR_5->inode, VAR_5->nid,
      VAR_5->ofs_in_node, VAR_6);

 FUNC_3(VAR_5->node_page, VAR_3, 1, 1);

 for (; VAR_6 > 0; VAR_5->ofs_in_node++) {
  block_t VAR_9 = FUNC_2(VAR_5->inode,
     VAR_5->node_page, VAR_5->ofs_in_node);
  if (VAR_9 == VAR_4) {
   VAR_5->data_blkaddr = VAR_2;
   FUNC_1(VAR_5);
   VAR_6--;
  }
 }

 if (FUNC_6(VAR_5->node_page))
  VAR_5->node_changed = 1;
 return 0;
}
