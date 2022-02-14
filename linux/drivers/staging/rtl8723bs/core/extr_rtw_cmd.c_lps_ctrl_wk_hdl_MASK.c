
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwrctrl_priv {int DelayLPSLastTimeStamp; int LpsIdleCount; } ;
struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;







 int FUNC_0 (struct adapter*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (struct adapter*,int) ;
 int FUNC_4 (struct adapter*,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*,int ,int*) ;

void FUNC_7(struct adapter *VAR_6, u8 VAR_7)
{
 struct pwrctrl_priv *VAR_8 = FUNC_1(VAR_6);
 struct mlme_priv *VAR_9 = &(VAR_6->mlmepriv);
 u8 VAR_10;

 if ((FUNC_2(VAR_9, VAR_2) == 1)
  || (FUNC_2(VAR_9, VAR_3) == 1)) {
  return;
 }

 switch (VAR_7) {
 case 130:

  FUNC_3(VAR_6, 1);

  if (FUNC_2(VAR_9, VAR_4) == 1) {

   FUNC_0(VAR_6, "LPS_CTRL_SCAN");
  }
  break;
 case 132:

  FUNC_0(VAR_6, "LPS_CTRL_JOINBSS");
  break;
 case 134:

  VAR_10 = 1;

  VAR_8->LpsIdleCount = 0;
  FUNC_6(VAR_6, VAR_0, (u8 *)(&VAR_10));
  FUNC_5(VAR_6, VAR_10);
  break;
 case 133:

  VAR_10 = 0;
  FUNC_5(VAR_6, VAR_10);
  FUNC_0(VAR_6, "LPS_CTRL_DISCONNECT");
  FUNC_6(VAR_6, VAR_0, (u8 *)(&VAR_10));
  break;
 case 129:

  VAR_8->DelayLPSLastTimeStamp = VAR_5;
  FUNC_4(VAR_6, VAR_1);
  FUNC_0(VAR_6, "LPS_CTRL_SPECIAL_PACKET");
  break;
 case 131:

  FUNC_0(VAR_6, "LPS_CTRL_LEAVE");
  break;
 case 128:
  FUNC_0(VAR_6, "LPS_CTRL_TRAFFIC_BUSY");
 default:
  break;
 }
}
