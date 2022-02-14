
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hpfs_inode_info {scalar_t__ i_dirty; } ;


 struct hpfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_0)
{
 struct hpfs_inode_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->i_dirty)
  FUNC_1(VAR_0);
}
