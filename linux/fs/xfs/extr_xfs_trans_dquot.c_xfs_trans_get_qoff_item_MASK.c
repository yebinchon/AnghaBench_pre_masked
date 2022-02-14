
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
struct TYPE_10__ {int qql_item; } ;
typedef TYPE_2__ xfs_qoff_logitem_t ;
typedef int uint ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

xfs_qoff_logitem_t *
FUNC_3(
 xfs_trans_t *VAR_0,
 xfs_qoff_logitem_t *VAR_1,
 uint VAR_2)
{
 xfs_qoff_logitem_t *VAR_3;

 FUNC_0(VAR_0 != ((void*)0));

 VAR_3 = FUNC_1(VAR_0->t_mountp, VAR_1, VAR_2);
 FUNC_0(VAR_3 != ((void*)0));




 FUNC_2(VAR_0, &VAR_3->qql_item);
 return VAR_3;
}
