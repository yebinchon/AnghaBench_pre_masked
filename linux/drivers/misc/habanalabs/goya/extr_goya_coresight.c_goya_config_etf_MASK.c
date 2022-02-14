
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct hl_device {int dev; } ;
struct hl_debug_params_etf {int sink_mode; } ;
struct hl_debug_params {size_t reg_idx; struct hl_debug_params_etf* input; scalar_t__ enable; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct hl_device*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_4,
  struct hl_debug_params *VAR_5)
{
 struct hl_debug_params_etf *VAR_6;
 u64 VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (VAR_5->reg_idx >= FUNC_0(VAR_3)) {
  FUNC_3(VAR_4->dev, "Invalid register index in ETF\n");
  return -VAR_2;
 }

 VAR_7 = VAR_3[VAR_5->reg_idx] - VAR_0;

 FUNC_2(VAR_7 + 0xFB0, VAR_1);

 VAR_8 = FUNC_1(VAR_7 + 0x304);
 VAR_8 |= 0x1000;
 FUNC_2(VAR_7 + 0x304, VAR_8);
 VAR_8 |= 0x40;
 FUNC_2(VAR_7 + 0x304, VAR_8);

 VAR_9 = FUNC_4(VAR_4, VAR_7 + 0x304, 6, 0);
 if (VAR_9) {
  FUNC_3(VAR_4->dev,
   "Failed to %s ETF on timeout, error %d\n",
    VAR_5->enable ? "enable" : "disable", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_4, VAR_7 + 0xC, 2, 1);
 if (VAR_9) {
  FUNC_3(VAR_4->dev,
   "Failed to %s ETF on timeout, error %d\n",
    VAR_5->enable ? "enable" : "disable", VAR_9);
  return VAR_9;
 }

 FUNC_2(VAR_7 + 0x20, 0);

 if (VAR_5->enable) {
  VAR_6 = VAR_5->input;

  if (!VAR_6)
   return -VAR_2;

  FUNC_2(VAR_7 + 0x34, 0x3FFC);
  FUNC_2(VAR_7 + 0x28, VAR_6->sink_mode);
  FUNC_2(VAR_7 + 0x304, 0x4001);
  FUNC_2(VAR_7 + 0x308, 0xA);
  FUNC_2(VAR_7 + 0x20, 1);
 } else {
  FUNC_2(VAR_7 + 0x34, 0);
  FUNC_2(VAR_7 + 0x28, 0);
  FUNC_2(VAR_7 + 0x304, 0);
 }

 return 0;
}
