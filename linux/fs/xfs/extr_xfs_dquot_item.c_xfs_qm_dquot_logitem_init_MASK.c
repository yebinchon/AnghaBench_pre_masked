
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dq_logitem {struct xfs_dquot* qli_dquot; int qli_item; } ;
struct xfs_dquot {int q_mount; struct xfs_dq_logitem q_logitem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int *) ;

void
FUNC_1(
 struct xfs_dquot *VAR_2)
{
 struct xfs_dq_logitem *VAR_3 = &VAR_2->q_logitem;

 FUNC_0(VAR_2->q_mount, &VAR_3->qli_item, VAR_0,
     &VAR_1);
 VAR_3->qli_dquot = VAR_2;
}
