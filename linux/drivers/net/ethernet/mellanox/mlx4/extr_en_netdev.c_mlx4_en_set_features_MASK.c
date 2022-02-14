
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int hwtstamp_config; int port; TYPE_1__* mdev; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct net_device*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlx4_en_priv*,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,int) ;
 struct mlx4_en_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6,
  netdev_features_t VAR_7)
{
 struct mlx4_en_priv *VAR_8 = FUNC_5(VAR_6);
 bool VAR_9 = 0;
 int VAR_10 = 0;

 if (FUNC_0(VAR_6, VAR_7, VAR_5)) {
  FUNC_1(VAR_8, "Turn %s RX-FCS\n",
   (VAR_7 & VAR_5) ? "ON" : "OFF");
  VAR_9 = 1;
 }

 if (FUNC_0(VAR_6, VAR_7, VAR_4)) {
  u8 VAR_11 = (VAR_7 & VAR_4) ? 1 : 0;

  FUNC_1(VAR_8, "Turn %s RX-ALL\n",
   VAR_11 ? "ON" : "OFF");
  VAR_10 = FUNC_2(VAR_8->mdev->dev,
           VAR_8->port, VAR_11);
  if (VAR_10)
   return VAR_10;
 }

 if (FUNC_0(VAR_6, VAR_7, VAR_0)) {
  FUNC_1(VAR_8, "Turn %s RX vlan strip offload\n",
   (VAR_7 & VAR_0) ? "ON" : "OFF");
  VAR_9 = 1;
 }

 if (FUNC_0(VAR_6, VAR_7, VAR_1))
  FUNC_1(VAR_8, "Turn %s TX vlan strip offload\n",
   (VAR_7 & VAR_1) ? "ON" : "OFF");

 if (FUNC_0(VAR_6, VAR_7, VAR_2))
  FUNC_1(VAR_8, "Turn %s TX S-VLAN strip offload\n",
   (VAR_7 & VAR_2) ? "ON" : "OFF");

 if (FUNC_0(VAR_6, VAR_7, VAR_3)) {
  FUNC_1(VAR_8, "Turn %s loopback\n",
   (VAR_7 & VAR_3) ? "ON" : "OFF");
  FUNC_4(VAR_6, VAR_7);
 }

 if (VAR_9) {
  VAR_10 = FUNC_3(VAR_6, VAR_8->hwtstamp_config,
        VAR_7);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
