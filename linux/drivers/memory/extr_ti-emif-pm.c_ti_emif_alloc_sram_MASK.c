
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* regs_phys; struct emif_regs_amx3* regs_virt; } ;
struct TYPE_3__ {void* run_hw_leveling; void* exit_sr; void* restore_context; void* abort_sr; void* enter_sr; void* save_context; } ;
struct ti_emif_data {void* ti_emif_sram_virt; void* sram_pool_code; void* ti_emif_sram_data_phys; TYPE_2__ pm_data; void* ti_emif_sram_data_virt; TYPE_1__ pm_functions; void* sram_pool_data; void* ti_emif_sram_phys; } ;
struct emif_regs_amx3 {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (void*,void*,int) ;
 void* FUNC_3 (void*,void*) ;
 void* FUNC_4 (struct device_node*,char*,int) ;
 void* FUNC_5 (struct ti_emif_data*,unsigned long) ;
 void* FUNC_6 (struct ti_emif_data*,unsigned long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_9,
         struct ti_emif_data *VAR_10)
{
 struct device_node *VAR_11 = VAR_9->of_node;
 int VAR_12;

 VAR_10->sram_pool_code = FUNC_4(VAR_11, "sram", 0);
 if (!VAR_10->sram_pool_code) {
  FUNC_0(VAR_9, "Unable to get sram pool for ocmcram code\n");
  return -VAR_0;
 }

 VAR_10->ti_emif_sram_virt =
   FUNC_1(VAR_10->sram_pool_code,
           VAR_8);
 if (!VAR_10->ti_emif_sram_virt) {
  FUNC_0(VAR_9, "Unable to allocate code memory from ocmcram\n");
  return -VAR_1;
 }


 VAR_10->ti_emif_sram_phys =
   FUNC_3(VAR_10->sram_pool_code,
           VAR_10->ti_emif_sram_virt);


 VAR_10->sram_pool_data = FUNC_4(VAR_11, "sram", 1);
 if (!VAR_10->sram_pool_data) {
  FUNC_0(VAR_9, "Unable to get sram pool for ocmcram data\n");
  VAR_12 = -VAR_0;
  goto err_free_sram_code;
 }

 VAR_10->ti_emif_sram_data_virt =
    FUNC_1(VAR_10->sram_pool_data,
            sizeof(struct emif_regs_amx3));
 if (!VAR_10->ti_emif_sram_data_virt) {
  FUNC_0(VAR_9, "Unable to allocate data memory from ocmcram\n");
  VAR_12 = -VAR_1;
  goto err_free_sram_code;
 }


 VAR_10->ti_emif_sram_data_phys =
  FUNC_3(VAR_10->sram_pool_data,
          VAR_10->ti_emif_sram_data_virt);




 VAR_10->pm_functions.save_context =
  FUNC_6(VAR_10,
         (unsigned long)VAR_7);
 VAR_10->pm_functions.enter_sr =
  FUNC_6(VAR_10,
         (unsigned long)VAR_3);
 VAR_10->pm_functions.abort_sr =
  FUNC_6(VAR_10,
         (unsigned long)VAR_2);





 VAR_10->pm_functions.restore_context =
  FUNC_5(VAR_10,
        (unsigned long)VAR_5);
 VAR_10->pm_functions.exit_sr =
  FUNC_5(VAR_10,
        (unsigned long)VAR_4);
 VAR_10->pm_functions.run_hw_leveling =
  FUNC_5(VAR_10,
        (unsigned long)VAR_6);

 VAR_10->pm_data.regs_virt =
  (struct emif_regs_amx3 *)VAR_10->ti_emif_sram_data_virt;
 VAR_10->pm_data.regs_phys = VAR_10->ti_emif_sram_data_phys;

 return 0;

err_free_sram_code:
 FUNC_2(VAR_10->sram_pool_code, VAR_10->ti_emif_sram_virt,
        VAR_8);
 return VAR_12;
}
