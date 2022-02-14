
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int features; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int config ;
struct TYPE_3__ {int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 scalar_t__ FUNC_2 (struct net_device*,struct hwtstamp_config,int ) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, struct ifreq *VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_3(VAR_4);
 struct mlx4_en_dev *VAR_7 = VAR_6->mdev;
 struct hwtstamp_config VAR_8;

 if (FUNC_0(&VAR_8, VAR_5->ifr_data, sizeof(VAR_8)))
  return -VAR_0;


 if (VAR_8.flags)
  return -VAR_1;


 if (!(VAR_7->dev->caps.flags2 & VAR_3))
  return -VAR_1;


 switch (VAR_8.tx_type) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_2;
 }


 switch (VAR_8.rx_filter) {
 case 144:
  break;
 case 145:
 case 130:
 case 141:
 case 140:
 case 142:
 case 133:
 case 132:
 case 134:
 case 136:
 case 135:
 case 137:
 case 138:
 case 131:
 case 139:
 case 143:
  VAR_8.rx_filter = 145;
  break;
 default:
  return -VAR_2;
 }

 if (FUNC_2(VAR_4, VAR_8, VAR_4->features)) {
  VAR_8.tx_type = 129;
  VAR_8.rx_filter = 144;
 }

 return FUNC_1(VAR_5->ifr_data, &VAR_8,
       sizeof(VAR_8)) ? -VAR_0 : 0;
}
