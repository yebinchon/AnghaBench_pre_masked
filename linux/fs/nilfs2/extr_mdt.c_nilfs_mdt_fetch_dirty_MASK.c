
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {int i_state; int i_bmap; } ;
struct inode {int dummy; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct inode *VAR_1)
{
 struct nilfs_inode_info *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2->i_bmap)) {
  FUNC_2(VAR_0, &VAR_2->i_state);
  return 1;
 }
 return FUNC_3(VAR_0, &VAR_2->i_state);
}
