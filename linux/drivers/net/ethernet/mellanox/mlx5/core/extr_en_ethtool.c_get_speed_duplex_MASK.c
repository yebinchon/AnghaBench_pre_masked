
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int mdev; } ;
struct TYPE_2__ {int duplex; scalar_t__ speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
        u32 VAR_4, bool VAR_5,
        struct ethtool_link_ksettings *VAR_6)
{
 struct mlx5e_priv *VAR_7 = FUNC_1(VAR_3);
 u32 VAR_8 = VAR_2;
 u8 VAR_9 = VAR_1;

 if (!FUNC_2(VAR_3))
  goto out;

 VAR_8 = FUNC_0(VAR_7->mdev, VAR_4, VAR_5);
 if (!VAR_8) {
  VAR_8 = VAR_2;
  goto out;
 }

 VAR_9 = VAR_0;

out:
 VAR_6->base.speed = VAR_8;
 VAR_6->base.duplex = VAR_9;
}
