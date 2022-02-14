
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {int version; } ;
struct f2fs_summary {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int data_blkaddr; int ofs_in_node; int nid; int inode; int node_page; } ;
typedef int block_t ;
typedef int blkcnt_t ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*,int ) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int *,int ,int *,struct f2fs_summary*,int,int *,int) ;
 int FUNC_5 (struct f2fs_sb_info*,int ,struct node_info*) ;
 int FUNC_6 (struct dnode_of_data*,int ) ;
 int FUNC_7 (struct f2fs_sb_info*,int ,int*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct f2fs_summary*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct dnode_of_data *VAR_4, int VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_0(VAR_4->inode);
 struct f2fs_summary VAR_7;
 struct node_info VAR_8;
 block_t VAR_9;
 blkcnt_t VAR_10 = 1;
 int VAR_11;

 if (FUNC_11(FUNC_9(VAR_4->inode, VAR_1)))
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_6, VAR_4->nid, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_4->data_blkaddr = FUNC_3(VAR_4->inode,
    VAR_4->node_page, VAR_4->ofs_in_node);
 if (VAR_4->data_blkaddr != VAR_2)
  goto alloc;

 if (FUNC_11((VAR_11 = FUNC_7(VAR_6, VAR_4->inode, &VAR_10))))
  return VAR_11;

alloc:
 FUNC_10(&VAR_7, VAR_4->nid, VAR_4->ofs_in_node, VAR_8.version);
 VAR_9 = VAR_4->data_blkaddr;
 FUNC_4(VAR_6, ((void*)0), VAR_9, &VAR_4->data_blkaddr,
     &VAR_7, VAR_5, ((void*)0), 0);
 if (FUNC_1(VAR_6, VAR_9) != VAR_3)
  FUNC_8(FUNC_2(VAR_6),
     VAR_9, VAR_9);
 FUNC_6(VAR_4, VAR_4->data_blkaddr);





 return 0;
}
