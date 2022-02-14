
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct extent_info {scalar_t__ fofs; scalar_t__ blk; int member_2; int member_1; int member_0; } ;
struct dnode_of_data {scalar_t__ data_blkaddr; struct inode* inode; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ FUNC_0 (struct inode*,scalar_t__,struct extent_info*) ;
 int FUNC_1 (struct dnode_of_data*,scalar_t__) ;

int FUNC_2(struct dnode_of_data *VAR_0, pgoff_t VAR_1)
{
 struct extent_info VAR_2 = {0,0,0};
 struct inode *VAR_3 = VAR_0->inode;

 if (FUNC_0(VAR_3, VAR_1, &VAR_2)) {
  VAR_0->data_blkaddr = VAR_2.blk + VAR_1 - VAR_2.fofs;
  return 0;
 }

 return FUNC_1(VAR_0, VAR_1);
}
