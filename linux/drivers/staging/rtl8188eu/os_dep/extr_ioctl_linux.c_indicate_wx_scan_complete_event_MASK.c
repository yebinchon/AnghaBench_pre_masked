
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct adapter {int pnetdev; } ;


 int VAR_0 ;
 int FUNC_0 (union iwreq_data*,int ,int) ;
 int FUNC_1 (int ,int ,union iwreq_data*,int *) ;

void FUNC_2(struct adapter *VAR_1)
{
 union iwreq_data VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(union iwreq_data));
 FUNC_1(VAR_1->pnetdev, VAR_0, &VAR_2, ((void*)0));
}
