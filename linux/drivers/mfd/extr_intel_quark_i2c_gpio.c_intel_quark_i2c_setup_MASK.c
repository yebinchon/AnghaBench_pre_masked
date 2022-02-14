
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int end; int start; } ;
struct device {int dummy; } ;
struct pci_dev {int irq; struct device dev; } ;
struct mfd_cell {int pdata_size; struct dw_i2c_platform_data* platform_data; scalar_t__ resources; } ;
struct dw_i2c_platform_data {int i2c_scl_freq; } ;
struct dmi_system_id {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct dw_i2c_platform_data* FUNC_0 (struct device*,int,int ) ;
 struct dmi_system_id* FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_6, struct mfd_cell *VAR_7)
{
 const struct dmi_system_id *VAR_8;
 struct dw_i2c_platform_data *VAR_9;
 struct resource *VAR_10 = (struct resource *)VAR_7->resources;
 struct device *VAR_11 = &VAR_6->dev;

 VAR_10[VAR_3].start =
  FUNC_3(VAR_6, VAR_4);
 VAR_10[VAR_3].end =
  FUNC_2(VAR_6, VAR_4);

 VAR_10[VAR_2].start = VAR_6->irq;
 VAR_10[VAR_2].end = VAR_6->irq;

 VAR_9 = FUNC_0(VAR_11, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;


 VAR_9->i2c_scl_freq = 100000;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  VAR_9->i2c_scl_freq = (uintptr_t)VAR_8->driver_data;

 VAR_7->platform_data = VAR_9;
 VAR_7->pdata_size = sizeof(*VAR_9);

 return 0;
}
