
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
 int FUNC_0 (struct phy_device*,struct device_node const*,int ,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_3)
{
 const struct device *VAR_4 = &VAR_3->mdio.dev;
 const struct device_node *VAR_5 = VAR_4->of_node;
 const struct device *VAR_6;





 VAR_6 = &VAR_3->mdio.dev;
 do {
  VAR_5 = VAR_6->of_node;
  VAR_6 = VAR_6->parent;

 } while (!VAR_5 && VAR_6);

 if (VAR_5) {
  FUNC_0(VAR_3, VAR_5,
        VAR_0,
        "txen-skew-ps", "txc-skew-ps",
        "rxdv-skew-ps", "rxc-skew-ps");
  FUNC_0(VAR_3, VAR_5,
        VAR_1,
        "rxd0-skew-ps", "rxd1-skew-ps",
        "rxd2-skew-ps", "rxd3-skew-ps");
  FUNC_0(VAR_3, VAR_5,
        VAR_2,
        "txd0-skew-ps", "txd1-skew-ps",
        "txd2-skew-ps", "txd3-skew-ps");
 }
 return 0;
}
