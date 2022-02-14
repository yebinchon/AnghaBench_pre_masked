
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int irq; TYPE_1__* drv; } ;
struct net_device {int dummy; } ;
struct ax_device {int mii_bus; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*,int ,int ,int ) ;
 int FUNC_2 (struct net_device*,struct phy_device*,int ,int ) ;
 struct phy_device* FUNC_3 (int ) ;
 int FUNC_4 (struct phy_device*,int ) ;
 int FUNC_5 (struct phy_device*) ;
 struct ax_device* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4)
{
 struct ax_device *VAR_5 = FUNC_6(VAR_4);
 struct phy_device *VAR_6 = ((void*)0);
 int VAR_7;


 VAR_6 = FUNC_3(VAR_5->mii_bus);
 if (!VAR_6) {
  FUNC_0(VAR_4, "no PHY found\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_3,
     VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_4, "Could not attach to PHY\n");
  return VAR_7;
 }

 FUNC_4(VAR_6, VAR_2);

 FUNC_1(VAR_4, "PHY driver [%s] (mii_bus:phy_addr=%s, irq=%d)\n",
      VAR_6->drv->name, FUNC_5(VAR_6), VAR_6->irq);

 return 0;
}
