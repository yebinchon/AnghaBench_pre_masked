
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hal_data_8188e {void* CurrentChannel; } ;
struct adapter {int bSurpriseRemoved; int bDriverStopped; struct hal_data_8188e* HalData; } ;


 int FUNC_0 (struct adapter*,void*) ;

void FUNC_1(struct adapter *VAR_0, u8 VAR_1)
{
 struct hal_data_8188e *VAR_2 = VAR_0->HalData;
 u8 VAR_3 = VAR_2->CurrentChannel;

 if (VAR_1 == 0)
  VAR_1 = 1;

 VAR_2->CurrentChannel = VAR_1;

 if ((!VAR_0->bDriverStopped) && (!VAR_0->bSurpriseRemoved))
  FUNC_0(VAR_0, VAR_1);
 else
  VAR_2->CurrentChannel = VAR_3;
}
