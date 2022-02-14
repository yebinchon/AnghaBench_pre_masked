
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_wifi_netdev_priv {int connect_requested_bss; int upperdev; int connect; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int ,int *,int ,int ,int ) ;
 struct virt_wifi_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct virt_wifi_netdev_priv *VAR_3 = FUNC_2(VAR_2);


 if (FUNC_0(&VAR_3->connect)) {

  FUNC_1(VAR_3->upperdev,
     VAR_3->connect_requested_bss, ((void*)0), 0,
     ((void*)0), 0,
     VAR_1,
     VAR_0);
 }
}
