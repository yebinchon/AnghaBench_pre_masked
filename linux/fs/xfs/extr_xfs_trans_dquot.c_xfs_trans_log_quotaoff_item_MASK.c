
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int t_flags; } ;
typedef TYPE_2__ xfs_trans_t ;
struct TYPE_6__ {int li_flags; } ;
struct TYPE_8__ {TYPE_1__ qql_item; } ;
typedef TYPE_3__ xfs_qoff_logitem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

void
FUNC_1(
 xfs_trans_t *VAR_2,
 xfs_qoff_logitem_t *VAR_3)
{
 VAR_2->t_flags |= VAR_1;
 FUNC_0(VAR_0, &VAR_3->qql_item.li_flags);
}
