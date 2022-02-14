
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wil6210_vif {int ap_isolate; int mid; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct bss_parameters {int ap_isolate; } ;


 struct wil6210_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_priv*,char*,int ,int ,int ) ;
 struct wil6210_priv* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
       struct net_device *VAR_1,
       struct bss_parameters *VAR_2)
{
 struct wil6210_priv *VAR_3 = FUNC_2(VAR_0);
 struct wil6210_vif *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2->ap_isolate >= 0) {
  FUNC_1(VAR_3, "change_bss: ap_isolate MID %d, %d => %d\n",
        VAR_4->mid, VAR_4->ap_isolate, VAR_2->ap_isolate);
  VAR_4->ap_isolate = VAR_2->ap_isolate;
 }

 return 0;
}
