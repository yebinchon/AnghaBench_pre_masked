
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sreset_priv {int wifi_error_status; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct sreset_priv srestpriv; } ;


 int VAR_0 ;

void FUNC_0(struct adapter *VAR_1)
{
 struct sreset_priv *VAR_2 = &VAR_1->HalData->srestpriv;

 VAR_2->wifi_error_status = VAR_0;
}
