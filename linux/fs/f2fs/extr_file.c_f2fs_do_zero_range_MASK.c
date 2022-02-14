
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {unsigned int ofs_in_node; scalar_t__ data_blkaddr; int node_page; int inode; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ blkcnt_t ;


 int VAR_0 ;
 struct f2fs_sb_info* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (struct f2fs_sb_info*,scalar_t__) ;
 int FUNC_3 (struct dnode_of_data*,scalar_t__) ;
 int FUNC_4 (struct dnode_of_data*) ;
 int FUNC_5 (struct dnode_of_data*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct dnode_of_data *VAR_3, pgoff_t VAR_4,
        pgoff_t VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_0(VAR_3->inode);
 pgoff_t VAR_7 = VAR_4;
 unsigned int VAR_8 = VAR_3->ofs_in_node;
 blkcnt_t VAR_9 = 0;
 int VAR_10;

 for (; VAR_7 < VAR_5; VAR_7++, VAR_3->ofs_in_node++) {
  if (FUNC_1(VAR_3->inode, VAR_3->node_page,
     VAR_3->ofs_in_node) == VAR_2)
   VAR_9++;
 }

 VAR_3->ofs_in_node = VAR_8;
 VAR_10 = FUNC_3(VAR_3, VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_3->ofs_in_node = VAR_8;
 for (VAR_7 = VAR_4; VAR_7 < VAR_5; VAR_7++, VAR_3->ofs_in_node++) {
  VAR_3->data_blkaddr = FUNC_1(VAR_3->inode,
     VAR_3->node_page, VAR_3->ofs_in_node);




  if (VAR_3->data_blkaddr == VAR_2) {
   VAR_10 = -VAR_0;
   break;
  }
  if (VAR_3->data_blkaddr != VAR_1) {
   FUNC_2(VAR_6, VAR_3->data_blkaddr);
   VAR_3->data_blkaddr = VAR_1;
   FUNC_4(VAR_3);
  }
 }

 FUNC_5(VAR_3, VAR_4, 0, VAR_7 - VAR_4);

 return VAR_10;
}
