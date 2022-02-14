
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int di_flags; } ;
struct TYPE_5__ {int if_flags; } ;
struct xfs_inode {scalar_t__ i_delayed_blks; TYPE_2__ i_d; TYPE_1__ i_df; } ;
struct TYPE_8__ {scalar_t__ i_size; TYPE_3__* i_mapping; int i_mode; } ;
struct TYPE_7__ {scalar_t__ nrpages; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (struct xfs_inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool
FUNC_2(struct xfs_inode *VAR_3, bool VAR_4)
{

 if (!FUNC_0(FUNC_1(VAR_3)->i_mode))
  return 0;





 if (FUNC_1(VAR_3)->i_size == 0 &&
     FUNC_1(VAR_3)->i_mapping->nrpages == 0 &&
     VAR_3->i_delayed_blks == 0)
  return 0;


 if (!(VAR_3->i_df.if_flags & VAR_2))
  return 0;





 if (VAR_3->i_d.di_flags & (VAR_1 | VAR_0))
  if (!VAR_4 || VAR_3->i_delayed_blks == 0)
   return 0;

 return 1;
}
