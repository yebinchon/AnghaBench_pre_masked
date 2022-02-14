
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ov8856_reg_list {int dummy; } ;
struct TYPE_5__ {int ctrl_handler; } ;
struct ov8856 {TYPE_2__ sd; TYPE_1__* cur_mode; } ;
struct i2c_client {int dev; } ;
struct TYPE_6__ {struct ov8856_reg_list reg_list; } ;
struct TYPE_4__ {int link_freq_index; struct ov8856_reg_list reg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (struct ov8856*,int ,int ,int ) ;
 int FUNC_3 (struct ov8856*,struct ov8856_reg_list const*) ;
 struct i2c_client* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct ov8856 *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(&VAR_4->sd);
 const struct ov8856_reg_list *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = VAR_4->cur_mode->link_freq_index;
 VAR_6 = &VAR_3[VAR_7].reg_list;
 VAR_8 = FUNC_3(VAR_4, VAR_6);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "failed to set plls");
  return VAR_8;
 }

 VAR_6 = &VAR_4->cur_mode->reg_list;
 VAR_8 = FUNC_3(VAR_4, VAR_6);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "failed to set mode");
  return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_4->sd.ctrl_handler);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_1,
          VAR_2, VAR_0);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "failed to set stream");
  return VAR_8;
 }

 return 0;
}
