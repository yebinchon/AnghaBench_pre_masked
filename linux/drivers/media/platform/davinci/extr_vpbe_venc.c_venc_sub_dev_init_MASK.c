
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct venc_state {struct v4l2_subdev sd; } ;
struct v4l2_device {int dummy; } ;


 int FUNC_0 (int *,int *,struct venc_state**,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int) ;
 scalar_t__ FUNC_2 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_device*,char*) ;
 int FUNC_4 (struct v4l2_subdev*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct v4l2_subdev*) ;
 int VAR_2 ;

struct v4l2_subdev *FUNC_6(struct v4l2_device *VAR_3,
  const char *VAR_4)
{
 struct venc_state *VAR_5 = ((void*)0);

 FUNC_0(&VAR_0, ((void*)0), &VAR_5,
   VAR_1);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_4(&VAR_5->sd, &VAR_2);

 FUNC_1(VAR_5->sd.name, VAR_4, sizeof(VAR_5->sd.name));
 if (FUNC_2(VAR_3, &VAR_5->sd) < 0) {
  FUNC_3(VAR_3,
   "vpbe unable to register venc sub device\n");
  return ((void*)0);
 }
 if (FUNC_5(&VAR_5->sd)) {
  FUNC_3(VAR_3,
   "vpbe venc initialization failed\n");
  return ((void*)0);
 }

 return &VAR_5->sd;
}
