
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ssp_device {int type; int port_id; struct platform_device* pdev; int irq; int clk; int mmio_base; int phys_base; } ;
struct resource {int start; } ;
struct pxa2xx_spi_controller {int num_chipselect; int enable_dma; int dma_burst_size; int is_slave; int dma_filter; int rx_param; int tx_param; struct ssp_device ssp; } ;
struct TYPE_9__ {scalar_t__ of_node; int parent; TYPE_1__* driver; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct of_device_id {scalar_t__ data; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct acpi_device {int dummy; } ;
typedef enum pxa_ssp_type { ____Placeholder_pxa_ssp_type } pxa_ssp_type ;
struct TYPE_8__ {int acpi_match_table; int of_match_table; } ;


 struct acpi_device* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct acpi_device_id* FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,struct resource*) ;
 struct pxa2xx_spi_controller* FUNC_6 (TYPE_2__*,int,int ) ;
 struct of_device_id* FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (scalar_t__,char*) ;
 struct pci_device_id* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct acpi_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static struct pxa2xx_spi_controller *
FUNC_14(struct platform_device *VAR_4)
{
 struct pxa2xx_spi_controller *VAR_5;
 struct acpi_device *VAR_6;
 struct ssp_device *VAR_7;
 struct resource *VAR_8;
 const struct acpi_device_id *VAR_9 = ((void*)0);
 const struct pci_device_id *VAR_10 = ((void*)0);
 const struct of_device_id *VAR_11 = ((void*)0);
 enum pxa_ssp_type VAR_12;

 VAR_6 = FUNC_0(&VAR_4->dev);

 if (VAR_4->dev.of_node)
  VAR_11 = FUNC_7(VAR_4->dev.driver->of_match_table,
     &VAR_4->dev);
 else if (FUNC_3(VAR_4->dev.parent))
  VAR_10 = FUNC_9(VAR_3,
      FUNC_13(VAR_4->dev.parent));
 else if (VAR_6)
  VAR_9 = FUNC_2(VAR_4->dev.driver->acpi_match_table,
         &VAR_4->dev);
 else
  return ((void*)0);

 if (VAR_9)
  VAR_12 = (enum pxa_ssp_type)VAR_9->driver_data;
 else if (VAR_10)
  VAR_12 = (enum pxa_ssp_type)VAR_10->driver_data;
 else if (VAR_11)
  VAR_12 = (enum pxa_ssp_type)VAR_11->data;
 else
  return ((void*)0);

 VAR_5 = FUNC_6(&VAR_4->dev, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_11(VAR_4, VAR_1, 0);
 if (!VAR_8)
  return ((void*)0);

 VAR_7 = &VAR_5->ssp;

 VAR_7->phys_base = VAR_8->start;
 VAR_7->mmio_base = FUNC_5(&VAR_4->dev, VAR_8);
 if (FUNC_1(VAR_7->mmio_base))
  return ((void*)0);
 VAR_7->clk = FUNC_4(&VAR_4->dev, ((void*)0));
 VAR_7->irq = FUNC_10(VAR_4, 0);
 VAR_7->type = VAR_12;
 VAR_7->pdev = VAR_4;
 VAR_7->port_id = FUNC_12(VAR_6);

 VAR_5->is_slave = FUNC_8(VAR_4->dev.of_node, "spi-slave");
 VAR_5->num_chipselect = 1;
 VAR_5->enable_dma = 1;
 VAR_5->dma_burst_size = 1;

 return VAR_5;
}
