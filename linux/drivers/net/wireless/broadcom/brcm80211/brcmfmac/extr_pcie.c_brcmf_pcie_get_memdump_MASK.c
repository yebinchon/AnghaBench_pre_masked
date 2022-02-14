
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
struct TYPE_4__ {int rambase; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,size_t) ;
 int FUNC_1 (struct brcmf_pciedev_info*,int ,void*,size_t) ;
 struct brcmf_bus* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct brcmf_bus *VAR_4 = FUNC_2(VAR_1);
 struct brcmf_pciedev *VAR_5 = VAR_4->bus_priv.pcie;
 struct brcmf_pciedev_info *VAR_6 = VAR_5->devinfo;

 FUNC_0(VAR_0, "dump at 0x%08X: len=%zu\n", VAR_6->ci->rambase, VAR_3);
 FUNC_1(VAR_6, VAR_6->ci->rambase, VAR_2, VAR_3);
 return 0;
}
