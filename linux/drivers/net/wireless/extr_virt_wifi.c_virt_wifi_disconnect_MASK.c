
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wiphy {int dummy; } ;
struct virt_wifi_netdev_priv {int is_connected; scalar_t__ being_deleted; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int *,int ,int,int ) ;
 struct virt_wifi_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct wiphy*,char*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_2, struct net_device *VAR_3,
    u16 VAR_4)
{
 struct virt_wifi_netdev_priv *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->being_deleted)
  return -VAR_0;

 FUNC_4(VAR_2, "disconnect\n");
 FUNC_3(VAR_3);

 FUNC_0(VAR_3, VAR_4, ((void*)0), 0, 1, VAR_1);
 VAR_5->is_connected = 0;
 FUNC_2(VAR_3);

 return 0;
}
