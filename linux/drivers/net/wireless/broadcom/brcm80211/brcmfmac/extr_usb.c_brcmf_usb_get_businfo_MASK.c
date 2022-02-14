
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_usbdev_info {int dummy; } ;
struct TYPE_2__ {struct brcmf_usbdev_info* devinfo; } ;


 TYPE_1__* FUNC_0 (struct device*) ;

__attribute__((used)) static struct brcmf_usbdev_info *FUNC_1(struct device *VAR_0)
{
 return FUNC_0(VAR_0)->devinfo;
}
