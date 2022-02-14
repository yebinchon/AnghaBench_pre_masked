
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct asic_fixed_properties {scalar_t__ mmu_dram_default_page_addr; int va_space_dram_end_address; int va_space_dram_start_address; } ;
struct hl_device {int dev; scalar_t__ dram_default_page_mapping; struct asic_fixed_properties asic_prop; } ;
struct hl_ctx {struct hl_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct hl_ctx*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct hl_ctx*) ;
 scalar_t__ FUNC_3 (struct hl_ctx*) ;
 scalar_t__ FUNC_4 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct hl_ctx*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct hl_ctx*,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct hl_ctx*,scalar_t__) ;
 int FUNC_12 (struct hl_ctx*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct hl_ctx *VAR_7, u64 VAR_8)
{
 struct hl_device *VAR_9 = VAR_7->hdev;
 struct asic_fixed_properties *VAR_10 = &VAR_9->asic_prop;
 u64 VAR_11 = 0, VAR_12 = 0,
  VAR_13 = 0, VAR_14 = 0,
  VAR_15 = 0, VAR_16 = 0,
  VAR_17 = 0, VAR_18 = 0,
  VAR_19 = 0, VAR_20 = 0,
  VAR_21;
 bool VAR_22, VAR_23, VAR_24 = 1;

 VAR_22 = FUNC_10(VAR_8, VAR_4,
    VAR_10->va_space_dram_start_address,
    VAR_10->va_space_dram_end_address);

 VAR_11 = FUNC_3(VAR_7);
 VAR_12 = FUNC_4(VAR_7, VAR_11, VAR_8);

 VAR_21 = *(u64 *) (uintptr_t) VAR_12;

 VAR_13 = FUNC_9(VAR_7, VAR_21);

 if (VAR_13 == VAR_6)
  goto not_mapped;

 VAR_14 = FUNC_5(VAR_7, VAR_13, VAR_8);

 VAR_21 = *(u64 *) (uintptr_t) VAR_14;

 VAR_15 = FUNC_9(VAR_7, VAR_21);

 if (VAR_15 == VAR_6)
  goto not_mapped;

 VAR_16 = FUNC_6(VAR_7, VAR_15, VAR_8);

 VAR_21 = *(u64 *) (uintptr_t) VAR_16;

 VAR_17 = FUNC_9(VAR_7, VAR_21);

 if (VAR_17 == VAR_6)
  goto not_mapped;

 VAR_18 = FUNC_7(VAR_7, VAR_17, VAR_8);

 VAR_21 = *(u64 *) (uintptr_t) VAR_18;

 VAR_23 = VAR_21 & VAR_2;

 if (VAR_22 && !VAR_23) {
  FUNC_1(VAR_9->dev,
    "DRAM unmapping should use huge pages only\n");
  return -VAR_0;
 }

 if (!VAR_23) {
  VAR_19 = FUNC_9(VAR_7, VAR_21);

  if (VAR_19 == VAR_6)
   goto not_mapped;

  VAR_20 = FUNC_8(VAR_7, VAR_19, VAR_8);

  VAR_21 = *(u64 *) (uintptr_t) VAR_20;

  VAR_24 = 0;
 }

 if (VAR_9->dram_default_page_mapping && VAR_22) {
  u64 VAR_25 = (VAR_10->mmu_dram_default_page_addr &
    VAR_5) | VAR_2 |
     VAR_3;
  if (VAR_21 == VAR_25) {
   FUNC_1(VAR_9->dev,
    "DRAM: hop3 PTE points to zero page, can't unmap, va: 0x%llx\n",
     VAR_8);
   goto not_mapped;
  }

  if (!(VAR_21 & VAR_3)) {
   FUNC_1(VAR_9->dev,
    "DRAM: hop3 PTE is cleared! can't unmap, va: 0x%llx\n",
     VAR_8);
   goto not_mapped;
  }

  FUNC_12(VAR_7, VAR_18, VAR_25);
  FUNC_11(VAR_7, VAR_17);
 } else {
  if (!(VAR_21 & VAR_3))
   goto not_mapped;

  if (VAR_19)
   FUNC_0(VAR_7, VAR_20);
  else
   FUNC_0(VAR_7, VAR_18);

  if (VAR_19 && !FUNC_11(VAR_7, VAR_19))
   VAR_24 = 1;

  if (!VAR_24)
   goto flush;

  FUNC_0(VAR_7, VAR_18);

  if (FUNC_11(VAR_7, VAR_17))
   goto flush;

  FUNC_0(VAR_7, VAR_16);

  if (FUNC_11(VAR_7, VAR_15))
   goto flush;

  FUNC_0(VAR_7, VAR_14);

  if (FUNC_11(VAR_7, VAR_13))
   goto flush;

  FUNC_0(VAR_7, VAR_12);
 }

flush:
 FUNC_2(VAR_7);

 return 0;

not_mapped:
 FUNC_1(VAR_9->dev, "virt addr 0x%llx is not mapped to phys addr\n",
  VAR_8);

 return -VAR_1;
}
