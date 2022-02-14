
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dquot {int q_pincount; int q_pinwait; int q_mount; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_dquot*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(
 struct xfs_dquot *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 if (FUNC_2(&VAR_0->q_pincount) == 0)
  return;




 FUNC_4(VAR_0->q_mount, 0);
 FUNC_3(VAR_0->q_pinwait, (FUNC_2(&VAR_0->q_pincount) == 0));
}
