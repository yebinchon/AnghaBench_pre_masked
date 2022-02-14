
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int fw_state; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;
struct LED_871x {scalar_t__ BlinkingLedState; scalar_t__ BlinkTimes; int CurrLedState; int bLedBlinkInProgress; int BlinkTimer; scalar_t__ bLedOn; struct _adapter* padapter; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct _adapter*,struct LED_871x*) ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct LED_871x *VAR_10)
{
 struct _adapter *VAR_11 = VAR_10->padapter;
 struct mlme_priv *VAR_12 = &VAR_11->mlmepriv;
 u8 VAR_13 = 0;


 if (VAR_10->BlinkingLedState == VAR_4)
  FUNC_1(VAR_11, VAR_10);
 else
  FUNC_0(VAR_11, VAR_10);

 VAR_10->BlinkTimes--;
 switch (VAR_10->CurrLedState) {
 case 131:
  if (VAR_10->BlinkTimes == 0)
   VAR_13 = 1;
  break;
 case 129:
  if (FUNC_2(VAR_12, VAR_8) &&
      (VAR_12->fw_state & VAR_7))
   VAR_13 = 1;
  if (FUNC_2(VAR_12, VAR_8) &&
      ((VAR_12->fw_state & VAR_6) ||
      (VAR_12->fw_state & VAR_5)))
   VAR_13 = 1;
  else if (VAR_10->BlinkTimes == 0)
   VAR_13 = 1;
  break;
 case 128:
  if (VAR_10->BlinkTimes == 0)
   VAR_13 = 1;
  break;
 default:
  VAR_13 = 1;
  break;
 }
 if (VAR_13) {
  if (FUNC_2(VAR_12, VAR_8) &&
      !VAR_10->bLedOn)
   FUNC_1(VAR_11, VAR_10);
  else if (FUNC_2(VAR_12, VAR_8) && VAR_10->bLedOn)
   FUNC_0(VAR_11, VAR_10);
  VAR_10->BlinkTimes = 0;
  VAR_10->bLedBlinkInProgress = 0;
 } else {

  if (VAR_10->BlinkingLedState == VAR_4)
   VAR_10->BlinkingLedState = VAR_3;
  else
   VAR_10->BlinkingLedState = VAR_4;


  switch (VAR_10->CurrLedState) {
  case 131:
   FUNC_3(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_4(VAR_1));
   break;
  case 130:
  case 129:
   FUNC_3(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_4(VAR_2));
   break;
  case 128:
   FUNC_3(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_4(VAR_0));
   break;
  default:
   FUNC_3(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_4(VAR_2));
   break;
  }
 }
}
