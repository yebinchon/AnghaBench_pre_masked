
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;
struct station_info {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct wil6210_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_vif*,int,struct station_info*) ;
 int FUNC_2 (struct wil6210_priv*,int) ;
 int FUNC_3 (struct wil6210_priv*,char*,int const*,int,int ) ;
 int FUNC_4 (struct wil6210_priv*,int ,int const*) ;
 struct wil6210_priv* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_1,
        struct net_device *VAR_2,
        const u8 *VAR_3, struct station_info *VAR_4)
{
 struct wil6210_vif *VAR_5 = FUNC_0(VAR_2);
 struct wil6210_priv *VAR_6 = FUNC_5(VAR_1);
 int VAR_7;

 int VAR_8 = FUNC_4(VAR_6, VAR_5->mid, VAR_3);

 FUNC_3(VAR_6, "get_station: %pM CID %d MID %d\n", VAR_3, VAR_8,
       VAR_5->mid);
 if (!FUNC_2(VAR_6, VAR_8))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, VAR_8, VAR_4);

 return VAR_7;
}
