
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ti_emif_sram_config; int ti_emif_base_addr_phys; int ti_emif_base_addr_virt; } ;
struct ti_emif_data {TYPE_1__ pm_data; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct resource*) ;
 struct ti_emif_data* FUNC_3 (struct device*,int,int ) ;
 struct ti_emif_data* VAR_4 ;
 struct of_device_id* FUNC_4 (int ,struct device*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct device*,struct ti_emif_data*) ;
 int FUNC_7 (struct ti_emif_data*) ;
 int FUNC_8 (struct ti_emif_data*) ;
 int VAR_5 ;
 int FUNC_9 (struct device*,struct ti_emif_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 int VAR_7;
 struct resource *VAR_8;
 struct device *VAR_9 = &VAR_6->dev;
 const struct of_device_id *VAR_10;
 struct ti_emif_data *VAR_11;

 VAR_11 = FUNC_3(VAR_9, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_5, &VAR_6->dev);
 if (!VAR_10)
  return -VAR_0;

 VAR_11->pm_data.ti_emif_sram_config = (unsigned long)VAR_10->data;

 VAR_8 = FUNC_5(VAR_6, VAR_3, 0);
 VAR_11->pm_data.ti_emif_base_addr_virt = FUNC_2(VAR_9,
           VAR_8);
 if (FUNC_0(VAR_11->pm_data.ti_emif_base_addr_virt)) {
  VAR_7 = FUNC_1(VAR_11->pm_data.ti_emif_base_addr_virt);
  return VAR_7;
 }

 VAR_11->pm_data.ti_emif_base_addr_phys = VAR_8->start;

 FUNC_7(VAR_11);

 VAR_7 = FUNC_6(VAR_9, VAR_11);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_9(VAR_9, VAR_11);
 if (VAR_7)
  goto fail_free_sram;

 VAR_4 = VAR_11;

 return 0;

fail_free_sram:
 FUNC_8(VAR_11);

 return VAR_7;
}
