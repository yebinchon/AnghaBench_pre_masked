
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {scalar_t__ output; scalar_t__ input; TYPE_1__* tvp514x_regs; } ;
typedef enum tvp514x_output { ____Placeholder_tvp514x_output } tvp514x_output ;
typedef enum tvp514x_input { ____Placeholder_tvp514x_input } tvp514x_input ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,size_t) ;
 int FUNC_2 (struct v4l2_subdev*,size_t,int) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_6,
    u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct tvp514x_decoder *VAR_10 = FUNC_0(VAR_6);
 int VAR_11;
 enum tvp514x_input VAR_12;
 enum tvp514x_output VAR_13;

 if ((VAR_7 >= VAR_1) ||
   (VAR_8 >= VAR_2))

  return -VAR_0;

 VAR_12 = VAR_7;
 VAR_13 = VAR_8;

 VAR_11 = FUNC_2(VAR_6, VAR_3, VAR_12);
 if (VAR_11)
  return VAR_11;

 VAR_13 |= FUNC_1(VAR_6,
   VAR_4) & 0x7;
 VAR_11 = FUNC_2(VAR_6, VAR_4,
   VAR_13);
 if (VAR_11)
  return VAR_11;

 VAR_10->tvp514x_regs[VAR_3].val = VAR_12;
 VAR_10->tvp514x_regs[VAR_4].val = VAR_13;
 VAR_10->input = VAR_7;
 VAR_10->output = VAR_8;

 FUNC_3(1, VAR_5, VAR_6, "Input set to: %d\n", VAR_12);

 return 0;
}
