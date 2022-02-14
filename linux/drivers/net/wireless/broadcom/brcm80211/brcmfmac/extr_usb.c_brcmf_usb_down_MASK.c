
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_usbdev_info*) ;
 int FUNC_1 (int ,char*) ;
 struct brcmf_usbdev_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct brcmf_usbdev_info*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2)
{
 struct brcmf_usbdev_info *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_1, "Enter\n");
 if (VAR_3 == ((void*)0))
  return;

 if (VAR_3->bus_pub.state == VAR_0)
  return;

 FUNC_3(VAR_3, VAR_0);

 FUNC_0(VAR_3);
}
