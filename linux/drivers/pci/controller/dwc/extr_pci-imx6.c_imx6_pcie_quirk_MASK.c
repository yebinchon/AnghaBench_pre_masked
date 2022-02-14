
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pcie_port {scalar_t__ root_bus_nr; } ;
struct pci_dev {scalar_t__ cfg_size; int dev; struct pci_bus* bus; } ;
struct TYPE_8__ {TYPE_2__* parent; } ;
struct pci_bus {scalar_t__ number; TYPE_3__ dev; struct pcie_port* sysdata; } ;
struct imx6_pcie {TYPE_4__* drvdata; } ;
struct dw_pcie {int dummy; } ;
struct TYPE_10__ {int driver; } ;
struct TYPE_9__ {scalar_t__ dbi_length; } ;
struct TYPE_7__ {TYPE_1__* parent; } ;
struct TYPE_6__ {int * driver; } ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 TYPE_5__ VAR_0 ;
 struct dw_pcie* FUNC_1 (struct pcie_port*) ;
 struct imx6_pcie* FUNC_2 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct pci_bus *VAR_2 = VAR_1->bus;
 struct pcie_port *VAR_3 = VAR_2->sysdata;


 if (!VAR_2->dev.parent || !VAR_2->dev.parent->parent)
  return;


 if (VAR_2->dev.parent->parent->driver != &VAR_0.driver)
  return;

 if (VAR_2->number == VAR_3->root_bus_nr) {
  struct dw_pcie *VAR_4 = FUNC_1(VAR_3);
  struct imx6_pcie *VAR_5 = FUNC_2(VAR_4);





  if (VAR_5->drvdata->dbi_length) {
   VAR_1->cfg_size = VAR_5->drvdata->dbi_length;
   FUNC_0(&VAR_1->dev, "Limiting cfg_size to %d\n",
     VAR_1->cfg_size);
  }
 }
}
