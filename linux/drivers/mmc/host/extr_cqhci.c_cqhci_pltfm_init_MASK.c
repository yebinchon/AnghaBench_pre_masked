
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct cqhci_host {int mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cqhci_host* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 struct cqhci_host* FUNC_4 (int *,int,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;
 int FUNC_6 (struct resource*) ;

struct cqhci_host *FUNC_7(struct platform_device *VAR_5)
{
 struct cqhci_host *VAR_6;
 struct resource *VAR_7 = ((void*)0);


 VAR_7 = FUNC_5(VAR_5, VAR_4,
         "cqhci_mem");
 if (!VAR_7) {
  FUNC_1(&VAR_5->dev, "CMDQ not supported\n");
  return FUNC_0(-VAR_1);
 }

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return FUNC_0(-VAR_2);
 VAR_6->mmio = FUNC_3(&VAR_5->dev,
         VAR_7->start,
         FUNC_6(VAR_7));
 if (!VAR_6->mmio) {
  FUNC_2(&VAR_5->dev, "failed to remap cqhci regs\n");
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_5->dev, "CMDQ ioremap: done\n");

 return VAR_6;
}
