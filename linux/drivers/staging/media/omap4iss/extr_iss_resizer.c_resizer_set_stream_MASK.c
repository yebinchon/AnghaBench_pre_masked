
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct iss_video {int dmaqueue_flags; } ;
struct iss_resizer_device {int state; int output; int stopping; int wait; struct iss_video video_out; } ;
struct iss_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iss_device*,int ,int ,int ) ;
 int FUNC_2 (struct iss_device*,int ,int ,int ) ;
 int FUNC_3 (struct iss_video*) ;
 int FUNC_4 (struct iss_device*,int ) ;
 int FUNC_5 (struct iss_device*,int ) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (struct iss_resizer_device*) ;
 int FUNC_8 (struct iss_resizer_device*,int) ;
 int FUNC_9 (struct iss_resizer_device*) ;
 struct iss_device* FUNC_10 (struct iss_resizer_device*) ;
 struct iss_resizer_device* FUNC_11 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_12(struct v4l2_subdev *VAR_11, int VAR_12)
{
 struct iss_resizer_device *VAR_13 = FUNC_11(VAR_11);
 struct iss_device *VAR_14 = FUNC_10(VAR_13);
 struct iss_video *VAR_15 = &VAR_13->video_out;
 int VAR_16 = 0;

 if (VAR_13->state == 128) {
  if (VAR_12 == 128)
   return 0;

  FUNC_5(VAR_14, VAR_2);

  FUNC_2(VAR_14, VAR_3, VAR_5,
       VAR_6);
  FUNC_2(VAR_14, VAR_3, VAR_7,
       VAR_8);


  FUNC_2(VAR_14, VAR_3, VAR_9,
       VAR_10);
 }

 switch (VAR_12) {
 case 129:

  FUNC_7(VAR_13);
  FUNC_9(VAR_13);







  if (VAR_13->output & VAR_4 &&
      !(VAR_15->dmaqueue_flags & VAR_1))
   break;

  FUNC_0(&VAR_13->stopping, 0);
  FUNC_8(VAR_13, 1);
  FUNC_3(VAR_15);
  break;

 case 128:
  if (VAR_13->state == 128)
   return 0;
  if (FUNC_6(&VAR_11->entity, &VAR_13->wait,
           &VAR_13->stopping))
   VAR_16 = -VAR_0;

  FUNC_8(VAR_13, 0);
  FUNC_1(VAR_14, VAR_3, VAR_9,
       VAR_10);
  FUNC_1(VAR_14, VAR_3, VAR_7,
       VAR_8);
  FUNC_1(VAR_14, VAR_3, VAR_5,
       VAR_6);
  FUNC_4(VAR_14, VAR_2);
  FUNC_3(VAR_15);
  break;
 }

 VAR_13->state = VAR_12;
 return VAR_16;
}
