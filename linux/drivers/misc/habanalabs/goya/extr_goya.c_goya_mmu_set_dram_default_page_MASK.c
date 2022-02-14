
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int mmu_dram_default_page_addr; } ;
struct hl_device {TYPE_1__ asic_prop; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hl_device*,int,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct hl_device *VAR_2)
{
 struct goya_device *VAR_3 = VAR_2->asic_specific;
 u64 VAR_4 = VAR_2->asic_prop.mmu_dram_default_page_addr;
 u32 VAR_5 = VAR_1;
 u64 VAR_6 = 0x9999999999999999ull;

 if (!(VAR_3->hw_cap_initialized & VAR_0))
  return 0;

 return FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6, 1);
}
