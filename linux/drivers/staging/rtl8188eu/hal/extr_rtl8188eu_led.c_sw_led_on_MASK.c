
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;
struct LED_871x {int bLedOn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;

void FUNC_3(struct adapter *VAR_1, struct LED_871x *VAR_2)
{
 u8 VAR_3;

 if (VAR_1->bSurpriseRemoved || VAR_1->bDriverStopped)
  return;
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_2(VAR_1, VAR_0, (VAR_3 & 0xf0) | FUNC_0(5) | FUNC_0(6));
 VAR_2->bLedOn = 1;
}
