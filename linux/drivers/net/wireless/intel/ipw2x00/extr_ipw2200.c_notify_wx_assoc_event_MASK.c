
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct ipw_priv {int status; int net_dev; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_3(struct ipw_priv *VAR_4)
{
 union iwreq_data VAR_5;
 VAR_5.ap_addr.sa_family = VAR_0;
 if (VAR_4->status & VAR_3)
  FUNC_1(VAR_5.ap_addr.sa_data, VAR_4->bssid, VAR_1);
 else
  FUNC_0(VAR_5.ap_addr.sa_data);
 FUNC_2(VAR_4->net_dev, VAR_2, &VAR_5, ((void*)0));
}
