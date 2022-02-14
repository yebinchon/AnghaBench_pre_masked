
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_usbdev {int dummy; } ;
struct TYPE_2__ {struct brcmf_usbdev* usb; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 struct brcmf_bus* FUNC_0 (struct device*) ;

__attribute__((used)) static struct brcmf_usbdev *FUNC_1(struct device *VAR_0)
{
 struct brcmf_bus *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->bus_priv.usb;
}
