
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (union iwreq_data*,int ,int) ;

void FUNC_2(struct adapter *VAR_1)
{
 union iwreq_data VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(union iwreq_data));

 VAR_2.ap_addr.sa_family = VAR_0;
 FUNC_0(VAR_2.ap_addr.sa_data);
}
