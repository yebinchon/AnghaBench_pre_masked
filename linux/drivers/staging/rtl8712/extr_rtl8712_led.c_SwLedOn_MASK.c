
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct _adapter {scalar_t__ driver_stopped; scalar_t__ surprise_removed; } ;
struct LED_871x {int LedPin; int bLedOn; } ;


 int VAR_0 ;



 int FUNC_0 (struct _adapter*,int ) ;
 int FUNC_1 (struct _adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct _adapter *VAR_1, struct LED_871x *VAR_2)
{
 u8 VAR_3;

 if (VAR_1->surprise_removed || VAR_1->driver_stopped)
  return;
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 switch (VAR_2->LedPin) {
 case 130:
  break;
 case 129:

  FUNC_1(VAR_1, VAR_0, VAR_3 & 0xf0);
  break;
 case 128:

  FUNC_1(VAR_1, VAR_0, VAR_3 & 0x0f);
  break;
 default:
  break;
 }
 VAR_2->bLedOn = 1;
}
