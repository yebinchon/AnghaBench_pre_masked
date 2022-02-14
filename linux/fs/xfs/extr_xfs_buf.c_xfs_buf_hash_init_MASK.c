
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {int pag_buf_hash; int pag_buf_lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

int
FUNC_2(
 struct xfs_perag *VAR_1)
{
 FUNC_1(&VAR_1->pag_buf_lock);
 return FUNC_0(&VAR_1->pag_buf_hash, &VAR_0);
}
