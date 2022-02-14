
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wiphy {int dummy; } ;
struct wil6210_vif {scalar_t__ mid; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct wil6210_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_priv*,char*,int) ;
 struct wil6210_priv* FUNC_2 (struct wiphy*) ;
 int FUNC_3 (struct wil6210_priv*) ;

__attribute__((used)) static int
FUNC_4(struct wiphy *VAR_1, struct net_device *VAR_2,
        u64 VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_2(VAR_1);
 struct wil6210_vif *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (VAR_5->mid != 0)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4);



 FUNC_1(VAR_4, "sched scan stopped (%d)\n", VAR_6);

 return 0;
}
