
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int card_name; int dram_size; } ;
struct asic_fixed_properties {scalar_t__ dram_base_address; TYPE_1__ armcp_info; scalar_t__ dram_end_address; scalar_t__ dram_size; } ;
struct hl_device {int dev; struct asic_fixed_properties asic_prop; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct hl_device*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(struct hl_device *VAR_4)
{
 struct goya_device *VAR_5 = VAR_4->asic_specific;
 struct asic_fixed_properties *VAR_6 = &VAR_4->asic_prop;
 u64 VAR_7;
 int VAR_8;

 if (!(VAR_5->hw_cap_initialized & VAR_3))
  return 0;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_6->armcp_info.dram_size);
 if (VAR_7) {
  if ((!FUNC_2(VAR_7)) ||
    (VAR_7 < VAR_1)) {
   FUNC_0(VAR_4->dev,
    "F/W reported invalid DRAM size %llu. Trying to use default size\n",
    VAR_7);
   VAR_7 = VAR_1;
  }

  VAR_6->dram_size = VAR_7;
  VAR_6->dram_end_address = VAR_6->dram_base_address + VAR_7;
 }

 if (!FUNC_4(VAR_6->armcp_info.card_name))
  FUNC_5(VAR_6->armcp_info.card_name, VAR_2,
    VAR_0);

 return 0;
}
