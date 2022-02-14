
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct iss_video {int dmaqueue_flags; } ;
struct iss_device {int dummy; } ;
struct iss_csi2_device {int state; int output; int subclk; int phy; int stopping; int wait; struct iss_video video_out; struct iss_device* iss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iss_csi2_device*) ;
 int FUNC_2 (struct iss_csi2_device*,int ,int) ;
 int FUNC_3 (struct iss_csi2_device*,int) ;
 int FUNC_4 (struct iss_csi2_device*,int ) ;
 int FUNC_5 (struct iss_csi2_device*) ;
 int FUNC_6 (struct iss_video*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct iss_device*,struct v4l2_subdev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (struct iss_device*,int ) ;
 int FUNC_12 (struct iss_device*,int ) ;
 struct iss_csi2_device* FUNC_13 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_14(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct iss_csi2_device *VAR_6 = FUNC_13(VAR_4);
 struct iss_device *VAR_7 = VAR_6->iss;
 struct iss_video *VAR_8 = &VAR_6->video_out;
 int VAR_9 = 0;

 if (VAR_6->state == 128) {
  if (VAR_5 == 128)
   return 0;

  FUNC_12(VAR_7, VAR_6->subclk);
 }

 switch (VAR_5) {
 case 129: {
  VAR_9 = FUNC_8(VAR_7, VAR_4);
  if (VAR_9 < 0)
   return VAR_9;

  if (FUNC_7(VAR_6->phy) < 0)
   return -VAR_1;
  FUNC_1(VAR_6);
  FUNC_5(VAR_6);







  if (VAR_6->output & VAR_0 &&
      !(VAR_8->dmaqueue_flags & VAR_3))
   break;

  FUNC_0(&VAR_6->stopping, 0);
  FUNC_2(VAR_6, 0, 1);
  FUNC_3(VAR_6, 1);
  FUNC_6(VAR_8);
  break;
 }
 case 128:
  if (VAR_6->state == 128)
   return 0;
  if (FUNC_10(&VAR_4->entity, &VAR_6->wait,
           &VAR_6->stopping))
   VAR_9 = -VAR_2;
  FUNC_2(VAR_6, 0, 0);
  FUNC_3(VAR_6, 0);
  FUNC_4(VAR_6, 0);
  FUNC_9(VAR_6->phy);
  FUNC_11(VAR_7, VAR_6->subclk);
  FUNC_6(VAR_8);
  break;
 }

 VAR_6->state = VAR_5;
 return VAR_9;
}
