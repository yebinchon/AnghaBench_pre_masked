
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int mem; int io; } ;
struct tegra_pcie {TYPE_2__ io; int pio; int busn; TYPE_1__ offset; int prefetch; int mem; struct device* dev; } ;
struct list_head {int dummy; } ;
struct pci_host_bridge {struct list_head windows; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct list_head*) ;
 int FUNC_1 (struct list_head*,int *) ;
 int FUNC_2 (struct list_head*,int *,int ) ;
 int FUNC_3 (struct list_head*) ;
 struct pci_host_bridge* FUNC_4 (struct tegra_pcie*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct tegra_pcie *VAR_0)
{
 struct pci_host_bridge *VAR_1 = FUNC_4(VAR_0);
 struct list_head *VAR_2 = &VAR_1->windows;
 struct device *VAR_3 = VAR_0->dev;
 int VAR_4;

 FUNC_2(VAR_2, &VAR_0->pio, VAR_0->offset.io);
 FUNC_2(VAR_2, &VAR_0->mem, VAR_0->offset.mem);
 FUNC_2(VAR_2, &VAR_0->prefetch, VAR_0->offset.mem);
 FUNC_1(VAR_2, &VAR_0->busn);

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 < 0) {
  FUNC_3(VAR_2);
  return VAR_4;
 }

 FUNC_5(&VAR_0->pio, VAR_0->io.start);

 return 0;
}
