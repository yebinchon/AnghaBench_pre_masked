
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_root {scalar_t__ cno; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct nilfs_root* i_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int) ;

int FUNC_2(struct inode *VAR_3, int VAR_4)
{
 struct nilfs_root *VAR_5 = FUNC_0(VAR_3)->i_root;

 if ((VAR_4 & VAR_1) && VAR_5 &&
     VAR_5->cno != VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4);
}
