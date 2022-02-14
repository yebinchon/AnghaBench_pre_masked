
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pwrctrl_priv {unsigned long DelayLPSLastTimeStamp; scalar_t__ bInSuspend; scalar_t__ wowlan_ap_mode; scalar_t__ wowlan_mode; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ dot11AuthAlgrthm; int binstallGrpkey; } ;
struct adapter {TYPE_1__ securitypriv; struct mlme_priv mlmepriv; } ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int) ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;

__attribute__((used)) static u8 FUNC_5(struct adapter *VAR_9)
{
 unsigned long VAR_10, VAR_11;
 struct pwrctrl_priv *VAR_12 = FUNC_1(VAR_9);
 struct mlme_priv *VAR_13 = &(VAR_9->mlmepriv);
 if (VAR_12->bInSuspend)
  return 0;


 VAR_10 = VAR_8;

 VAR_11 = VAR_10 - VAR_12->DelayLPSLastTimeStamp;

 if (VAR_11 < VAR_0)
  return 0;

 if (FUNC_2(VAR_13, VAR_4)
  || FUNC_2(VAR_13, VAR_5|VAR_6)
  || FUNC_2(VAR_13, VAR_3)
  || FUNC_2(VAR_13, VAR_1|VAR_2)
  || FUNC_4(VAR_9)
 )
  return 0;

 if ((VAR_9->securitypriv.dot11AuthAlgrthm == VAR_7) && !(VAR_9->securitypriv.binstallGrpkey)) {
  FUNC_0("Group handshake still in progress !!!\n");
  return 0;
 }

 if (!FUNC_3(VAR_9))
  return 0;

 return 1;
}
