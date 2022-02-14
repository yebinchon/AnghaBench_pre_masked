
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct asic_fixed_properties {scalar_t__ mmu_pgt_size; int mmu_pgt_addr; } ;
struct hl_device {struct goya_device* asic_specific; struct asic_fixed_properties asic_prop; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hl_device*,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hl_device *VAR_3)
{
 struct asic_fixed_properties *VAR_4 = &VAR_3->asic_prop;
 struct goya_device *VAR_5 = VAR_3->asic_specific;
 u64 VAR_6 = VAR_4->mmu_pgt_addr;
 u32 VAR_7 = VAR_4->mmu_pgt_size + VAR_2 +
   VAR_1;

 if (!(VAR_5->hw_cap_initialized & VAR_0))
  return 0;

 return FUNC_0(VAR_3, VAR_6, VAR_7, 0, 1);
}
