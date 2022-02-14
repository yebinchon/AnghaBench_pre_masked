
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hl_device {int dev; } ;
struct hl_debug_params {size_t reg_idx; scalar_t__ enable; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct hl_device *VAR_4,
  struct hl_debug_params *VAR_5)
{
 u64 VAR_6;

 if (VAR_5->reg_idx >= FUNC_0(VAR_3)) {
  FUNC_2(VAR_4->dev, "Invalid register index in FUNNEL\n");
  return -VAR_2;
 }

 VAR_6 = VAR_3[VAR_5->reg_idx] - VAR_0;

 FUNC_1(VAR_6 + 0xFB0, VAR_1);

 FUNC_1(VAR_6, VAR_5->enable ? 0x33F : 0);

 return 0;
}
