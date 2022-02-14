
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mdio_read ) (int ,int ,int ) ;int phy_id_mask; int reg_num_mask; int phy_id; int (* mdio_write ) (int ,int ,int ,int) ;int dev; } ;
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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct usbnet*,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_13)
{
 int VAR_14, VAR_15, VAR_16 = 0;


 VAR_13->mii.dev = VAR_13->net;
 VAR_13->mii.mdio_read = FUNC_4;
 VAR_13->mii.mdio_write = FUNC_5;
 VAR_13->mii.phy_id_mask = 0x1f;
 VAR_13->mii.reg_num_mask = 0x1f;
 VAR_13->mii.phy_id = VAR_11;


 FUNC_5(VAR_13->net, VAR_13->mii.phy_id, VAR_7, VAR_4);

 do {
  FUNC_1(10);
  VAR_14 = FUNC_4(VAR_13->net, VAR_13->mii.phy_id, VAR_7);
  VAR_16++;
 } while ((VAR_14 & VAR_4) && (VAR_16 < 100));

 if (VAR_16 >= 100) {
  FUNC_2(VAR_13->net, "timeout on PHY Reset");
  return -VAR_5;
 }

 FUNC_5(VAR_13->net, VAR_13->mii.phy_id, VAR_6,
  VAR_0 | VAR_1 | VAR_3 |
  VAR_2);


 VAR_15 = FUNC_4(VAR_13->net, VAR_13->mii.phy_id, VAR_10);
 if (VAR_15 < 0) {
  FUNC_2(VAR_13->net, "Failed to read PHY_INT_SRC during init\n");
  return VAR_15;
 }

 FUNC_5(VAR_13->net, VAR_13->mii.phy_id, VAR_8,
  VAR_9);
 FUNC_0(&VAR_13->mii);

 FUNC_3(VAR_13, VAR_12, VAR_13->net, "phy initialised successfully\n");
 return 0;
}
