
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device* parent; struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*,struct device_node const*,int ,int,char const**,int) ;
 scalar_t__ FUNC_3 (struct device_node const*,char*) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*,int ,int) ;
 int FUNC_6 (struct phy_device*,char*) ;

__attribute__((used)) static int FUNC_7(struct phy_device *VAR_7)
{
 const struct device *VAR_8 = &VAR_7->mdio.dev;
 const struct device_node *VAR_9 = VAR_8->of_node;
 static const char *VAR_10[2] = {"rxc-skew-ps", "txc-skew-ps"};
 static const char *VAR_11[4] = {
  "rxd0-skew-ps", "rxd1-skew-ps",
  "rxd2-skew-ps", "rxd3-skew-ps"
 };
 static const char *VAR_12[4] = {
  "txd0-skew-ps", "txd1-skew-ps",
  "txd2-skew-ps", "txd3-skew-ps"
 };
 static const char *VAR_13[2] = {"txen-skew-ps", "rxdv-skew-ps"};
 const struct device *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_1(VAR_7);
 if (VAR_15 < 0)
  return VAR_15;





 VAR_14 = &VAR_7->mdio.dev;
 do {
  VAR_9 = VAR_14->of_node;
  VAR_14 = VAR_14->parent;
 } while (!VAR_9 && VAR_14);

 if (VAR_9) {
  FUNC_2(VAR_7, VAR_9,
    VAR_3, 5,
    VAR_10, 2);

  FUNC_2(VAR_7, VAR_9,
    VAR_4, 4,
    VAR_13, 2);

  FUNC_2(VAR_7, VAR_9,
    VAR_5, 4,
    VAR_11, 4);

  FUNC_2(VAR_7, VAR_9,
    VAR_6, 4,
    VAR_12, 4);
  if (FUNC_3(VAR_9, "micrel,force-master")) {
   VAR_15 = FUNC_4(VAR_7, VAR_2);
   if (VAR_15 < 0)
    goto err_force_master;


   VAR_15 |= VAR_1 | VAR_0;
   VAR_15 = FUNC_5(VAR_7, VAR_2, VAR_15);
   if (VAR_15 < 0)
    goto err_force_master;
  }
 }

 return FUNC_0(VAR_7);

err_force_master:
 FUNC_6(VAR_7, "failed to force the phy to master mode\n");
 return VAR_15;
}
