
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;
struct LED_871x {int bLedOn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;

void FUNC_3(struct adapter *VAR_2, struct LED_871x *VAR_3)
{
 u8 VAR_4;

 if (VAR_2->bSurpriseRemoved || VAR_2->bDriverStopped)
  goto exit;

 VAR_4 = FUNC_1(VAR_2, VAR_0);


 VAR_4 &= 0x90;
 FUNC_2(VAR_2, VAR_0, (VAR_4 | FUNC_0(3)));
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_4 &= 0xFE;
 FUNC_2(VAR_2, VAR_1, VAR_4);
exit:
 VAR_3->bLedOn = 0;
}
