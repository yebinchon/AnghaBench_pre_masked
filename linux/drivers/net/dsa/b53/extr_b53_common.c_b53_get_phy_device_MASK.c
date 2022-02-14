
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct dsa_switch {int slave_mii_bus; } ;




 struct phy_device* FUNC_0 (int ,int) ;

__attribute__((used)) static struct phy_device *FUNC_1(struct dsa_switch *VAR_0, int VAR_1)
{

 switch (VAR_1) {
 case 128:
 case 7:
 case 129:
  return ((void*)0);
 }

 return FUNC_0(VAR_0->slave_mii_bus, VAR_1);
}
