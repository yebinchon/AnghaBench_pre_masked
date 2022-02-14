
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct adapter {TYPE_2__* HalData; } ;
struct TYPE_3__ {int wifi_error_status; } ;
struct TYPE_4__ {TYPE_1__ srestpriv; } ;



void FUNC_0(struct adapter *VAR_0, u32 VAR_1)
{
 VAR_0->HalData->srestpriv.wifi_error_status = VAR_1;
}
