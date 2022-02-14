
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3 {int phy_flags; int phy_addr; int mdio_bus; TYPE_1__* pdev; int dev; } ;
struct phy_device {int interface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;



 int FUNC_1 (struct phy_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 struct phy_device* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct phy_device*) ;
 struct phy_device* FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (struct phy_device*) ;
 int VAR_5 ;
 int FUNC_10 (struct tg3*) ;

__attribute__((used)) static int FUNC_11(struct tg3 *VAR_6)
{
 struct phy_device *VAR_7;

 if (VAR_6->phy_flags & VAR_4)
  return 0;


 FUNC_10(VAR_6);

 VAR_7 = FUNC_3(VAR_6->mdio_bus, VAR_6->phy_addr);


 VAR_7 = FUNC_5(VAR_6->dev, FUNC_9(VAR_7),
        VAR_5, VAR_7->interface);
 if (FUNC_0(VAR_7)) {
  FUNC_2(&VAR_6->pdev->dev, "Could not attach to PHY\n");
  return FUNC_1(VAR_7);
 }


 switch (VAR_7->interface) {
 case 130:
 case 128:
  if (!(VAR_6->phy_flags & VAR_3)) {
   FUNC_7(VAR_7, VAR_2);
   FUNC_8(VAR_7);
   break;
  }

 case 129:
  FUNC_7(VAR_7, VAR_1);
  FUNC_8(VAR_7);
  break;
 default:
  FUNC_6(FUNC_3(VAR_6->mdio_bus, VAR_6->phy_addr));
  return -VAR_0;
 }

 VAR_6->phy_flags |= VAR_4;

 FUNC_4(VAR_7);

 return 0;
}
