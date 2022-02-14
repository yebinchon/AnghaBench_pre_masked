
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct adapter {int pnetdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union iwreq_data*,int ,int) ;
 int FUNC_3 (int ,int ,union iwreq_data*,int *) ;

void FUNC_4(struct adapter *VAR_3)
{
 union iwreq_data VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(union iwreq_data));

 VAR_4.ap_addr.sa_family = VAR_0;
 FUNC_1(VAR_4.ap_addr.sa_data);

 FUNC_0(VAR_2, "indicate disassoc\n");
 FUNC_3(VAR_3->pnetdev, VAR_1, &VAR_4, ((void*)0));
}
