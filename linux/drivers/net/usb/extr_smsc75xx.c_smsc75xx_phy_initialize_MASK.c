
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mdio_read ) (int ,int ,int ) ;int phy_id_mask; int reg_num_mask; int supports_gmii; int phy_id; int (* mdio_write ) (int ,int ,int ,int) ;int dev; } ;
struct usbnet {int net; TYPE_1__ mii; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct usbnet*,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct usbnet*) ;

__attribute__((used)) static int FUNC_7(struct usbnet *VAR_15)
{
 int VAR_16, VAR_17, VAR_18 = 0;


 VAR_15->mii.dev = VAR_15->net;
 VAR_15->mii.mdio_read = FUNC_4;
 VAR_15->mii.mdio_write = FUNC_5;
 VAR_15->mii.phy_id_mask = 0x1f;
 VAR_15->mii.reg_num_mask = 0x1f;
 VAR_15->mii.supports_gmii = 1;
 VAR_15->mii.phy_id = VAR_13;


 FUNC_5(VAR_15->net, VAR_15->mii.phy_id, VAR_8, VAR_5);

 do {
  FUNC_1(10);
  VAR_16 = FUNC_4(VAR_15->net, VAR_15->mii.phy_id, VAR_8);
  if (VAR_16 < 0) {
   FUNC_2(VAR_15->net, "Error reading MII_BMCR\n");
   return VAR_16;
  }
  VAR_18++;
 } while ((VAR_16 & VAR_5) && (VAR_18 < 100));

 if (VAR_18 >= 100) {
  FUNC_2(VAR_15->net, "timeout on PHY Reset\n");
  return -VAR_6;
 }


 FUNC_6(VAR_15);

 FUNC_5(VAR_15->net, VAR_15->mii.phy_id, VAR_7,
  VAR_1 | VAR_2 | VAR_4 |
  VAR_3);
 FUNC_5(VAR_15->net, VAR_15->mii.phy_id, VAR_9,
  VAR_0);


 VAR_17 = FUNC_4(VAR_15->net, VAR_15->mii.phy_id, VAR_12);
 if (VAR_17 < 0) {
  FUNC_2(VAR_15->net, "Error reading PHY_INT_SRC\n");
  return VAR_17;
 }

 FUNC_5(VAR_15->net, VAR_15->mii.phy_id, VAR_12, 0xffff);

 FUNC_5(VAR_15->net, VAR_15->mii.phy_id, VAR_10,
  VAR_11);
 FUNC_0(&VAR_15->mii);

 FUNC_3(VAR_15, VAR_14, VAR_15->net, "phy initialised successfully\n");
 return 0;
}
