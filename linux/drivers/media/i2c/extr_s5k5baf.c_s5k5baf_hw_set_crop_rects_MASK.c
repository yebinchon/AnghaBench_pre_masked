
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_rect {int height; int width; int top; int left; } ;
struct s5k5baf {int error; int req_fiv; struct v4l2_rect crop_source; int apply_cfg; int sd; int compose; struct v4l2_rect crop_sink; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct s5k5baf*) ;
 int FUNC_2 (struct s5k5baf*) ;
 int FUNC_3 (struct s5k5baf*,int ) ;
 int FUNC_4 (struct s5k5baf*) ;
 int FUNC_5 (struct v4l2_rect*,struct v4l2_rect*,struct v4l2_rect*,int *) ;
 int FUNC_6 (struct s5k5baf*,int,int ) ;
 int FUNC_7 (struct s5k5baf*,int ,int ,int ,...) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static int FUNC_9(struct s5k5baf *VAR_6)
{
 struct v4l2_rect *VAR_7, VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_7 = &VAR_6->crop_sink;
 FUNC_7(VAR_6, VAR_2, VAR_7->width, VAR_7->height,
     VAR_7->left, VAR_7->top);

 FUNC_5(&VAR_8, &VAR_6->crop_source, &VAR_6->crop_sink,
   &VAR_6->compose);
 FUNC_7(VAR_6, VAR_3, VAR_8.width, VAR_8.height,
     VAR_8.left, VAR_8.top);

 FUNC_6(VAR_6, 500, VAR_1);
 FUNC_6(VAR_6, 500, VAR_4);
 VAR_9 = FUNC_2(VAR_6);
 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 switch (VAR_9) {
 case 0:
  break;
 case 128:

  FUNC_3(VAR_6, VAR_5);
  VAR_9 = FUNC_2(VAR_6);
  VAR_10 = FUNC_1(VAR_6);
  if (VAR_10 < 0)
   return VAR_10;
  if (VAR_9) {
   FUNC_8(&VAR_6->sd,
     "crop error on max frame interval: %d\n", VAR_9);
   VAR_6->error = -VAR_0;
  }
  FUNC_3(VAR_6, VAR_6->req_fiv);
  FUNC_4(VAR_6);
  break;
 default:
  FUNC_8(&VAR_6->sd, "crop error: %d\n", VAR_9);
  return -VAR_0;
 }

 if (!VAR_6->apply_cfg)
  return 0;

 VAR_7 = &VAR_6->crop_source;
 FUNC_7(VAR_6, FUNC_0(0), VAR_7->width, VAR_7->height);
 FUNC_3(VAR_6, VAR_6->req_fiv);
 FUNC_4(VAR_6);

 return FUNC_1(VAR_6);
}
