
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; int entity; } ;
struct isp_video {int dmaqueue_flags; } ;
struct isp_res_device {int state; int stopping; int wait; int input; struct isp_video video_out; } ;
struct isp_device {int dummy; } ;
struct device {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct isp_video*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (struct isp_device*,int) ;
 int FUNC_4 (struct isp_device*,int) ;
 int FUNC_5 (struct isp_device*,int ) ;
 int FUNC_6 (struct isp_device*,int ) ;
 int FUNC_7 (struct isp_res_device*) ;
 int FUNC_8 (struct isp_res_device*) ;
 int FUNC_9 (struct isp_res_device*) ;
 struct device* FUNC_10 (struct isp_res_device*) ;
 struct isp_device* FUNC_11 (struct isp_res_device*) ;
 struct isp_res_device* FUNC_12 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_5, int VAR_6)
{
 struct isp_res_device *VAR_7 = FUNC_12(VAR_5);
 struct isp_video *VAR_8 = &VAR_7->video_out;
 struct isp_device *VAR_9 = FUNC_11(VAR_7);
 struct device *VAR_10 = FUNC_10(VAR_7);

 if (VAR_7->state == 128) {
  if (VAR_6 == 128)
   return 0;

  FUNC_6(VAR_9, VAR_3);
  FUNC_7(VAR_7);
  FUNC_9(VAR_7);
 }

 switch (VAR_6) {
 case 130:
  FUNC_4(VAR_9, VAR_2);
  if (VAR_8->dmaqueue_flags & VAR_0) {
   FUNC_8(VAR_7);
   FUNC_1(VAR_8);
  }
  break;

 case 129:
  if (VAR_7->input == VAR_4)
   FUNC_4(VAR_9, VAR_1);
  FUNC_4(VAR_9, VAR_2);

  FUNC_8(VAR_7);
  break;

 case 128:
  if (FUNC_2(&VAR_5->entity, &VAR_7->wait,
           &VAR_7->stopping))
   FUNC_0(VAR_10, "%s: module stop timeout.\n", VAR_5->name);
  FUNC_3(VAR_9, VAR_1 |
    VAR_2);
  FUNC_5(VAR_9, VAR_3);
  FUNC_1(VAR_8);
  break;
 }

 VAR_7->state = VAR_6;
 return 0;
}
