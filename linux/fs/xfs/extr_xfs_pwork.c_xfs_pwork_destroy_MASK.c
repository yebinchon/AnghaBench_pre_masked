
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_pwork_ctl {int error; int * wq; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(
 struct xfs_pwork_ctl *VAR_0)
{
 FUNC_0(VAR_0->wq);
 VAR_0->wq = ((void*)0);
 return VAR_0->error;
}
