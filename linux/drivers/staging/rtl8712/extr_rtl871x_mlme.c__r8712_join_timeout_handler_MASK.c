
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlme_priv {int to_join; int lock; } ;
struct TYPE_4__ {scalar_t__ power_mgnt; int smart_ps; } ;
struct TYPE_3__ {scalar_t__ pwr_mode; } ;
struct _adapter {TYPE_2__ registrypriv; TYPE_1__ pwrctrlpriv; scalar_t__ surprise_removed; scalar_t__ driver_stopped; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (struct _adapter*) ;
 int FUNC_3 (struct _adapter*,scalar_t__,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct _adapter *VAR_2)
{
 unsigned long VAR_3;
 struct mlme_priv *VAR_4 = &VAR_2->mlmepriv;

 if (VAR_2->driver_stopped || VAR_2->surprise_removed)
  return;
 FUNC_4(&VAR_4->lock, VAR_3);
 FUNC_0(VAR_4, VAR_1);
 VAR_4->to_join = 0;
 if (FUNC_1(VAR_4, VAR_0)) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_4, VAR_0);
 }
 if (VAR_2->pwrctrlpriv.pwr_mode != VAR_2->registrypriv.power_mgnt) {
  FUNC_3(VAR_2, VAR_2->registrypriv.power_mgnt,
      VAR_2->registrypriv.smart_ps);
 }
 FUNC_5(&VAR_4->lock, VAR_3);
}
