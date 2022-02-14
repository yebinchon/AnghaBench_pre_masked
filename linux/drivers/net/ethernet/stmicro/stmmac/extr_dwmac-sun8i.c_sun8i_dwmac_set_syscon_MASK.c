
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_priv_data {int regmap_field; TYPE_1__* variant; } ;
struct stmmac_priv {TYPE_2__* plat; TYPE_3__* device; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct TYPE_8__ {int interface; int phy_node; struct sunxi_priv_data* bsp_priv; } ;
struct TYPE_7__ {int default_syscon_value; int tx_delay_max; int rx_delay_max; scalar_t__ support_rmii; scalar_t__ soc_has_internal_phy; } ;


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
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 int FUNC_2 (TYPE_3__*,char*,int,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct stmmac_priv *VAR_12)
{
 struct sunxi_priv_data *VAR_13 = VAR_12->plat->bsp_priv;
 struct device_node *VAR_14 = VAR_12->device->of_node;
 int VAR_15;
 u32 VAR_16, VAR_17;

 VAR_15 = FUNC_7(VAR_13->regmap_field, &VAR_17);
 if (VAR_15) {
  FUNC_1(VAR_12->device, "Fail to read from regmap field.\n");
  return VAR_15;
 }

 VAR_16 = VAR_13->variant->default_syscon_value;
 if (VAR_16 != VAR_17)
  FUNC_2(VAR_12->device,
    "Current syscon value is not the default %x (expect %x)\n",
    VAR_17, VAR_16);

 if (VAR_13->variant->soc_has_internal_phy) {
  if (FUNC_4(VAR_14, "allwinner,leds-active-low"))
   VAR_16 |= VAR_3;
  else
   VAR_16 &= ~VAR_3;


  VAR_16 |= VAR_2;

  VAR_15 = FUNC_3(VAR_12->device, VAR_12->plat->phy_node);
  if (VAR_15 < 0) {
   FUNC_1(VAR_12->device, "Could not parse MDIO addr\n");
   return VAR_15;
  }



  VAR_16 |= 1 << VAR_1;
 } else {



  VAR_16 &= ~VAR_4;
 }

 if (!FUNC_5(VAR_14, "allwinner,tx-delay-ps", &VAR_17)) {
  if (VAR_17 % 100) {
   FUNC_1(VAR_12->device, "tx-delay must be a multiple of 100\n");
   return -VAR_0;
  }
  VAR_17 /= 100;
  FUNC_0(VAR_12->device, "set tx-delay to %x\n", VAR_17);
  if (VAR_17 <= VAR_13->variant->tx_delay_max) {
   VAR_16 &= ~(VAR_13->variant->tx_delay_max <<
     VAR_10);
   VAR_16 |= (VAR_17 << VAR_10);
  } else {
   FUNC_1(VAR_12->device, "Invalid TX clock delay: %d\n",
    VAR_17);
   return -VAR_0;
  }
 }

 if (!FUNC_5(VAR_14, "allwinner,rx-delay-ps", &VAR_17)) {
  if (VAR_17 % 100) {
   FUNC_1(VAR_12->device, "rx-delay must be a multiple of 100\n");
   return -VAR_0;
  }
  VAR_17 /= 100;
  FUNC_0(VAR_12->device, "set rx-delay to %x\n", VAR_17);
  if (VAR_17 <= VAR_13->variant->rx_delay_max) {
   VAR_16 &= ~(VAR_13->variant->rx_delay_max <<
     VAR_6);
   VAR_16 |= (VAR_17 << VAR_6);
  } else {
   FUNC_1(VAR_12->device, "Invalid RX clock delay: %d\n",
    VAR_17);
   return -VAR_0;
  }
 }


 VAR_16 &= ~(VAR_9 | VAR_5);
 if (VAR_13->variant->support_rmii)
  VAR_16 &= ~VAR_11;

 switch (VAR_12->plat->interface) {
 case 130:

  break;
 case 129:
  VAR_16 |= VAR_5 | VAR_8;
  break;
 case 128:
  VAR_16 |= VAR_11 | VAR_7;
  break;
 default:
  FUNC_1(VAR_12->device, "Unsupported interface mode: %s",
   FUNC_6(VAR_12->plat->interface));
  return -VAR_0;
 }

 FUNC_8(VAR_13->regmap_field, VAR_16);

 return 0;
}
