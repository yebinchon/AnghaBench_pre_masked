
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venc_state {scalar_t__ venc_type; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int height; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct venc_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ,int,struct v4l2_subdev*,char*) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_4,
       struct v4l2_dv_timings *VAR_5)
{
 struct venc_state *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7 = VAR_5->bt.height;
 int VAR_8;

 FUNC_1(VAR_3, 1, VAR_4, "venc_s_dv_timings\n");

 if (VAR_7 == 576)
  return FUNC_5(VAR_4);
 else if (VAR_7 == 480)
  return FUNC_4(VAR_4);
 else if ((VAR_7 == 720) &&
   (VAR_6->venc_type == VAR_2)) {

  VAR_8 = FUNC_6(VAR_4);

  FUNC_2(VAR_4, VAR_1);
  return VAR_8;
 } else if ((VAR_7 == 1080) &&
  (VAR_6->venc_type == VAR_2)) {

  VAR_8 = FUNC_3(VAR_4);

  FUNC_2(VAR_4, VAR_1);
  return VAR_8;
 }
 return -VAR_0;
}
