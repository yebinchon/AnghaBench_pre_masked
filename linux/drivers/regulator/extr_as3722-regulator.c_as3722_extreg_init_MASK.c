
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct as3722_regulators {int dev; int as3722; } ;
struct TYPE_2__ {int sleep_ctrl_reg; int sleep_ctrl_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct as3722_regulators *VAR_4, int VAR_5,
  int VAR_6)
{
 int VAR_7;
 unsigned int VAR_8;

 if ((VAR_6 < VAR_0) ||
  (VAR_6 > VAR_1))
  return -VAR_2;

 VAR_8 = VAR_6 << (FUNC_2(VAR_3[VAR_5].sleep_ctrl_mask) - 1);
 VAR_7 = FUNC_0(VAR_4->as3722,
   VAR_3[VAR_5].sleep_ctrl_reg,
   VAR_3[VAR_5].sleep_ctrl_mask, VAR_8);
 if (VAR_7 < 0)
  FUNC_1(VAR_4->dev, "Reg 0x%02x update failed: %d\n",
   VAR_3[VAR_5].sleep_ctrl_reg, VAR_7);
 return VAR_7;
}
