
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int val; int id; } ;
struct tvp514x_decoder {TYPE_1__* tvp514x_regs; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;





 int VAR_6 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_subdev*,size_t,int) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_7)
{
 struct v4l2_subdev *VAR_8 = FUNC_1(VAR_7);
 struct tvp514x_decoder *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = -VAR_0, VAR_11;

 VAR_11 = VAR_7->val;

 switch (VAR_7->id) {
 case 131:
  VAR_10 = FUNC_2(VAR_8, VAR_2, VAR_11);
  if (!VAR_10)
   VAR_9->tvp514x_regs[VAR_2].val = VAR_11;
  break;
 case 130:
  VAR_10 = FUNC_2(VAR_8, VAR_3, VAR_11);
  if (!VAR_10)
   VAR_9->tvp514x_regs[VAR_3].val = VAR_11;
  break;
 case 128:
  VAR_10 = FUNC_2(VAR_8, VAR_5, VAR_11);
  if (!VAR_10)
   VAR_9->tvp514x_regs[VAR_5].val = VAR_11;
  break;
 case 129:
  if (VAR_11 == 180)
   VAR_11 = 0x7F;
  else if (VAR_11 == -180)
   VAR_11 = 0x80;
  VAR_10 = FUNC_2(VAR_8, VAR_4, VAR_11);
  if (!VAR_10)
   VAR_9->tvp514x_regs[VAR_4].val = VAR_11;
  break;
 case 132:
  VAR_10 = FUNC_2(VAR_8, VAR_1, VAR_11 ? 0x0f : 0x0c);
  if (!VAR_10)
   VAR_9->tvp514x_regs[VAR_1].val = VAR_11;
  break;
 }

 FUNC_3(1, VAR_6, VAR_8, "Set Control: ID - %d - %d\n",
   VAR_7->id, VAR_7->val);
 return VAR_10;
}
