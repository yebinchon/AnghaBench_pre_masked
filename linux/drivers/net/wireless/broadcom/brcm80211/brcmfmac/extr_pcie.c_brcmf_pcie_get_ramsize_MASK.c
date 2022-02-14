
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_pciedev_info {TYPE_2__* ci; } ;
struct brcmf_pciedev {struct brcmf_pciedev_info* devinfo; } ;
struct TYPE_3__ {struct brcmf_pciedev* pcie; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;
struct TYPE_4__ {size_t ramsize; size_t srsize; } ;


 struct brcmf_bus* FUNC_0 (struct device*) ;

__attribute__((used)) static size_t FUNC_1(struct device *VAR_0)
{
 struct brcmf_bus *VAR_1 = FUNC_0(VAR_0);
 struct brcmf_pciedev *VAR_2 = VAR_1->bus_priv.pcie;
 struct brcmf_pciedev_info *VAR_3 = VAR_2->devinfo;

 return VAR_3->ci->ramsize - VAR_3->ci->srsize;
}
