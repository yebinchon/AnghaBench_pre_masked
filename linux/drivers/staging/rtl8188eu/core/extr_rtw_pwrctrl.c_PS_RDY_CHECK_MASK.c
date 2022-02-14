
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pwrctrl_priv {unsigned long DelayLPSLastTimeStamp; scalar_t__ bInSuspend; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ dot11AuthAlgrthm; int binstallGrpkey; } ;
struct adapter {TYPE_1__ securitypriv; struct mlme_priv mlmepriv; struct pwrctrl_priv pwrctrlpriv; } ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;

__attribute__((used)) static u8 FUNC_2(struct adapter *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 struct pwrctrl_priv *VAR_11 = &VAR_8->pwrctrlpriv;
 struct mlme_priv *VAR_12 = &(VAR_8->mlmepriv);

 VAR_9 = VAR_7;
 VAR_10 = VAR_9 - VAR_11->DelayLPSLastTimeStamp;

 if (VAR_10 < VAR_0)
  return 0;

 if ((!FUNC_1(VAR_12, VAR_4)) ||
     (FUNC_1(VAR_12, VAR_5)) ||
     (FUNC_1(VAR_12, VAR_3)) ||
     (FUNC_1(VAR_12, VAR_1)) ||
     (FUNC_1(VAR_12, VAR_2)))
  return 0;
 if (VAR_11->bInSuspend)
  return 0;
 if (VAR_8->securitypriv.dot11AuthAlgrthm == VAR_6 &&
     !VAR_8->securitypriv.binstallGrpkey) {
  FUNC_0("Group handshake still in progress !!!\n");
  return 0;
 }
 return 1;
}
