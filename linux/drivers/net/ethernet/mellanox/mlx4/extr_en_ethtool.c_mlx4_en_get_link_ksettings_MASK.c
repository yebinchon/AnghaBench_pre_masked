
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {int flags; int link_speed; } ;
struct mlx4_en_priv {TYPE_3__ port_state; TYPE_5__* mdev; int port; } ;
struct TYPE_9__ {int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_4__ base; } ;
struct TYPE_10__ {TYPE_2__* dev; } ;
struct TYPE_6__ {int flags2; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int,int) ;
 int FUNC_1 (struct net_device*,struct ethtool_link_ksettings*) ;
 int FUNC_2 (struct net_device*,struct ethtool_link_ksettings*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_9,
      struct ethtool_link_ksettings *VAR_10)
{
 struct mlx4_en_priv *VAR_11 = FUNC_4(VAR_9);
 int VAR_12 = -VAR_3;

 if (FUNC_3(VAR_11->mdev, VAR_11->port))
  return -VAR_4;

 FUNC_0(VAR_0, VAR_11, "query port state.flags ANC(%x) ANE(%x)\n",
        VAR_11->port_state.flags & VAR_6,
        VAR_11->port_state.flags & VAR_7);

 if (VAR_11->mdev->dev->caps.flags2 & VAR_5)
  VAR_12 = FUNC_2(VAR_9, VAR_10);
 if (VAR_12)
  FUNC_1(VAR_9, VAR_10);

 if (FUNC_5(VAR_9)) {
  VAR_10->base.speed = VAR_11->port_state.link_speed;
  VAR_10->base.duplex = VAR_1;
 } else {
  VAR_10->base.speed = VAR_8;
  VAR_10->base.duplex = VAR_2;
 }
 return 0;
}
