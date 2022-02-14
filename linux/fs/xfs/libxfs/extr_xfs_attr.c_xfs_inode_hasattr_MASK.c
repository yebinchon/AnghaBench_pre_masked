
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ di_aformat; scalar_t__ di_anextents; } ;
struct xfs_inode {TYPE_1__ i_d; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfs_inode*) ;

int
FUNC_1(
 struct xfs_inode *VAR_1)
{
 if (!FUNC_0(VAR_1) ||
     (VAR_1->i_d.di_aformat == VAR_0 &&
      VAR_1->i_d.di_anextents == 0))
  return 0;
 return 1;
}
