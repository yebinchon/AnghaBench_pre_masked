
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_xusb_padctl {TYPE_2__* soc; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* usb3_set_lfps_detect ) (struct tegra_xusb_padctl*,unsigned int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_xusb_padctl*,unsigned int,int) ;

int FUNC_1(struct tegra_xusb_padctl *VAR_1,
        unsigned int VAR_2, bool VAR_3)
{
 if (VAR_1->soc->ops->usb3_set_lfps_detect)
  return VAR_1->soc->ops->usb3_set_lfps_detect(VAR_1, VAR_2,
             VAR_3);

 return -VAR_0;
}
