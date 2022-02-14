
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct asic_fixed_properties {int max_asid; int mmu_hop_table_size; scalar_t__ mmu_pgt_addr; } ;
struct hl_device {int dram_supports_virtual_memory; int dram_default_page_mapping; TYPE_1__* asic_funcs; int dev; int mmu_enable; struct goya_device* asic_specific; struct asic_fixed_properties asic_prop; } ;
struct goya_device {int hw_cap_initialized; } ;
struct TYPE_2__ {int (* mmu_invalidate_cache ) (struct hl_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct hl_device*,int,scalar_t__) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct hl_device*,int) ;

int FUNC_6(struct hl_device *VAR_8)
{
 struct asic_fixed_properties *VAR_9 = &VAR_8->asic_prop;
 struct goya_device *VAR_10 = VAR_8->asic_specific;
 u64 VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_8->mmu_enable)
  return 0;

 if (VAR_10->hw_cap_initialized & VAR_0)
  return 0;

 VAR_8->dram_supports_virtual_memory = 1;
 VAR_8->dram_default_page_mapping = 1;

 for (VAR_13 = 0 ; VAR_13 < VAR_9->max_asid ; VAR_13++) {
  VAR_11 = VAR_9->mmu_pgt_addr +
    (VAR_13 * VAR_9->mmu_hop_table_size);

  VAR_12 = FUNC_3(VAR_8, VAR_13, VAR_11);
  if (VAR_12) {
   FUNC_2(VAR_8->dev,
    "failed to set hop0 addr for asid %d\n", VAR_13);
   goto err;
  }
 }

 VAR_10->hw_cap_initialized |= VAR_0;


 FUNC_0(VAR_5,
    FUNC_4(VAR_1 >> 8));
 FUNC_0(VAR_6, VAR_1 >> 40);


 FUNC_1(VAR_7,
   (~VAR_2));

 VAR_8->asic_funcs->mmu_invalidate_cache(VAR_8, 1);

 FUNC_0(VAR_3, 1);
 FUNC_0(VAR_4, 0xF);

 return 0;

err:
 return VAR_12;
}
