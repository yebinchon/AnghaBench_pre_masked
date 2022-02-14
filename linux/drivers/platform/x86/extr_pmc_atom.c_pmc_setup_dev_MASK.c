
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_reg_map {int dummy; } ;
struct pmc_dev {int init; int regmap; struct pmc_reg_map const* map; int base_addr; } ;
struct pmc_data {struct pmc_reg_map* map; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int * VAR_7 ;
 int FUNC_4 (struct pmc_dev*) ;
 struct pmc_dev VAR_8 ;
 int FUNC_5 (struct pmc_dev*) ;
 int * VAR_9 ;
 int FUNC_6 (struct pci_dev*,int ,struct pmc_data const*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_10, const struct pci_device_id *VAR_11)
{
 struct pmc_dev *VAR_12 = &VAR_8;
 const struct pmc_data *VAR_13 = (struct pmc_data *)VAR_11->driver_data;
 const struct pmc_reg_map *VAR_14 = VAR_13->map;
 int VAR_15;


 FUNC_3(VAR_10, VAR_1, &VAR_6);
 VAR_6 &= VAR_0;


 if (VAR_6 != 0 && VAR_7 == ((void*)0))
  VAR_7 = VAR_9;

 FUNC_3(VAR_10, VAR_4, &VAR_12->base_addr);
 VAR_12->base_addr &= VAR_3;

 VAR_12->regmap = FUNC_2(VAR_12->base_addr, VAR_5);
 if (!VAR_12->regmap) {
  FUNC_0(&VAR_10->dev, "error: ioremap failed\n");
  return -VAR_2;
 }

 VAR_12->map = VAR_14;


 FUNC_5(VAR_12);

 FUNC_4(VAR_12);


 VAR_15 = FUNC_6(VAR_10, VAR_12->regmap, VAR_13);
 if (VAR_15)
  FUNC_1(&VAR_10->dev, "platform clocks register failed: %d\n",
    VAR_15);

 VAR_12->init = 1;
 return VAR_15;
}
