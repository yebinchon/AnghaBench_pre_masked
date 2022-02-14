
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int enable; scalar_t__ output; scalar_t__ input; } ;


 scalar_t__ VAR_0 ;
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
        u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct tvp5150 *VAR_5 = FUNC_0(VAR_1);

 VAR_5->input = VAR_2;
 VAR_5->output = VAR_3;

 if (VAR_3 == VAR_0)
  VAR_5->enable = 0;
 else
  VAR_5->enable = 1;

 FUNC_1(VAR_1);
 return 0;
}
