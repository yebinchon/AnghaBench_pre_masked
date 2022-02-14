
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {int streaming; int int_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,struct tvp514x_decoder*) ;
 int FUNC_2 (struct v4l2_subdev*,struct tvp514x_decoder*) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;
 int FUNC_4 (struct v4l2_subdev*,int ) ;
 int FUNC_5 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct tvp514x_decoder *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->streaming == VAR_3)
  return 0;

 switch (VAR_3) {
 case 0:
 {

  VAR_4 = FUNC_3(VAR_2, VAR_1, 0x01);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to turn off decoder\n");
   return VAR_4;
  }
  VAR_5->streaming = VAR_3;
  break;
 }
 case 1:
 {

  VAR_4 = FUNC_4(VAR_2, VAR_5->int_seq);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to turn on decoder\n");
   return VAR_4;
  }

  VAR_4 = FUNC_2(VAR_2, VAR_5);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to detect decoder\n");
   return VAR_4;
  }
  VAR_4 = FUNC_1(VAR_2, VAR_5);
  if (VAR_4) {
   FUNC_5(VAR_2, "Unable to configure decoder\n");
   return VAR_4;
  }
  VAR_5->streaming = VAR_3;
  break;
 }
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
