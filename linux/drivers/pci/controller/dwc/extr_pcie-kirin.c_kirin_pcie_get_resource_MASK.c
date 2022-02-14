
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct kirin_pcie {void* sysctrl; void* crgctrl; TYPE_1__* pci; void* phy_base; void* apb_base; } ;
struct TYPE_2__ {void* dbi_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 long FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,struct resource*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,char*) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static long FUNC_5(struct kirin_pcie *VAR_1,
        struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct resource *VAR_4;
 struct resource *VAR_5;
 struct resource *VAR_6;

 VAR_4 = FUNC_3(VAR_2, VAR_0, "apb");
 VAR_1->apb_base = FUNC_2(VAR_3, VAR_4);
 if (FUNC_0(VAR_1->apb_base))
  return FUNC_1(VAR_1->apb_base);

 VAR_5 = FUNC_3(VAR_2, VAR_0, "phy");
 VAR_1->phy_base = FUNC_2(VAR_3, VAR_5);
 if (FUNC_0(VAR_1->phy_base))
  return FUNC_1(VAR_1->phy_base);

 VAR_6 = FUNC_3(VAR_2, VAR_0, "dbi");
 VAR_1->pci->dbi_base = FUNC_2(VAR_3, VAR_6);
 if (FUNC_0(VAR_1->pci->dbi_base))
  return FUNC_1(VAR_1->pci->dbi_base);

 VAR_1->crgctrl =
  FUNC_4("hisilicon,hi3660-crgctrl");
 if (FUNC_0(VAR_1->crgctrl))
  return FUNC_1(VAR_1->crgctrl);

 VAR_1->sysctrl =
  FUNC_4("hisilicon,hi3660-sctrl");
 if (FUNC_0(VAR_1->sysctrl))
  return FUNC_1(VAR_1->sysctrl);

 return 0;
}
