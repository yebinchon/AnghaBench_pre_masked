
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct virt_wifi_netdev_priv {int is_connected; } ;
struct station_info {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct virt_wifi_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct wiphy*,struct net_device*,int ,struct station_info*) ;
 int FUNC_3 (struct wiphy*,char*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_2, struct net_device *VAR_3,
      int VAR_4, u8 *VAR_5, struct station_info *VAR_6)
{
 struct virt_wifi_netdev_priv *VAR_7 = FUNC_1(VAR_3);

 FUNC_3(VAR_2, "dump_station\n");

 if (VAR_4 != 0 || !VAR_7->is_connected)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_1);
 return FUNC_2(VAR_2, VAR_3, VAR_1, VAR_6);
}
