
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {TYPE_1__* sta; } ;
struct station_info {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct wil6210_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wil6210_vif*,int,struct station_info*) ;
 int FUNC_3 (struct wil6210_priv*,int) ;
 int FUNC_4 (struct wil6210_priv*,char*,int *,int,int ) ;
 int FUNC_5 (struct wil6210_priv*,int ,int) ;
 struct wil6210_priv* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_1,
         struct net_device *VAR_2, int VAR_3,
         u8 *VAR_4, struct station_info *VAR_5)
{
 struct wil6210_vif *VAR_6 = FUNC_1(VAR_2);
 struct wil6210_priv *VAR_7 = FUNC_6(VAR_1);
 int VAR_8;
 int VAR_9 = FUNC_5(VAR_7, VAR_6->mid, VAR_3);

 if (!FUNC_3(VAR_7, VAR_9))
  return -VAR_0;

 FUNC_0(VAR_4, VAR_7->sta[VAR_9].addr);
 FUNC_4(VAR_7, "dump_station: %pM CID %d MID %d\n", VAR_4, VAR_9,
       VAR_6->mid);

 VAR_8 = FUNC_2(VAR_6, VAR_9, VAR_5);

 return VAR_8;
}
