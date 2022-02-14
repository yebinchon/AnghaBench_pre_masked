
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;
struct station_parameters {int aid; int sta_flags_set; int sta_flags_mask; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wil6210_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_priv*,char*,int const*,int ,int ,int ,int ) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 struct wil6210_priv* FUNC_3 (struct wiphy*) ;
 int FUNC_4 (struct wil6210_vif*,int const*,int ) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_4,
        struct net_device *VAR_5,
        const u8 *VAR_6,
        struct station_parameters *VAR_7)
{
 struct wil6210_vif *VAR_8 = FUNC_0(VAR_5);
 struct wil6210_priv *VAR_9 = FUNC_3(VAR_4);

 FUNC_1(VAR_9, "add station %pM aid %d mid %d mask 0x%x set 0x%x\n",
       VAR_6, VAR_7->aid, VAR_8->mid,
       VAR_7->sta_flags_mask, VAR_7->sta_flags_set);

 if (!VAR_3) {
  FUNC_2(VAR_9, "not supported with AP SME enabled\n");
  return -VAR_1;
 }

 if (VAR_7->aid > VAR_2) {
  FUNC_2(VAR_9, "invalid aid\n");
  return -VAR_0;
 }

 return FUNC_4(VAR_8, VAR_6, VAR_7->aid);
}
