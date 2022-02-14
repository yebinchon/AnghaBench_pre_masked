
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dev; int mmu_cache_lock; scalar_t__ pldm; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_device*,int ,int ,int,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hl_device *VAR_4, bool VAR_5)
{
 struct goya_device *VAR_6 = VAR_4->asic_specific;
 u32 VAR_7, VAR_8;
 int VAR_9;

 if (!(VAR_6->hw_cap_initialized & VAR_1))
  return;


 if (!VAR_5)
  return;

 if (VAR_4->pldm)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_2;

 FUNC_3(&VAR_4->mmu_cache_lock);


 FUNC_0(VAR_3, 1);

 VAR_9 = FUNC_2(
  VAR_4,
  VAR_3,
  VAR_7,
  !VAR_7,
  1000,
  VAR_8);

 FUNC_4(&VAR_4->mmu_cache_lock);

 if (VAR_9)
  FUNC_1(VAR_4->dev,
   "Timeout when waiting for MMU cache invalidation\n");
}
