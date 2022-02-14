
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_pciedev_info {int wowl_enabled; } ;
struct brcmf_pciedev {struct brcmf_pciedev_info* devinfo; } ;
struct TYPE_2__ {struct brcmf_pciedev* pcie; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct brcmf_bus* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, bool VAR_2)
{
 struct brcmf_bus *VAR_3 = FUNC_1(VAR_1);
 struct brcmf_pciedev *VAR_4 = VAR_3->bus_priv.pcie;
 struct brcmf_pciedev_info *VAR_5 = VAR_4->devinfo;

 FUNC_0(VAR_0, "Configuring WOWL, enabled=%d\n", VAR_2);
 VAR_5->wowl_enabled = VAR_2;
}
