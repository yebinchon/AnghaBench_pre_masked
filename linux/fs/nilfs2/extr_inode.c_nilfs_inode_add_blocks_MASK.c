
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_root {int blocks_count; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct nilfs_root* i_root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int) ;

void FUNC_4(struct inode *VAR_0, int VAR_1)
{
 struct nilfs_root *VAR_2 = FUNC_0(VAR_0)->i_root;

 FUNC_3(VAR_0, FUNC_2(VAR_0) * VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1, &VAR_2->blocks_count);
}
