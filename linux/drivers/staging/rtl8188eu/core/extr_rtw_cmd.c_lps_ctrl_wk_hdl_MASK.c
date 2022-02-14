
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwrctrl_priv {int DelayLPSLastTimeStamp; int LpsIdleCount; } ;
struct mlme_priv {int dummy; } ;
struct adapter {struct pwrctrl_priv pwrctrlpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;






 int FUNC_0 (struct adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct adapter*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_5, u8 VAR_6)
{
 struct pwrctrl_priv *VAR_7 = &VAR_5->pwrctrlpriv;
 struct mlme_priv *VAR_8 = &VAR_5->mlmepriv;
 u8 VAR_9;

 if (FUNC_1(VAR_8, VAR_1) ||
     FUNC_1(VAR_8, VAR_2))
  return;

 switch (VAR_6) {
 case 129:
  if (FUNC_1(VAR_8, VAR_3)) {

   FUNC_0(VAR_5);
  }
  break;
 case 131:
  FUNC_0(VAR_5);
  break;
 case 133:
  VAR_9 = 1;

  VAR_5->pwrctrlpriv.LpsIdleCount = 0;
  FUNC_2(VAR_5, VAR_0, (u8 *)(&VAR_9));
  break;
 case 132:
  VAR_9 = 0;
  FUNC_0(VAR_5);
  FUNC_2(VAR_5, VAR_0, (u8 *)(&VAR_9));
  break;
 case 128:
  VAR_7->DelayLPSLastTimeStamp = VAR_4;
  FUNC_0(VAR_5);
  break;
 case 130:
  FUNC_0(VAR_5);
  break;
 default:
  break;
 }
}
