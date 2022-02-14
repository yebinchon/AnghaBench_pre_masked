
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct hl_device {int dev; } ;
struct hl_debug_params_bmon {int bw_win; int win_capture; int id; int addr_mask1; int start_addr1; int addr_mask0; int start_addr0; } ;
struct hl_debug_params {size_t reg_idx; struct hl_debug_params_bmon* input; scalar_t__ enable; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__* VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_7,
  struct hl_debug_params *VAR_8)
{
 struct hl_debug_params_bmon *VAR_9;
 u64 VAR_10;
 u32 VAR_11 = 0;

 if (VAR_8->reg_idx >= FUNC_0(VAR_6)) {
  FUNC_2(VAR_7->dev, "Invalid register index in BMON\n");
  return -VAR_1;
 }

 VAR_10 = VAR_6[VAR_8->reg_idx] - VAR_0;

 FUNC_1(VAR_10 + 0x104, 1);

 if (VAR_8->enable) {
  VAR_9 = VAR_8->input;

  if (!VAR_9)
   return -VAR_1;

  FUNC_1(VAR_10 + 0x200, FUNC_3(VAR_9->start_addr0));
  FUNC_1(VAR_10 + 0x204, FUNC_4(VAR_9->start_addr0));
  FUNC_1(VAR_10 + 0x208, FUNC_3(VAR_9->addr_mask0));
  FUNC_1(VAR_10 + 0x20C, FUNC_4(VAR_9->addr_mask0));
  FUNC_1(VAR_10 + 0x240, FUNC_3(VAR_9->start_addr1));
  FUNC_1(VAR_10 + 0x244, FUNC_4(VAR_9->start_addr1));
  FUNC_1(VAR_10 + 0x248, FUNC_3(VAR_9->addr_mask1));
  FUNC_1(VAR_10 + 0x24C, FUNC_4(VAR_9->addr_mask1));
  FUNC_1(VAR_10 + 0x224, 0);
  FUNC_1(VAR_10 + 0x234, 0);
  FUNC_1(VAR_10 + 0x30C, VAR_9->bw_win);
  FUNC_1(VAR_10 + 0x308, VAR_9->win_capture);


  if (VAR_8->reg_idx != VAR_2 &&
    VAR_8->reg_idx != VAR_3 &&
    VAR_8->reg_idx != VAR_4 &&
    VAR_8->reg_idx != VAR_5)
   VAR_11 = 0xA000000;

  FUNC_1(VAR_10 + 0x700, VAR_11 | 0xB00 | (VAR_9->id << 12));
  FUNC_1(VAR_10 + 0x708, VAR_11 | 0xA00 | (VAR_9->id << 12));
  FUNC_1(VAR_10 + 0x70C, VAR_11 | 0xC00 | (VAR_9->id << 12));

  FUNC_1(VAR_10 + 0x100, 0x11);
  FUNC_1(VAR_10 + 0x304, 0x1);
 } else {
  FUNC_1(VAR_10 + 0x200, 0);
  FUNC_1(VAR_10 + 0x204, 0);
  FUNC_1(VAR_10 + 0x208, 0xFFFFFFFF);
  FUNC_1(VAR_10 + 0x20C, 0xFFFFFFFF);
  FUNC_1(VAR_10 + 0x240, 0);
  FUNC_1(VAR_10 + 0x244, 0);
  FUNC_1(VAR_10 + 0x248, 0xFFFFFFFF);
  FUNC_1(VAR_10 + 0x24C, 0xFFFFFFFF);
  FUNC_1(VAR_10 + 0x224, 0xFFFFFFFF);
  FUNC_1(VAR_10 + 0x234, 0x1070F);
  FUNC_1(VAR_10 + 0x30C, 0);
  FUNC_1(VAR_10 + 0x308, 0xFFFF);
  FUNC_1(VAR_10 + 0x700, 0xA000B00);
  FUNC_1(VAR_10 + 0x708, 0xA000A00);
  FUNC_1(VAR_10 + 0x70C, 0xA000C00);
  FUNC_1(VAR_10 + 0x100, 1);
  FUNC_1(VAR_10 + 0x304, 0);
  FUNC_1(VAR_10 + 0x104, 0);
 }

 return 0;
}
