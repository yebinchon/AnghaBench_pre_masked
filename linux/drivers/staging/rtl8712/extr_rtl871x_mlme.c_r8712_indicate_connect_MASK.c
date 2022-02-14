
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlme_priv {int to_join; int dhcp_timer; } ;
struct TYPE_4__ {scalar_t__ power_mgnt; } ;
struct TYPE_3__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct _adapter {TYPE_2__ registrypriv; TYPE_1__ ledpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct _adapter*) ;
 int FUNC_3 (struct mlme_priv*,int ) ;
 int FUNC_4 (struct _adapter*,int ) ;

void FUNC_5(struct _adapter *VAR_4)
{
 struct mlme_priv *VAR_5 = &VAR_4->mlmepriv;

 VAR_5->to_join = 0;
 FUNC_3(VAR_5, VAR_2);
 VAR_4->ledpriv.LedControlHandler(VAR_4, VAR_0);
 FUNC_2(VAR_4);
 if (VAR_4->registrypriv.power_mgnt > VAR_1)
  FUNC_0(&VAR_5->dhcp_timer,
     VAR_3 + FUNC_1(60000));
}
