
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; int entity; } ;
struct isp_video {int dmaqueue_flags; } ;
struct isp_prev_device {int state; int output; int stopping; int wait; int input; struct isp_video video_out; } ;
struct isp_device {int dummy; } ;
struct device {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct isp_video*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (struct isp_device*,int ) ;
 int FUNC_5 (struct isp_device*,int ) ;
 int FUNC_6 (struct isp_device*,int ) ;
 int FUNC_7 (struct isp_device*,int ) ;
 int FUNC_8 (struct isp_prev_device*) ;
 int FUNC_9 (struct isp_prev_device*) ;
 int FUNC_10 (struct isp_prev_device*) ;
 struct device* FUNC_11 (struct isp_prev_device*) ;
 struct isp_device* FUNC_12 (struct isp_prev_device*) ;
 struct isp_prev_device* FUNC_13 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_14(struct v4l2_subdev *VAR_6, int VAR_7)
{
 struct isp_prev_device *VAR_8 = FUNC_13(VAR_6);
 struct isp_video *VAR_9 = &VAR_8->video_out;
 struct isp_device *VAR_10 = FUNC_12(VAR_8);
 struct device *VAR_11 = FUNC_11(VAR_8);

 if (VAR_8->state == 128) {
  if (VAR_7 == 128)
   return 0;

  FUNC_7(VAR_10, VAR_3);
  FUNC_8(VAR_8);
  FUNC_0(&VAR_8->stopping, 0);
  FUNC_10(VAR_8);
 }

 switch (VAR_7) {
 case 130:
  if (VAR_8->output & VAR_5)
   FUNC_5(VAR_10, VAR_2);

  if (VAR_9->dmaqueue_flags & VAR_0 ||
      !(VAR_8->output & VAR_5))
   FUNC_9(VAR_8);

  FUNC_2(VAR_9);
  break;

 case 129:
  if (VAR_8->input == VAR_4)
   FUNC_5(VAR_10, VAR_1);
  if (VAR_8->output & VAR_5)
   FUNC_5(VAR_10, VAR_2);

  FUNC_9(VAR_8);
  break;

 case 128:
  if (FUNC_3(&VAR_6->entity, &VAR_8->wait,
           &VAR_8->stopping))
   FUNC_1(VAR_11, "%s: stop timeout.\n", VAR_6->name);
  FUNC_4(VAR_10, VAR_1);
  FUNC_4(VAR_10, VAR_2);
  FUNC_6(VAR_10, VAR_3);
  FUNC_2(VAR_9);
  break;
 }

 VAR_8->state = VAR_7;
 return 0;
}
