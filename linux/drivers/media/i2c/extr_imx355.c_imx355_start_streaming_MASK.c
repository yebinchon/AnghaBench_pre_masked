
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imx355_reg_list {int num_of_regs; int regs; } ;
struct TYPE_4__ {int ctrl_handler; } ;
struct imx355 {TYPE_2__ sd; TYPE_1__* cur_mode; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {struct imx355_reg_list reg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct imx355_reg_list VAR_3 ;
 int FUNC_2 (struct imx355*,int ,int,int) ;
 int FUNC_3 (struct imx355*,int ,int ) ;
 struct i2c_client* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct imx355 *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(&VAR_4->sd);
 const struct imx355_reg_list *VAR_6;
 int VAR_7;


 VAR_6 = &VAR_3;
 VAR_7 = FUNC_3(VAR_4, VAR_6->regs, VAR_6->num_of_regs);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "failed to set global settings");
  return VAR_7;
 }


 VAR_6 = &VAR_4->cur_mode->reg_list;
 VAR_7 = FUNC_3(VAR_4, VAR_6->regs, VAR_6->num_of_regs);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "failed to set mode");
  return VAR_7;
 }


 VAR_7 = FUNC_2(VAR_4, VAR_1, 1, 1);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_0(VAR_4->sd.ctrl_handler);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_4, VAR_2,
    1, VAR_0);
}
