
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {TYPE_1__ mlme; } ;
struct ieee_param {TYPE_2__ u; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ieee_param *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct adapter *VAR_6 = (struct adapter *)FUNC_1(VAR_2);
 struct mlme_priv *VAR_7 = &(VAR_6->mlmepriv);

 if (FUNC_0(VAR_7, VAR_1) != 1)
  return -VAR_0;

 FUNC_2(VAR_6, VAR_3->u.mlme.command);

 return VAR_5;
}
