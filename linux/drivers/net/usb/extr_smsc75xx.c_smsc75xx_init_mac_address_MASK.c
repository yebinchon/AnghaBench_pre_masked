
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_3__* net; TYPE_2__* udev; } ;
struct TYPE_7__ {int dev_addr; } ;
struct TYPE_5__ {int of_node; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct usbnet*,int ,TYPE_3__*,char*) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct usbnet*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct usbnet *VAR_3)
{
 const u8 *VAR_4;


 VAR_4 = FUNC_5(VAR_3->udev->dev.of_node);
 if (!FUNC_0(VAR_4)) {
  FUNC_2(VAR_3->net->dev_addr, VAR_4);
  return;
 }


 if (FUNC_6(VAR_3, VAR_0, VAR_1,
   VAR_3->net->dev_addr) == 0) {
  if (FUNC_3(VAR_3->net->dev_addr)) {

   FUNC_4(VAR_3, VAR_2, VAR_3->net,
      "MAC address read from EEPROM\n");
   return;
  }
 }


 FUNC_1(VAR_3->net);
 FUNC_4(VAR_3, VAR_2, VAR_3->net, "MAC address set to eth_random_addr\n");
}
