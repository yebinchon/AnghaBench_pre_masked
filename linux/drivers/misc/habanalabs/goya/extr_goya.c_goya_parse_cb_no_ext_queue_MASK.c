
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct asic_fixed_properties {int dram_end_address; int dram_user_base_address; int sram_end_address; int sram_user_base_address; } ;
struct hl_device {int dev; struct goya_device* asic_specific; struct asic_fixed_properties asic_prop; } ;
struct hl_cs_parser {int user_cb_size; scalar_t__ user_cb; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hl_device *VAR_2,
     struct hl_cs_parser *VAR_3)
{
 struct asic_fixed_properties *VAR_4 = &VAR_2->asic_prop;
 struct goya_device *VAR_5 = VAR_2->asic_specific;

 if (VAR_5->hw_cap_initialized & VAR_1)
  return 0;


 if (FUNC_1(
   (u64) (uintptr_t) VAR_3->user_cb,
   VAR_3->user_cb_size,
   VAR_4->sram_user_base_address,
   VAR_4->sram_end_address))
  return 0;

 if (FUNC_1(
   (u64) (uintptr_t) VAR_3->user_cb,
   VAR_3->user_cb_size,
   VAR_4->dram_user_base_address,
   VAR_4->dram_end_address))
  return 0;

 FUNC_0(VAR_2->dev,
  "Internal CB address %px + 0x%x is not in SRAM nor in DRAM\n",
  VAR_3->user_cb, VAR_3->user_cb_size);

 return -VAR_0;
}
