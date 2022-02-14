
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct hns_nic_priv {int phy_led_val; struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_led_id ) (struct hnae_handle*,int ) ;} ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct hns_nic_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;
 int FUNC_4 (struct hnae_handle*,int ) ;
 int FUNC_5 (struct hnae_handle*,int ) ;
 int FUNC_6 (struct hnae_handle*,int ) ;
 int FUNC_7 (struct hnae_handle*,int ) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_11, enum ethtool_phys_id_state VAR_12)
{
 struct hns_nic_priv *VAR_13 = FUNC_1(VAR_11);
 struct hnae_handle *VAR_14 = VAR_13->ae_handle;
 struct phy_device *VAR_15 = VAR_11->phydev;
 int VAR_16;

 if (VAR_15)
  switch (VAR_12) {
  case 131:
   VAR_16 = FUNC_3(VAR_15, VAR_10,
     VAR_9);
   if (VAR_16)
    return VAR_16;

   VAR_13->phy_led_val = FUNC_2(VAR_15, VAR_5);

   VAR_16 = FUNC_3(VAR_15, VAR_10,
     VAR_8);
   if (VAR_16)
    return VAR_16;
   return 2;
  case 128:
   VAR_16 = FUNC_0(VAR_11, VAR_7);
   if (VAR_16)
    return VAR_16;
   break;
  case 129:
   VAR_16 = FUNC_0(VAR_11, VAR_6);
   if (VAR_16)
    return VAR_16;
   break;
  case 130:
   VAR_16 = FUNC_3(VAR_15, VAR_10,
     VAR_9);
   if (VAR_16)
    return VAR_16;

   VAR_16 = FUNC_3(VAR_15, VAR_5,
     VAR_13->phy_led_val);
   if (VAR_16)
    return VAR_16;

   VAR_16 = FUNC_3(VAR_15, VAR_10,
     VAR_8);
   if (VAR_16)
    return VAR_16;
   break;
  default:
   return -VAR_0;
  }
 else
  switch (VAR_12) {
  case 131:
   return VAR_14->dev->ops->set_led_id(VAR_14, VAR_1);
  case 128:
   return VAR_14->dev->ops->set_led_id(VAR_14, VAR_4);
  case 129:
   return VAR_14->dev->ops->set_led_id(VAR_14, VAR_3);
  case 130:
   return VAR_14->dev->ops->set_led_id(VAR_14, VAR_2);
  default:
   return -VAR_0;
  }

 return 0;
}
