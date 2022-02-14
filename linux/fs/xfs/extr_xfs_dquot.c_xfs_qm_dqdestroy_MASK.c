
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int li_lv_shadow; } ;
struct TYPE_7__ {TYPE_1__ qli_item; } ;
struct TYPE_8__ {int q_mount; int q_qlock; TYPE_2__ q_logitem; int q_lru; } ;
typedef TYPE_3__ xfs_dquot_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_6(
 xfs_dquot_t *VAR_2)
{
 FUNC_0(FUNC_4(&VAR_2->q_lru));

 FUNC_2(VAR_2->q_logitem.qli_item.li_lv_shadow);
 FUNC_5(&VAR_2->q_qlock);

 FUNC_1(VAR_2->q_mount, VAR_1);
 FUNC_3(VAR_0, VAR_2);
}
