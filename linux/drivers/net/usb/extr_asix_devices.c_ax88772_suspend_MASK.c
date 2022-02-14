
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct usbnet {TYPE_1__ mii; int net; struct asix_common_private* driver_priv; } ;
struct asix_common_private {void* presvd_phy_advertise; void* presvd_phy_bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct usbnet*,int) ;
 int FUNC_2 (struct usbnet*,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct usbnet *VAR_3)
{
 struct asix_common_private *VAR_4 = VAR_3->driver_priv;
 u16 VAR_5;


 VAR_5 = FUNC_1(VAR_3, 1);
 VAR_5 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_5, 1);

 FUNC_3(VAR_3->net, "ax88772_suspend: medium=0x%04x\n",
     FUNC_1(VAR_3, 1));


 VAR_4->presvd_phy_bmcr =
  FUNC_0(VAR_3->net, VAR_3->mii.phy_id, VAR_2);


 VAR_4->presvd_phy_advertise =
  FUNC_0(VAR_3->net, VAR_3->mii.phy_id, VAR_1);
}
