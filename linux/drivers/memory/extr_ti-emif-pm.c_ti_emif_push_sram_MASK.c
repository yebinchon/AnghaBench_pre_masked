
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ti_emif_data {int pm_data; int sram_pool_code; scalar_t__ ti_emif_sram_virt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (int ,void*,int *,int) ;
 scalar_t__ FUNC_2 (struct ti_emif_data*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct ti_emif_data *VAR_5)
{
 void *VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(VAR_5->sram_pool_code,
       (void *)VAR_5->ti_emif_sram_virt,
       &VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_0(VAR_4, "Cannot copy emif code to sram\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5,
      (unsigned long)&VAR_1);
 VAR_6 = FUNC_1(VAR_5->sram_pool_code,
       (void *)VAR_7,
       &VAR_5->pm_data,
       sizeof(VAR_5->pm_data));
 if (!VAR_6) {
  FUNC_0(VAR_4, "Cannot copy emif data to code sram\n");
  return -VAR_0;
 }

 return 0;
}
