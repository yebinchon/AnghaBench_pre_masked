
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; } ;
struct hl_debug_params_spmu {int event_types_num; int* event_types; } ;
struct hl_debug_params {size_t reg_idx; int* output; int output_size; struct hl_debug_params_spmu* input; scalar_t__ enable; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int* VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct hl_device *VAR_5,
  struct hl_debug_params *VAR_6)
{
 u64 VAR_7;
 struct hl_debug_params_spmu *VAR_8 = VAR_6->input;
 u64 *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 int VAR_14;

 if (VAR_6->reg_idx >= FUNC_0(VAR_4)) {
  FUNC_3(VAR_5->dev, "Invalid register index in SPMU\n");
  return -VAR_1;
 }

 VAR_7 = VAR_4[VAR_6->reg_idx] - VAR_0;

 if (VAR_6->enable) {
  VAR_8 = VAR_6->input;

  if (!VAR_8)
   return -VAR_1;

  if (VAR_8->event_types_num < 3) {
   FUNC_3(VAR_5->dev,
    "not enough event types values for SPMU enable\n");
   return -VAR_1;
  }

  if (VAR_8->event_types_num > VAR_3) {
   FUNC_3(VAR_5->dev,
    "too many event types values for SPMU enable\n");
   return -VAR_1;
  }

  FUNC_2(VAR_7 + 0xE04, 0x41013046);
  FUNC_2(VAR_7 + 0xE04, 0x41013040);

  for (VAR_14 = 0 ; VAR_14 < VAR_8->event_types_num ; VAR_14++)
   FUNC_2(VAR_7 + VAR_2 + VAR_14 * 4,
    VAR_8->event_types[VAR_14]);

  FUNC_2(VAR_7 + 0xE04, 0x41013041);
  FUNC_2(VAR_7 + 0xC00, 0x8000003F);
 } else {
  VAR_9 = VAR_6->output;
  VAR_10 = VAR_6->output_size / 8;
  VAR_11 = VAR_10 - 2;
  VAR_12 = VAR_10 - 2;
  VAR_13 = VAR_10 - 1;

  if (!VAR_9)
   return -VAR_1;

  if (VAR_10 < 3) {
   FUNC_3(VAR_5->dev,
    "not enough values for SPMU disable\n");
   return -VAR_1;
  }

  if (VAR_11 > VAR_3) {
   FUNC_3(VAR_5->dev,
    "too many events values for SPMU disable\n");
   return -VAR_1;
  }

  FUNC_2(VAR_7 + 0xE04, 0x41013040);

  for (VAR_14 = 0 ; VAR_14 < VAR_11 ; VAR_14++)
   VAR_9[VAR_14] = FUNC_1(VAR_7 + VAR_14 * 8);

  VAR_9[VAR_12] = FUNC_1(VAR_7 + 0xCC0);

  VAR_9[VAR_13] = FUNC_1(VAR_7 + 0xFC);
  VAR_9[VAR_13] <<= 32;
  VAR_9[VAR_13] |= FUNC_1(VAR_7 + 0xF8);

  FUNC_2(VAR_7 + 0xCC0, 0);
 }

 return 0;
}
