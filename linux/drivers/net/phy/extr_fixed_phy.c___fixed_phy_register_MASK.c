
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct phy_device {int speed; int is_pseudo_fixed_link; int supported; TYPE_2__ mdio; int asym_pause; int pause; int duplex; scalar_t__ link; } ;
struct gpio_desc {int speed; int is_pseudo_fixed_link; int supported; TYPE_2__ mdio; int asym_pause; int pause; int duplex; scalar_t__ link; } ;
struct fixed_phy_status {int speed; int asym_pause; int pause; int duplex; scalar_t__ link; } ;
struct fixed_mdio_bus {TYPE_3__* mii_bus; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy_device* FUNC_0 (struct phy_device*) ;
 struct phy_device* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct phy_device*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;



 int FUNC_3 (unsigned int,int,struct fixed_phy_status*,struct phy_device*) ;
 int FUNC_4 (int) ;
 struct phy_device* FUNC_5 (struct device_node*) ;
 struct phy_device* FUNC_6 (TYPE_3__*,int,int) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct phy_device*) ;
 int FUNC_13 (struct phy_device*) ;
 int FUNC_14 (struct phy_device*) ;
 int VAR_11 ;
 struct fixed_mdio_bus VAR_12 ;

__attribute__((used)) static struct phy_device *FUNC_15(unsigned int VAR_13,
            struct fixed_phy_status *VAR_14,
            struct device_node *VAR_15,
            struct gpio_desc *VAR_16)
{
 struct fixed_mdio_bus *VAR_17 = &VAR_12;
 struct phy_device *VAR_18;
 int VAR_19;
 int VAR_20;

 if (!VAR_17->mii_bus || VAR_17->mii_bus->state != VAR_9)
  return FUNC_1(-VAR_1);


 if (!VAR_16) {
  VAR_16 = FUNC_5(VAR_15);
  if (FUNC_2(VAR_16))
   return FUNC_0(VAR_16);
 }


 VAR_19 = FUNC_7(&VAR_11, 0, VAR_10, VAR_8);
 if (VAR_19 < 0)
  return FUNC_1(VAR_19);

 VAR_20 = FUNC_3(VAR_13, VAR_19, VAR_14, VAR_16);
 if (VAR_20 < 0) {
  FUNC_8(&VAR_11, VAR_19);
  return FUNC_1(VAR_20);
 }

 VAR_18 = FUNC_6(VAR_17->mii_bus, VAR_19, 0);
 if (FUNC_2(VAR_18)) {
  FUNC_4(VAR_19);
  return FUNC_1(-VAR_0);
 }


 VAR_18->link = VAR_14->link;
 if (VAR_14->link) {
  VAR_18->speed = VAR_14->speed;
  VAR_18->duplex = VAR_14->duplex;
  VAR_18->pause = VAR_14->pause;
  VAR_18->asym_pause = VAR_14->asym_pause;
 }

 FUNC_10(VAR_15);
 VAR_18->mdio.dev.of_node = VAR_15;
 VAR_18->is_pseudo_fixed_link = 1;

 switch (VAR_14->speed) {
 case 128:
  FUNC_9(VAR_3,
     VAR_18->supported);
  FUNC_9(VAR_2,
     VAR_18->supported);

 case 129:
  FUNC_9(VAR_5,
     VAR_18->supported);
  FUNC_9(VAR_4,
     VAR_18->supported);

 case 130:
 default:
  FUNC_9(VAR_7,
     VAR_18->supported);
  FUNC_9(VAR_6,
     VAR_18->supported);
 }

 FUNC_12(VAR_18);

 VAR_20 = FUNC_14(VAR_18);
 if (VAR_20) {
  FUNC_13(VAR_18);
  FUNC_11(VAR_15);
  FUNC_4(VAR_19);
  return FUNC_1(VAR_20);
 }

 return VAR_18;
}
