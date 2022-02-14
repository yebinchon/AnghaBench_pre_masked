
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct registry_priv {int wifi_spec; } ;
struct TYPE_3__ {int dynamic_chk_timer; } ;
struct adapter {TYPE_1__ mlmepriv; scalar_t__ net_closed; scalar_t__ bSurpriseRemoved; scalar_t__ bDriverStopped; int hw_init_completed; struct registry_priv registrypriv; } ;
struct TYPE_4__ {int dynamic_chk_timer; } ;


 struct adapter* VAR_0 ;
 struct adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;

void FUNC_5(struct timer_list *VAR_3)
{
 struct adapter *VAR_4 = FUNC_0(VAR_4, VAR_3,
          VAR_2.dynamic_chk_timer);
 struct registry_priv *VAR_5 = &VAR_4->registrypriv;

 if (!VAR_4)
  return;
 if (!VAR_4->hw_init_completed)
  goto exit;
 if ((VAR_4->bDriverStopped) || (VAR_4->bSurpriseRemoved))
  goto exit;
 if (VAR_4->net_closed)
  goto exit;
 FUNC_4(VAR_4);

 if (VAR_5->wifi_spec == 1) {

  FUNC_3(VAR_4);
 }
exit:
 FUNC_1(&VAR_4->mlmepriv.dynamic_chk_timer,
    VAR_1 + FUNC_2(2000));
}
