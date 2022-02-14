
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct asic_fixed_properties {int sram_base_address; int sram_size; } ;
struct hl_device {int dev; scalar_t__ pldm; struct asic_fixed_properties asic_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_device*) ;
 int FUNC_3 (struct hl_device*,int,int,int,int) ;
 int FUNC_4 (struct hl_device*,int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6(struct hl_device *VAR_7, u32 VAR_8)
{
 struct asic_fixed_properties *VAR_9 = &VAR_7->asic_prop;
 u64 VAR_10 = VAR_9->sram_base_address, VAR_11;
 u32 VAR_12 = VAR_7->pldm ? 0x10000 : VAR_9->sram_size;
 u64 VAR_13 = 0x7777777777777777ull;
 int VAR_14, VAR_15;
 u32 VAR_16 = VAR_3 -
     VAR_2;

 VAR_14 = FUNC_3(VAR_7, VAR_10, VAR_12, VAR_13, 0);
 if (VAR_14) {
  FUNC_1(VAR_7->dev, "Failed to clear SRAM in context switch\n");
  return VAR_14;
 }


 VAR_11 = VAR_0 + VAR_5;
 FUNC_0(VAR_2, FUNC_5(VAR_11));

 for (VAR_15 = 1 ; VAR_15 < VAR_1 ; VAR_15++) {
  VAR_11 = VAR_0 + VAR_4 +
       (VAR_15 - 1) * 4;
  FUNC_0(VAR_2 + VAR_16 * VAR_15,
      FUNC_5(VAR_11));
 }

 FUNC_0(VAR_6, 0x200020);

 FUNC_4(VAR_7, VAR_8);

 FUNC_2(VAR_7);

 return 0;
}
