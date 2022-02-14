
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_inode {scalar_t__ i_cnextents; int i_cformat; TYPE_1__* i_cowfp; } ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_3 ;

void
FUNC_1(
 struct xfs_inode *VAR_4)
{
 if (VAR_4->i_cowfp)
  return;

 VAR_4->i_cowfp = FUNC_0(VAR_3,
           VAR_0);
 VAR_4->i_cowfp->if_flags = VAR_2;
 VAR_4->i_cformat = VAR_1;
 VAR_4->i_cnextents = 0;
}
