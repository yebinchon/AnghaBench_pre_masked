
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_3__ {int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
          enum ethtool_phys_id_state VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 struct mlx4_en_priv *VAR_7 = FUNC_1(VAR_3);
 struct mlx4_en_dev *VAR_8 = VAR_7->mdev;

 if (!(VAR_8->dev->caps.flags2 & VAR_1))
  return -VAR_0;

 switch (VAR_4) {
 case 129:
  VAR_6 = VAR_2;
  break;
 case 128:
  VAR_6 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_8->dev, VAR_7->port, VAR_6);
 return VAR_5;
}
