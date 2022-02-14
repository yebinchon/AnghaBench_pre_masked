
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; int mmu_cache_lock; scalar_t__ pldm; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct hl_device*,int ,int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hl_device *VAR_7,
  bool VAR_8, u32 VAR_9, u64 VAR_10, u64 VAR_11)
{
 struct goya_device *VAR_12 = VAR_7->asic_specific;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 if (!(VAR_12->hw_cap_initialized & VAR_1))
  return;


 if (!VAR_8)
  return;

 if (VAR_7->pldm)
  VAR_14 = VAR_0;
 else
  VAR_14 = VAR_2;

 FUNC_4(&VAR_7->mmu_cache_lock);
 VAR_15 = FUNC_0(VAR_5);

 VAR_16 = ((VAR_15 & VAR_4) + 1) & 0xFF;
 FUNC_1(VAR_5,
   (VAR_15 & VAR_3) | VAR_16);

 VAR_17 = FUNC_3(
  VAR_7,
  VAR_6,
  VAR_13,
  VAR_13 == VAR_16,
  1000,
  VAR_14);

 FUNC_5(&VAR_7->mmu_cache_lock);

 if (VAR_17)
  FUNC_2(VAR_7->dev,
   "Timeout when waiting for MMU cache invalidation\n");
}
