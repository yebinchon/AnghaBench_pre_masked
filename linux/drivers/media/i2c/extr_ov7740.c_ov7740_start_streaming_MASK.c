
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrl_handler; } ;
struct ov7740 {TYPE_1__ subdev; TYPE_3__* frmsize; int regmap; TYPE_2__* fmt; } ;
struct TYPE_6__ {int reg_num; int regs; } ;
struct TYPE_5__ {int reg_num; int regs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ov7740 *VAR_0)
{
 int VAR_1;

 if (VAR_0->fmt) {
  VAR_1 = FUNC_1(VAR_0->regmap,
          VAR_0->fmt->regs,
          VAR_0->fmt->reg_num);
  if (VAR_1)
   return VAR_1;
 }

 if (VAR_0->frmsize) {
  VAR_1 = FUNC_1(VAR_0->regmap,
          VAR_0->frmsize->regs,
          VAR_0->frmsize->reg_num);
  if (VAR_1)
   return VAR_1;
 }

 return FUNC_0(VAR_0->subdev.ctrl_handler);
}
