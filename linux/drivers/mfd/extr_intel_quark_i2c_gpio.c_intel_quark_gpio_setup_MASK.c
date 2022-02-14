
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int end; int start; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
struct mfd_cell {int pdata_size; struct dwapb_platform_data* platform_data; scalar_t__ resources; } ;
struct dwapb_platform_data {TYPE_1__* properties; int nports; } ;
struct TYPE_2__ {int has_irq; int irq_shared; int * irq; int gpio_base; int ngpio; scalar_t__ idx; int * fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (struct device*,int ,int,int ) ;
 struct dwapb_platform_data* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_7, struct mfd_cell *VAR_8)
{
 struct dwapb_platform_data *VAR_9;
 struct resource *VAR_10 = (struct resource *)VAR_8->resources;
 struct device *VAR_11 = &VAR_7->dev;

 VAR_10[VAR_3].start =
  FUNC_3(VAR_7, VAR_6);
 VAR_10[VAR_3].end =
  FUNC_2(VAR_7, VAR_6);

 VAR_9 = FUNC_1(VAR_11, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;


 VAR_9->nports = VAR_2;
 VAR_9->properties = FUNC_0(VAR_11, VAR_9->nports,
      sizeof(*VAR_9->properties),
      VAR_1);
 if (!VAR_9->properties)
  return -VAR_0;


 VAR_9->properties->fwnode = ((void*)0);
 VAR_9->properties->idx = 0;
 VAR_9->properties->ngpio = VAR_5;
 VAR_9->properties->gpio_base = VAR_4;
 VAR_9->properties->irq[0] = VAR_7->irq;
 VAR_9->properties->has_irq = 1;
 VAR_9->properties->irq_shared = 1;

 VAR_8->platform_data = VAR_9;
 VAR_8->pdata_size = sizeof(*VAR_9);

 return 0;
}
