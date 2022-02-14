
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_ptys_reg {int flags; int eth_proto_admin; int eth_proto_cap; int proto_mask; int local_port; } ;
struct mlx4_en_priv {TYPE_4__* mdev; int port; scalar_t__ port_up; } ;
struct TYPE_8__ {int speed; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct TYPE_6__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_1__ link_modes; } ;
typedef int ptys_reg ;
typedef int __be32 ;
struct TYPE_7__ {int flags2; } ;
struct TYPE_10__ {TYPE_2__ caps; } ;
struct TYPE_9__ {int state_lock; TYPE_5__* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct mlx4_en_priv*,char*,int const,...) ;
 int FUNC_4 (struct mlx4_en_priv*,char*,int ) ;
 int FUNC_5 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct mlx4_ptys_reg*,int ,int) ;
 int FUNC_8 (TYPE_5__*,int ,struct mlx4_ptys_reg*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct mlx4_en_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct mlx4_en_priv*,int const,int ) ;

__attribute__((used)) static int
FUNC_15(struct net_device *VAR_15,
      const struct ethtool_link_ksettings *VAR_16)
{
 struct mlx4_en_priv *VAR_17 = FUNC_13(VAR_15);
 struct mlx4_ptys_reg VAR_18;
 __be32 VAR_19;
 u8 VAR_20;
 int VAR_21;

 u32 VAR_22 = FUNC_6(
  VAR_16->link_modes.advertising, VAR_0);
 const int VAR_23 = VAR_16->base.speed;

 FUNC_3(VAR_3, VAR_17,
        "Set Speed=%d adv={%*pbl} autoneg=%d duplex=%d\n",
        VAR_23, VAR_14,
        VAR_16->link_modes.advertising,
        VAR_16->base.autoneg,
        VAR_16->base.duplex);

 if (!(VAR_17->mdev->dev->caps.flags2 &
       VAR_10) ||
     (VAR_16->base.duplex == VAR_4))
  return -VAR_5;

 FUNC_7(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.local_port = VAR_17->port;
 VAR_18.proto_mask = VAR_13;
 VAR_21 = FUNC_8(VAR_17->mdev->dev,
       VAR_8, &VAR_18);
 if (VAR_21) {
  FUNC_5(VAR_17, "Failed to QUERY mlx4_ACCESS_PTYS_REG status(%x)\n",
   VAR_21);
  return 0;
 }

 VAR_20 = VAR_18.flags & VAR_11 ?
    VAR_1 : VAR_2;

 if (VAR_16->base.autoneg == VAR_1) {
  VAR_19 = FUNC_14(VAR_17, VAR_23,
         VAR_18.eth_proto_cap);
  if ((FUNC_1(VAR_19) &
       (FUNC_0(VAR_6) |
        FUNC_0(VAR_7))) &&
      (VAR_18.flags & VAR_12))
   VAR_18.flags |= VAR_11;
 } else {
  VAR_19 = FUNC_2(VAR_22);
  VAR_18.flags &= ~VAR_11;
 }

 VAR_19 &= VAR_18.eth_proto_cap;
 if (!VAR_19) {
  FUNC_5(VAR_17, "Not supported link mode(s) requested, check supported link modes.\n");
  return -VAR_5;
 }

 if ((VAR_19 == VAR_18.eth_proto_admin) &&
     ((VAR_18.flags & VAR_12) &&
      (VAR_16->base.autoneg == VAR_20)))
  return 0;

 FUNC_3(VAR_3, VAR_17, "mlx4_ACCESS_PTYS_REG SET: ptys_reg.eth_proto_admin = 0x%x\n",
        FUNC_1(VAR_19));

 VAR_18.eth_proto_admin = VAR_19;
 VAR_21 = FUNC_8(VAR_17->mdev->dev, VAR_9,
       &VAR_18);
 if (VAR_21) {
  FUNC_5(VAR_17, "Failed to write mlx4_ACCESS_PTYS_REG eth_proto_admin(0x%x) status(0x%x)",
   FUNC_1(VAR_18.eth_proto_admin), VAR_21);
  return VAR_21;
 }

 FUNC_11(&VAR_17->mdev->state_lock);
 if (VAR_17->port_up) {
  FUNC_5(VAR_17, "Port link mode changed, restarting port...\n");
  FUNC_10(VAR_15, 1);
  if (FUNC_9(VAR_15))
   FUNC_4(VAR_17, "Failed restarting port %d\n", VAR_17->port);
 }
 FUNC_12(&VAR_17->mdev->state_lock);
 return 0;
}
