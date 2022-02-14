
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct _adapter {int pnetdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,union iwreq_data*,int *) ;

void FUNC_2(struct _adapter *VAR_2)
{
 union iwreq_data VAR_3;

 VAR_3.ap_addr.sa_family = VAR_0;
 FUNC_0(VAR_3.ap_addr.sa_data);
 FUNC_1(VAR_2->pnetdev, VAR_1, &VAR_3, ((void*)0));
}
