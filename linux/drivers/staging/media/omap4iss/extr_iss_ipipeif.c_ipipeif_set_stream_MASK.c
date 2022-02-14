
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct iss_video {int dmaqueue_flags; } ;
struct iss_ipipeif_device {int state; int output; int stopping; int wait; struct iss_video video_out; } ;
struct iss_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iss_ipipeif_device*) ;
 int FUNC_2 (struct iss_ipipeif_device*,int) ;
 int FUNC_3 (struct iss_ipipeif_device*) ;
 int FUNC_4 (struct iss_ipipeif_device*,int) ;
 int FUNC_5 (struct iss_video*) ;
 int FUNC_6 (struct iss_device*,int ) ;
 int FUNC_7 (struct iss_device*,int ) ;
 int FUNC_8 (int *,int *,int *) ;
 struct iss_device* FUNC_9 (struct iss_ipipeif_device*) ;
 struct iss_ipipeif_device* FUNC_10 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_11(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct iss_ipipeif_device *VAR_6 = FUNC_10(VAR_4);
 struct iss_device *VAR_7 = FUNC_9(VAR_6);
 struct iss_video *VAR_8 = &VAR_6->video_out;
 int VAR_9 = 0;

 if (VAR_6->state == 128) {
  if (VAR_5 == 128)
   return 0;

  FUNC_7(VAR_7, VAR_1);
 }

 switch (VAR_5) {
 case 129:

  FUNC_1(VAR_6);
  FUNC_3(VAR_6);







  if (VAR_6->output & VAR_2 &&
      !(VAR_8->dmaqueue_flags & VAR_3))
   break;

  FUNC_0(&VAR_6->stopping, 0);
  if (VAR_6->output & VAR_2)
   FUNC_4(VAR_6, 1);
  FUNC_2(VAR_6, 1);
  FUNC_5(VAR_8);
  break;

 case 128:
  if (VAR_6->state == 128)
   return 0;
  if (FUNC_8(&VAR_4->entity, &VAR_6->wait,
           &VAR_6->stopping))
   VAR_9 = -VAR_0;

  if (VAR_6->output & VAR_2)
   FUNC_4(VAR_6, 0);
  FUNC_2(VAR_6, 0);
  FUNC_6(VAR_7, VAR_1);
  FUNC_5(VAR_8);
  break;
 }

 VAR_6->state = VAR_5;
 return VAR_9;
}
