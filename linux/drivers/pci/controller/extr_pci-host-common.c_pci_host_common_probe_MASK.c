
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device* parent; } ;
struct pci_host_bridge {int bus; int swizzle_irq; int map_irq; int * ops; int busnr; struct pci_config_window* sysdata; TYPE_1__ dev; int windows; } ;
struct pci_ecam_ops {int pci_ops; } ;
struct TYPE_4__ {int start; } ;
struct pci_config_window {TYPE_2__ busr; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_config_window*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pci_config_window*) ;
 struct pci_host_bridge* FUNC_2 (struct device*,int ) ;
 struct pci_config_window* FUNC_3 (struct device*,struct list_head*,struct pci_ecam_ops*) ;
 int FUNC_4 (struct list_head*,int *) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (struct list_head*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pci_host_bridge*) ;
 int FUNC_10 (struct platform_device*,int ) ;

int FUNC_11(struct platform_device *VAR_5,
     struct pci_ecam_ops *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct pci_host_bridge *VAR_8;
 struct pci_config_window *VAR_9;
 struct list_head VAR_10;
 int VAR_11;

 VAR_8 = FUNC_2(VAR_7, 0);
 if (!VAR_8)
  return -VAR_0;

 FUNC_5();


 VAR_9 = FUNC_3(VAR_7, &VAR_10, VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);


 if (!FUNC_8(VAR_1))
  FUNC_6(VAR_2);

 FUNC_4(&VAR_10, &VAR_8->windows);
 VAR_8->dev.parent = VAR_7;
 VAR_8->sysdata = VAR_9;
 VAR_8->busnr = VAR_9->busr.start;
 VAR_8->ops = &VAR_6->pci_ops;
 VAR_8->map_irq = VAR_3;
 VAR_8->swizzle_irq = VAR_4;

 VAR_11 = FUNC_9(VAR_8);
 if (VAR_11 < 0) {
  FUNC_7(&VAR_10);
  return VAR_11;
 }

 FUNC_10(VAR_5, VAR_8->bus);
 return 0;
}
