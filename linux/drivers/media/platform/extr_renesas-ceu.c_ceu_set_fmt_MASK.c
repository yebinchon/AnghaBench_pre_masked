
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int code; } ;
struct v4l2_subdev_format {TYPE_2__ format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ceu_subdev {struct v4l2_subdev* v4l2_sd; } ;
struct ceu_device {int field; int v4l2_pix; struct ceu_subdev* sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceu_device*,struct v4l2_format*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_3(struct ceu_device *VAR_4, struct v4l2_format *VAR_5)
{
 struct ceu_subdev *VAR_6 = VAR_4->sd;
 struct v4l2_subdev *VAR_7 = VAR_6->v4l2_sd;
 u32 VAR_8;
 int VAR_9;





 struct v4l2_subdev_format VAR_10 = {
  .which = VAR_1,
 };

 VAR_9 = FUNC_0(VAR_4, VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_10.format.code = VAR_8;
 FUNC_1(&VAR_10.format, &VAR_5->fmt.pix_mp);
 VAR_9 = FUNC_2(VAR_7, VAR_2, VAR_3, ((void*)0), &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_4->v4l2_pix = VAR_5->fmt.pix_mp;
 VAR_4->field = VAR_0;

 return 0;
}
