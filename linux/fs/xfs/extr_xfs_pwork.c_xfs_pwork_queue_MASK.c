
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_pwork_ctl {int wq; int nr_work; } ;
struct xfs_pwork {int work; struct xfs_pwork_ctl* pctl; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

void
FUNC_3(
 struct xfs_pwork_ctl *VAR_1,
 struct xfs_pwork *VAR_2)
{
 FUNC_0(&VAR_2->work, VAR_0);
 VAR_2->pctl = VAR_1;
 FUNC_1(&VAR_1->nr_work);
 FUNC_2(VAR_1->wq, &VAR_2->work);
}
