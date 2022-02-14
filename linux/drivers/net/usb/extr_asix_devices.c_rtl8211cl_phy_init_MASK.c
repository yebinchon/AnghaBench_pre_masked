
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; } ;
struct usbnet {TYPE_1__ mii; int net; int data; } ;
struct asix_data {int ledmode; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_0)
{
 struct asix_data *VAR_1 = (struct asix_data *)&VAR_0->data;

 FUNC_2(VAR_0->net, "rtl8211cl_phy_init()\n");

 FUNC_1 (VAR_0->net, VAR_0->mii.phy_id, 0x1f, 0x0005);
 FUNC_1 (VAR_0->net, VAR_0->mii.phy_id, 0x0c, 0);
 FUNC_1 (VAR_0->net, VAR_0->mii.phy_id, 0x01,
  FUNC_0 (VAR_0->net, VAR_0->mii.phy_id, 0x01) | 0x0080);
 FUNC_1 (VAR_0->net, VAR_0->mii.phy_id, 0x1f, 0);

 if (VAR_1->ledmode == 12) {
  FUNC_1 (VAR_0->net, VAR_0->mii.phy_id, 0x1f, 0x0002);
  FUNC_1 (VAR_0->net, VAR_0->mii.phy_id, 0x1a, 0x00cb);
  FUNC_1 (VAR_0->net, VAR_0->mii.phy_id, 0x1f, 0);
 }

 return 0;
}
