
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_priv {int LedStrategy; int bRegUseLed; } ;
struct _adapter {struct led_priv ledpriv; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;
 int FUNC_0 (struct _adapter*,int) ;
 int FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,int) ;
 int FUNC_3 (struct _adapter*,int) ;
 int FUNC_4 (struct _adapter*,int) ;
 int FUNC_5 (struct _adapter*,int) ;

void FUNC_6(struct _adapter *VAR_0, enum LED_CTL_MODE VAR_1)
{
 struct led_priv *VAR_2 = &VAR_0->ledpriv;

 if (!VAR_2->bRegUseLed)
  return;
 switch (VAR_2->LedStrategy) {
 case 134:
  break;
 case 133:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 132:
  FUNC_1(VAR_0, VAR_1);
  break;
 case 131:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 130:
  FUNC_3(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_4(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_5(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
