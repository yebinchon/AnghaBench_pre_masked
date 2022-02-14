
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hl_device {int dev; } ;
struct hl_debug_params_stm {int id; int frequency; int sp_mask; int he_mask; } ;
struct hl_debug_params {size_t reg_idx; struct hl_debug_params_stm* input; scalar_t__ enable; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct hl_device*,scalar_t__,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hl_device *VAR_4,
  struct hl_debug_params *VAR_5)
{
 struct hl_debug_params_stm *VAR_6;
 u64 VAR_7;
 int VAR_8;

 if (VAR_5->reg_idx >= FUNC_0(VAR_3)) {
  FUNC_2(VAR_4->dev, "Invalid register index in STM\n");
  return -VAR_2;
 }

 VAR_7 = VAR_3[VAR_5->reg_idx] - VAR_0;

 FUNC_1(VAR_7 + 0xFB0, VAR_1);

 if (VAR_5->enable) {
  VAR_6 = VAR_5->input;

  if (!VAR_6)
   return -VAR_2;

  FUNC_1(VAR_7 + 0xE80, 0x80004);
  FUNC_1(VAR_7 + 0xD64, 7);
  FUNC_1(VAR_7 + 0xD60, 0);
  FUNC_1(VAR_7 + 0xD00, FUNC_4(VAR_6->he_mask));
  FUNC_1(VAR_7 + 0xD20, FUNC_4(VAR_6->sp_mask));
  FUNC_1(VAR_7 + 0xD60, 1);
  FUNC_1(VAR_7 + 0xD00, FUNC_5(VAR_6->he_mask));
  FUNC_1(VAR_7 + 0xD20, FUNC_5(VAR_6->sp_mask));
  FUNC_1(VAR_7 + 0xE70, 0x10);
  FUNC_1(VAR_7 + 0xE60, 0);
  FUNC_1(VAR_7 + 0xE64, 0x420000);
  FUNC_1(VAR_7 + 0xE00, 0xFFFFFFFF);
  FUNC_1(VAR_7 + 0xE20, 0xFFFFFFFF);
  FUNC_1(VAR_7 + 0xEF4, VAR_6->id);
  FUNC_1(VAR_7 + 0xDF4, 0x80);
  FUNC_1(VAR_7 + 0xE8C, VAR_6->frequency);
  FUNC_1(VAR_7 + 0xE90, 0x7FF);
  FUNC_1(VAR_7 + 0xE80, 0x7 | (VAR_6->id << 16));
 } else {
  FUNC_1(VAR_7 + 0xE80, 4);
  FUNC_1(VAR_7 + 0xD64, 0);
  FUNC_1(VAR_7 + 0xD60, 1);
  FUNC_1(VAR_7 + 0xD00, 0);
  FUNC_1(VAR_7 + 0xD20, 0);
  FUNC_1(VAR_7 + 0xD60, 0);
  FUNC_1(VAR_7 + 0xE20, 0);
  FUNC_1(VAR_7 + 0xE00, 0);
  FUNC_1(VAR_7 + 0xDF4, 0x80);
  FUNC_1(VAR_7 + 0xE70, 0);
  FUNC_1(VAR_7 + 0xE60, 0);
  FUNC_1(VAR_7 + 0xE64, 0);
  FUNC_1(VAR_7 + 0xE8C, 0);

  VAR_8 = FUNC_3(VAR_4, VAR_7 + 0xE80, 23, 0);
  if (VAR_8) {
   FUNC_2(VAR_4->dev,
    "Failed to disable STM on timeout, error %d\n",
    VAR_8);
   return VAR_8;
  }

  FUNC_1(VAR_7 + 0xE80, 4);
 }

 return 0;
}
