
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {TYPE_2__* net; struct ax88172a_private* driver_priv; int data; } ;
struct ax88172a_private {int phy_name; int phydev; int phy_addr; TYPE_1__* mdio; int use_embdphy; } ;
struct asix_data {int * mac_addr; } ;
struct TYPE_7__ {int dev_addr; } ;
struct TYPE_6__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int ) ;
 int FUNC_3 (struct usbnet*,int ) ;
 int FUNC_4 (struct usbnet*,int ,int,int ,int ,int *,int ) ;
 int FUNC_5 (struct usbnet*,int,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct usbnet*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,char*,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int) ;
 int FUNC_12 (TYPE_2__*,char*,int) ;
 int FUNC_13 (TYPE_2__*,int,int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct usbnet *VAR_10)
{
 struct asix_data *VAR_11 = (struct asix_data *)&VAR_10->data;
 struct ax88172a_private *VAR_12 = VAR_10->driver_priv;
 int VAR_13;
 u16 VAR_14;

 FUNC_6(VAR_10, VAR_12->use_embdphy);

 FUNC_9(150);
 VAR_14 = FUNC_3(VAR_10, 0);
 FUNC_10(VAR_10->net, "RX_CTL is 0x%04x after software reset\n", VAR_14);
 VAR_13 = FUNC_5(VAR_10, 0x0000, 0);
 if (VAR_13 < 0)
  goto out;

 VAR_14 = FUNC_3(VAR_10, 0);
 FUNC_10(VAR_10->net, "RX_CTL is 0x%04x setting to 0x0000\n", VAR_14);

 FUNC_9(150);

 VAR_13 = FUNC_4(VAR_10, VAR_3,
        VAR_0 | VAR_1,
        VAR_2, 0, ((void*)0), 0);
 if (VAR_13 < 0) {
  FUNC_11(VAR_10->net, "Write IPG,IPG1,IPG2 failed: %d\n", VAR_13);
  goto out;
 }


 FUNC_8(VAR_11->mac_addr, VAR_10->net->dev_addr, VAR_6);
 VAR_13 = FUNC_4(VAR_10, VAR_4, 0, 0, VAR_6,
        VAR_11->mac_addr, 0);
 if (VAR_13 < 0)
  goto out;


 VAR_13 = FUNC_5(VAR_10, VAR_5, 0);
 if (VAR_13 < 0)
  goto out;

 VAR_14 = FUNC_3(VAR_10, 0);
 FUNC_10(VAR_10->net, "RX_CTL is 0x%04x after all initializations\n",
     VAR_14);

 VAR_14 = FUNC_2(VAR_10, 0);
 FUNC_10(VAR_10->net, "Medium Status is 0x%04x after all initializations\n",
     VAR_14);


 FUNC_15(VAR_12->phy_name, 20, VAR_7,
   VAR_12->mdio->id, VAR_12->phy_addr);

 VAR_12->phydev = FUNC_13(VAR_10->net, VAR_12->phy_name,
       &VAR_9,
       VAR_8);
 if (FUNC_0(VAR_12->phydev)) {
  FUNC_11(VAR_10->net, "Could not connect to PHY device %s\n",
      VAR_12->phy_name);
  VAR_13 = FUNC_1(VAR_12->phydev);
  goto out;
 }

 FUNC_12(VAR_10->net, "Connected to phy %s\n", VAR_12->phy_name);




 FUNC_7(VAR_12->phydev);
 FUNC_14(VAR_12->phydev);

 return 0;

out:
 return VAR_13;

}
