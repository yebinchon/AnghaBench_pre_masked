
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {scalar_t__ max_level; int ofs_in_node; int node_page; int inode; } ;
typedef int pgoff_t ;
typedef int block_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct f2fs_sb_info* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct dnode_of_data*,int,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 int FUNC_7 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_8 (struct dnode_of_data*) ;
 int FUNC_9 (struct dnode_of_data*,int ) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 scalar_t__ FUNC_12 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_7, block_t *VAR_8,
    int *VAR_9, pgoff_t VAR_10, pgoff_t VAR_11)
{
 struct f2fs_sb_info *VAR_12 = FUNC_2(VAR_7);
 struct dnode_of_data VAR_13;
 int VAR_14, VAR_15, VAR_16;

next_dnode:
 FUNC_11(&VAR_13, VAR_7, ((void*)0), ((void*)0), 0);
 VAR_14 = FUNC_5(&VAR_13, VAR_10, VAR_5);
 if (VAR_14 && VAR_14 != -VAR_2) {
  return VAR_14;
 } else if (VAR_14 == -VAR_2) {
  if (VAR_13.max_level == 0)
   return -VAR_2;
  VAR_15 = FUNC_10((pgoff_t)FUNC_0(VAR_7) - VAR_13.ofs_in_node,
         VAR_11);
  VAR_8 += VAR_15;
  VAR_9 += VAR_15;
  goto next;
 }

 VAR_15 = FUNC_10((pgoff_t)FUNC_1(VAR_13.node_page, VAR_7) -
       VAR_13.ofs_in_node, VAR_11);
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++, VAR_8++, VAR_9++, VAR_13.ofs_in_node++) {
  *VAR_8 = FUNC_4(VAR_13.inode,
     VAR_13.node_page, VAR_13.ofs_in_node);

  if (FUNC_3(*VAR_8) &&
   !FUNC_7(VAR_12, *VAR_8,
     VAR_0)) {
   FUNC_8(&VAR_13);
   return -VAR_1;
  }

  if (!FUNC_6(VAR_12, *VAR_8)) {

   if (FUNC_12(VAR_12, VAR_4)) {
    FUNC_8(&VAR_13);
    return -VAR_3;
   }


   FUNC_9(&VAR_13, VAR_6);
   *VAR_9 = 1;
  }
 }
 FUNC_8(&VAR_13);
next:
 VAR_11 -= VAR_15;
 VAR_10 += VAR_15;
 if (VAR_11)
  goto next_dnode;
 return 0;
}
