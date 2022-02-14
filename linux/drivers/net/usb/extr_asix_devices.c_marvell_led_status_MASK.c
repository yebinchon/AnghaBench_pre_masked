
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct usbnet {TYPE_1__ mii; int net; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_1->net, VAR_1->mii.phy_id, VAR_0);

 FUNC_2(VAR_1->net, "marvell_led_status() read 0x%04x\n", VAR_3);


 VAR_3 &= 0xfc0f;

 switch (VAR_2) {
  case 128:
   VAR_3 |= 0x03e0;
   break;
  case 129:
   VAR_3 |= 0x03b0;
   break;
  default:
   VAR_3 |= 0x02f0;
 }

 FUNC_2(VAR_1->net, "marvell_led_status() writing 0x%04x\n", VAR_3);
 FUNC_1(VAR_1->net, VAR_1->mii.phy_id, VAR_0, VAR_3);

 return 0;
}
