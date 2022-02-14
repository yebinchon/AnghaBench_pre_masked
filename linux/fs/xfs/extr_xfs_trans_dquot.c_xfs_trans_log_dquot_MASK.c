
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int t_flags; } ;
typedef TYPE_3__ xfs_trans_t ;
struct TYPE_8__ {int li_flags; } ;
struct TYPE_9__ {TYPE_1__ qli_item; } ;
struct TYPE_11__ {TYPE_2__ q_logitem; } ;
typedef TYPE_4__ xfs_dquot_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(
 xfs_trans_t *VAR_2,
 xfs_dquot_t *VAR_3)
{
 FUNC_0(FUNC_1(VAR_3));

 VAR_2->t_flags |= VAR_1;
 FUNC_2(VAR_0, &VAR_3->q_logitem.qli_item.li_flags);
}
