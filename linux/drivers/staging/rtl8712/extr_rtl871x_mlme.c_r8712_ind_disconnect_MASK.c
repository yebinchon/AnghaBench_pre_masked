
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlme_priv {int dhcp_timer; } ;
struct TYPE_6__ {scalar_t__ power_mgnt; int smart_ps; } ;
struct TYPE_5__ {scalar_t__ pwr_mode; } ;
struct TYPE_4__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct _adapter {TYPE_3__ registrypriv; TYPE_2__ pwrctrlpriv; TYPE_1__ ledpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (struct _adapter*,scalar_t__,int ) ;
 int FUNC_5 (struct _adapter*,int ) ;

void FUNC_6(struct _adapter *VAR_2)
{
 struct mlme_priv *VAR_3 = &VAR_2->mlmepriv;

 if (FUNC_1(VAR_3, VAR_1)) {
  FUNC_0(VAR_3, VAR_1);
  VAR_2->ledpriv.LedControlHandler(VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
 if (VAR_2->pwrctrlpriv.pwr_mode !=
     VAR_2->registrypriv.power_mgnt) {
  FUNC_2(&VAR_3->dhcp_timer);
  FUNC_4(VAR_2, VAR_2->registrypriv.power_mgnt,
      VAR_2->registrypriv.smart_ps);
 }
}
