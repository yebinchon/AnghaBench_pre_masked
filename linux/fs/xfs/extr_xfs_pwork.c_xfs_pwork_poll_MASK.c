
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_pwork_ctl {int nr_work; int poll_wait; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int,int ) ;

void
FUNC_3(
 struct xfs_pwork_ctl *VAR_1)
{
 while (FUNC_2(VAR_1->poll_wait,
    FUNC_0(&VAR_1->nr_work) == 0, VAR_0) == 0)
  FUNC_1();
}
