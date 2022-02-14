
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct asic_fixed_properties {int dram_size_for_default_page_mapping; int dram_page_size; } ;
struct hl_device {int dram_default_page_mapping; int dram_supports_virtual_memory; struct asic_fixed_properties asic_prop; } ;
struct hl_ctx {scalar_t__ asid; int* dram_default_hops; struct hl_device* hdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hl_ctx*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct hl_ctx*) ;
 int FUNC_3 (struct hl_ctx*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct hl_ctx*,int) ;

__attribute__((used)) static void FUNC_6(struct hl_ctx *VAR_3)
{
 struct hl_device *VAR_4 = VAR_3->hdev;
 struct asic_fixed_properties *VAR_5 = &VAR_4->asic_prop;
 u64 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
  VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if ((!VAR_4->dram_supports_virtual_memory) ||
   (!VAR_4->dram_default_page_mapping) ||
   (VAR_3->asid == VAR_0))
  return;

 VAR_6 = VAR_5->dram_size_for_default_page_mapping;
 FUNC_1(VAR_6, VAR_5->dram_page_size);
 FUNC_1(VAR_6, VAR_2);

 VAR_8 = FUNC_3(VAR_3);

 VAR_7 = VAR_6 + 2;
 VAR_9 = VAR_3->dram_default_hops[VAR_7 - 1];
 VAR_10 = VAR_3->dram_default_hops[VAR_7 - 2];

 for (VAR_13 = 0 ; VAR_13 < VAR_6 ; VAR_13++) {
  VAR_12 = VAR_3->dram_default_hops[VAR_13];
  for (VAR_14 = 0 ; VAR_14 < VAR_2 ; VAR_14++) {
   FUNC_0(VAR_3, VAR_12);
   FUNC_5(VAR_3, VAR_3->dram_default_hops[VAR_13]);
   VAR_12 += VAR_1;
  }
 }

 VAR_11 = VAR_10;
 VAR_11 = VAR_10;
 for (VAR_13 = 0 ; VAR_13 < VAR_6 ; VAR_13++) {
  FUNC_0(VAR_3, VAR_11);
  FUNC_5(VAR_3, VAR_10);
  VAR_11 += VAR_1;
 }

 FUNC_0(VAR_3, VAR_9);
 FUNC_5(VAR_3, VAR_9);
 FUNC_0(VAR_3, VAR_8);

 FUNC_4(VAR_3->dram_default_hops);

 FUNC_2(VAR_3);
}
