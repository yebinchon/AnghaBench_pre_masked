
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct wireless_dev {int netdev; } ;
struct wiphy {int dummy; } ;
struct TYPE_2__ {scalar_t__ listen_cookie; } ;
struct wilc_priv {TYPE_1__ remain_on_ch_params; } ;
struct wilc_vif {struct wilc_priv priv; } ;


 int VAR_0 ;
 struct wilc_vif* FUNC_0 (int ) ;
 int FUNC_1 (struct wilc_vif*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1,
        struct wireless_dev *VAR_2,
        u64 VAR_3)
{
 struct wilc_vif *VAR_4 = FUNC_0(VAR_2->netdev);
 struct wilc_priv *VAR_5 = &VAR_4->priv;

 if (VAR_3 != VAR_5->remain_on_ch_params.listen_cookie)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_3);
}
