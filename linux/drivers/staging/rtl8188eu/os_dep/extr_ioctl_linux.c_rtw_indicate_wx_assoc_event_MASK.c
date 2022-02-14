
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct TYPE_5__ {int MacAddress; } ;
struct TYPE_6__ {TYPE_2__ network; } ;
struct mlme_priv {TYPE_3__ cur_network; } ;
struct adapter {int pnetdev; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (union iwreq_data*,int ,int) ;
 int FUNC_3 (int ,int ,union iwreq_data*,int *) ;

void FUNC_4(struct adapter *VAR_4)
{
 union iwreq_data VAR_5;
 struct mlme_priv *VAR_6 = &VAR_4->mlmepriv;

 FUNC_2(&VAR_5, 0, sizeof(union iwreq_data));

 VAR_5.ap_addr.sa_family = VAR_0;

 FUNC_1(VAR_5.ap_addr.sa_data, VAR_6->cur_network.network.MacAddress, VAR_1);

 FUNC_0(VAR_3, "assoc success\n");
 FUNC_3(VAR_4->pnetdev, VAR_2, &VAR_5, ((void*)0));
}
