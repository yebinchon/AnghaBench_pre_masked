
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device* parent; } ;
struct pci_host_bridge {struct mtk_pcie* sysdata; int swizzle_irq; int map_irq; int ops; TYPE_1__ dev; int busnr; } ;
struct mtk_pcie {int ports; TYPE_2__* soc; struct device* dev; int busnr; } ;
struct TYPE_4__ {int ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pci_host_bridge* FUNC_1 (struct device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mtk_pcie*) ;
 int FUNC_4 (struct mtk_pcie*) ;
 TYPE_2__* FUNC_5 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtk_pcie* FUNC_6 (struct pci_host_bridge*) ;
 int FUNC_7 (struct pci_host_bridge*) ;
 int FUNC_8 (struct platform_device*,struct mtk_pcie*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct mtk_pcie *VAR_5;
 struct pci_host_bridge *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4, sizeof(*VAR_5));
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_6);

 VAR_5->dev = VAR_4;
 VAR_5->soc = FUNC_5(VAR_4);
 FUNC_8(VAR_3, VAR_5);
 FUNC_0(&VAR_5->ports);

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6->busnr = VAR_5->busnr;
 VAR_6->dev.parent = VAR_5->dev;
 VAR_6->ops = VAR_5->soc->ops;
 VAR_6->map_irq = VAR_1;
 VAR_6->swizzle_irq = VAR_2;
 VAR_6->sysdata = VAR_5;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  goto put_resources;

 return 0;

put_resources:
 if (!FUNC_2(&VAR_5->ports))
  FUNC_3(VAR_5);

 return VAR_7;
}
