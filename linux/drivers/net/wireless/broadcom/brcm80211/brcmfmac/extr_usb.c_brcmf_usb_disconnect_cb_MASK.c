
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct brcmf_usbdev_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct brcmf_usbdev_info*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct brcmf_usbdev_info *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_0(VAR_0, "Enter, bus_pub %p\n", VAR_1);

 FUNC_1(VAR_1->dev);
 FUNC_2(VAR_1->dev);
 FUNC_4(VAR_1->bus_pub.bus);
 FUNC_3(VAR_1);
}
