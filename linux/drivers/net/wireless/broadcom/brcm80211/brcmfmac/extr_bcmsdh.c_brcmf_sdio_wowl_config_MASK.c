
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_sdio_dev {int wowl_enabled; } ;
struct TYPE_2__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct brcmf_bus* FUNC_1 (struct device*) ;

void FUNC_2(struct device *VAR_1, bool VAR_2)
{
 struct brcmf_bus *VAR_3 = FUNC_1(VAR_1);
 struct brcmf_sdio_dev *VAR_4 = VAR_3->bus_priv.sdio;

 FUNC_0(VAR_0, "Configuring WOWL, enabled=%d\n", VAR_2);
 VAR_4->wowl_enabled = VAR_2;
}
