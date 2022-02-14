
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hl_device {int dev; TYPE_1__* asic_funcs; struct hl_ctx* compute_ctx; } ;
struct hl_ctx {int mmu_lock; } ;
struct TYPE_2__ {scalar_t__ (* read_pte ) (struct hl_device*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct hl_ctx*) ;
 scalar_t__ FUNC_2 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct hl_device*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct hl_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct hl_device *VAR_6, u64 VAR_7,
    u64 *VAR_8)
{
 struct hl_ctx *VAR_9 = VAR_6->compute_ctx;
 u64 VAR_10, VAR_11, VAR_12;
 u64 VAR_13 = VAR_1 | VAR_3;
 int VAR_14 = 0;

 if (!VAR_9) {
  FUNC_0(VAR_6->dev, "no ctx available\n");
  return -VAR_0;
 }

 FUNC_8(&VAR_9->mmu_lock);


 VAR_10 = FUNC_1(VAR_9);
 VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_7);
 VAR_12 = VAR_6->asic_funcs->read_pte(VAR_6, VAR_11);


 VAR_10 = FUNC_7(VAR_12);
 if (VAR_10 == VAR_5)
  goto not_mapped;
 VAR_11 = FUNC_3(VAR_9, VAR_10, VAR_7);
 VAR_12 = VAR_6->asic_funcs->read_pte(VAR_6, VAR_11);


 VAR_10 = FUNC_7(VAR_12);
 if (VAR_10 == VAR_5)
  goto not_mapped;
 VAR_11 = FUNC_4(VAR_9, VAR_10, VAR_7);
 VAR_12 = VAR_6->asic_funcs->read_pte(VAR_6, VAR_11);


 VAR_10 = FUNC_7(VAR_12);
 if (VAR_10 == VAR_5)
  goto not_mapped;
 VAR_11 = FUNC_5(VAR_9, VAR_10, VAR_7);
 VAR_12 = VAR_6->asic_funcs->read_pte(VAR_6, VAR_11);

 if (!(VAR_12 & VAR_2)) {

  VAR_10 = FUNC_7(VAR_12);
  if (VAR_10 == VAR_5)
   goto not_mapped;
  VAR_11 = FUNC_6(VAR_9, VAR_10, VAR_7);
  VAR_12 = VAR_6->asic_funcs->read_pte(VAR_6, VAR_11);

  VAR_13 = VAR_3;
 }

 if (!(VAR_12 & VAR_4))
  goto not_mapped;

 *VAR_8 = (VAR_12 & ~VAR_13) | (VAR_7 & VAR_13);

 goto out;

not_mapped:
 FUNC_0(VAR_6->dev, "virt addr 0x%llx is not mapped to phys addr\n",
   VAR_7);
 VAR_14 = -VAR_0;
out:
 FUNC_9(&VAR_9->mmu_lock);
 return VAR_14;
}
