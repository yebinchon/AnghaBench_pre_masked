
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int dummy; } ;
struct cal_ctx {int external_rate; TYPE_1__* sensor; } ;
struct TYPE_2__ {int name; int ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct cal_ctx*,char*,int ) ;
 int FUNC_1 (struct cal_ctx*,char*,int ) ;
 struct v4l2_ctrl* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_4(struct cal_ctx *VAR_3)
{
 struct v4l2_ctrl *VAR_4;

 if (!VAR_3->sensor)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3->sensor->ctrl_handler, VAR_2);
 if (!VAR_4) {
  FUNC_1(VAR_3, "no pixel rate control in subdev: %s\n",
   VAR_3->sensor->name);
  return -VAR_1;
 }

 VAR_3->external_rate = FUNC_3(VAR_4);
 FUNC_0(3, VAR_3, "sensor Pixel Rate: %d\n", VAR_3->external_rate);

 return 0;
}
