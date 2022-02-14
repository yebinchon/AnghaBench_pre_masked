
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int mutex; } ;
struct station_del_parameters {int reason_code; int mac; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wil6210_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wil6210_vif*,int ,int ) ;
 int FUNC_4 (struct wil6210_priv*,char*,int ,int ,int ) ;
 struct wil6210_priv* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_0,
        struct net_device *VAR_1,
        struct station_del_parameters *VAR_2)
{
 struct wil6210_vif *VAR_3 = FUNC_2(VAR_1);
 struct wil6210_priv *VAR_4 = FUNC_5(VAR_0);

 FUNC_4(VAR_4, "del_station: %pM, reason=%d mid=%d\n",
       VAR_2->mac, VAR_2->reason_code, VAR_3->mid);

 FUNC_0(&VAR_4->mutex);
 FUNC_3(VAR_3, VAR_2->mac, VAR_2->reason_code);
 FUNC_1(&VAR_4->mutex);

 return 0;
}
