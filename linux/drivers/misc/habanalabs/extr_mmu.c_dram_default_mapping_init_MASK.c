
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct asic_fixed_properties {int dram_size_for_default_page_mapping; int dram_page_size; int mmu_dram_default_page_addr; } ;
struct hl_device {int dev; int dram_default_page_mapping; int dram_supports_virtual_memory; struct asic_fixed_properties asic_prop; } ;
struct hl_ctx {scalar_t__ asid; int* dram_default_hops; struct hl_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (struct hl_ctx*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct hl_ctx*) ;
 int FUNC_4 (struct hl_ctx*,int) ;
 int FUNC_5 (struct hl_ctx*) ;
 int FUNC_6 (struct hl_ctx*,int) ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (int,int ) ;
 int FUNC_9 (struct hl_ctx*,int,int) ;
 int FUNC_10 (struct hl_ctx*,int,int) ;

__attribute__((used)) static int FUNC_11(struct hl_ctx *VAR_9)
{
 struct hl_device *VAR_10 = VAR_9->hdev;
 struct asic_fixed_properties *VAR_11 = &VAR_10->asic_prop;
 u64 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
  VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23 = 0;

 if ((!VAR_10->dram_supports_virtual_memory) ||
   (!VAR_10->dram_default_page_mapping) ||
   (VAR_9->asid == VAR_2))
  return 0;

 VAR_12 = VAR_11->dram_size_for_default_page_mapping;
 FUNC_2(VAR_12, VAR_11->dram_page_size);
 FUNC_2(VAR_12, VAR_6);


 VAR_13 = VAR_12 + 2;

 VAR_9->dram_default_hops = FUNC_8(VAR_3 * VAR_13, VAR_1);
 if (!VAR_9->dram_default_hops)
  return -VAR_0;

 VAR_14 = FUNC_5(VAR_9);

 VAR_15 = FUNC_0(VAR_9);
 if (VAR_15 == VAR_8) {
  FUNC_1(VAR_10->dev, "failed to alloc hop 1\n");
  VAR_20 = -VAR_0;
  goto hop1_err;
 }

 VAR_9->dram_default_hops[VAR_13 - 1] = VAR_15;

 VAR_16 = FUNC_0(VAR_9);
 if (VAR_16 == VAR_8) {
  FUNC_1(VAR_10->dev, "failed to alloc hop 2\n");
  VAR_20 = -VAR_0;
  goto hop2_err;
 }

 VAR_9->dram_default_hops[VAR_13 - 2] = VAR_16;

 for (VAR_21 = 0 ; VAR_21 < VAR_12 ; VAR_21++) {
  VAR_9->dram_default_hops[VAR_21] = FUNC_0(VAR_9);
  if (VAR_9->dram_default_hops[VAR_21] == VAR_8) {
   FUNC_1(VAR_10->dev, "failed to alloc hop 3, i: %d\n", VAR_21);
   VAR_20 = -VAR_0;
   goto hop3_err;
  }
  VAR_23++;
 }


 VAR_19 = (VAR_15 & VAR_7) | VAR_5;
 FUNC_10(VAR_9, VAR_14, VAR_19);

 VAR_19 = (VAR_16 & VAR_7) | VAR_5;
 FUNC_10(VAR_9, VAR_15, VAR_19);
 FUNC_6(VAR_9, VAR_15);

 VAR_17 = VAR_16;
 for (VAR_21 = 0 ; VAR_21 < VAR_12 ; VAR_21++) {
  VAR_19 = (VAR_9->dram_default_hops[VAR_21] & VAR_7) |
    VAR_5;
  FUNC_10(VAR_9, VAR_17, VAR_19);
  FUNC_6(VAR_9, VAR_16);
  VAR_17 += VAR_3;
 }

 VAR_19 = (VAR_11->mmu_dram_default_page_addr & VAR_7) |
   VAR_4 | VAR_5;

 for (VAR_21 = 0 ; VAR_21 < VAR_12 ; VAR_21++) {
  VAR_18 = VAR_9->dram_default_hops[VAR_21];
  for (VAR_22 = 0 ; VAR_22 < VAR_6 ; VAR_22++) {
   FUNC_9(VAR_9, VAR_18, VAR_19);
   FUNC_6(VAR_9, VAR_9->dram_default_hops[VAR_21]);
   VAR_18 += VAR_3;
  }
 }

 FUNC_3(VAR_9);

 return 0;

hop3_err:
 for (VAR_21 = 0 ; VAR_21 < VAR_23 ; VAR_21++)
  FUNC_4(VAR_9, VAR_9->dram_default_hops[VAR_21]);

 FUNC_4(VAR_9, VAR_16);
hop2_err:
 FUNC_4(VAR_9, VAR_15);
hop1_err:
 FUNC_7(VAR_9->dram_default_hops);

 return VAR_20;
}
