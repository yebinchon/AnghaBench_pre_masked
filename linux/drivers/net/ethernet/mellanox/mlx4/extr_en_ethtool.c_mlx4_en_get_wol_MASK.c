
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; TYPE_1__* mdev; } ;
struct mlx4_caps {int flags; scalar_t__* wol_port; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;
struct TYPE_4__ {struct mlx4_caps caps; } ;
struct TYPE_3__ {TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (TYPE_2__*,int*,size_t) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5,
       struct ethtool_wolinfo *VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_2(VAR_5);
 struct mlx4_caps *VAR_8 = &VAR_7->mdev->dev->caps;
 int VAR_9 = 0;
 u64 VAR_10 = 0;
 u64 VAR_11;

 if ((VAR_7->port < 1) || (VAR_7->port > 2)) {
  FUNC_0(VAR_7, "Failed to get WoL information\n");
  return;
 }

 VAR_11 = (VAR_7->port == 1) ? VAR_0 :
  VAR_1;

 if (!(VAR_8->flags & VAR_11)) {
  VAR_6->supported = 0;
  VAR_6->wolopts = 0;
  return;
 }

 if (VAR_8->wol_port[VAR_7->port])
  VAR_6->supported = VAR_4;
 else
  VAR_6->supported = 0;

 VAR_9 = FUNC_1(VAR_7->mdev->dev, &VAR_10, VAR_7->port);
 if (VAR_9) {
  FUNC_0(VAR_7, "Failed to get WoL information\n");
  return;
 }

 if ((VAR_10 & VAR_2) && (VAR_10 & VAR_3))
  VAR_6->wolopts = VAR_4;
 else
  VAR_6->wolopts = 0;
}
