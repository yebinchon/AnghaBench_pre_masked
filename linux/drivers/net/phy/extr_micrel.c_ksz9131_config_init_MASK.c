
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
 int FUNC_0 (struct phy_device*,struct device_node*,int ,int,char**,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_4)
{
 const struct device *VAR_5 = &VAR_4->mdio.dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 char *VAR_7[2] = {"rxc-skew-psec", "txc-skew-psec"};
 char *VAR_8[4] = {
  "rxd0-skew-psec", "rxd1-skew-psec",
  "rxd2-skew-psec", "rxd3-skew-psec"
 };
 char *VAR_9[4] = {
  "txd0-skew-psec", "txd1-skew-psec",
  "txd2-skew-psec", "txd3-skew-psec"
 };
 char *VAR_10[2] = {"txen-skew-psec", "rxdv-skew-psec"};
 const struct device *VAR_11;
 int VAR_12;

 VAR_11 = &VAR_4->mdio.dev;
 do {
  VAR_6 = VAR_11->of_node;
  VAR_11 = VAR_11->parent;
 } while (!VAR_6 && VAR_11);

 if (!VAR_6)
  return 0;

 VAR_12 = FUNC_0(VAR_4, VAR_6,
       VAR_0, 5,
       VAR_7, 2);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_4, VAR_6,
       VAR_1, 4,
       VAR_10, 2);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_4, VAR_6,
       VAR_2, 4,
       VAR_8, 4);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_4, VAR_6,
       VAR_3, 4,
       VAR_9, 4);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
