
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int,int*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct usbnet *VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_2 ? 1 : 0);
 u8 VAR_4[2];
 int VAR_5 = FUNC_0(VAR_1, VAR_0, 0, 0, 2, VAR_4, 0);

 FUNC_1(VAR_1->net, "asix_get_phy_addr()\n");

 if (VAR_5 < 0) {
  FUNC_2(VAR_1->net, "Error reading PHYID register: %02x\n", VAR_5);
  goto out;
 }
 FUNC_1(VAR_1->net, "asix_get_phy_addr() returning 0x%04x\n",
     *((__le16 *)VAR_4));
 VAR_5 = VAR_4[VAR_3];

out:
 return VAR_5;
}
