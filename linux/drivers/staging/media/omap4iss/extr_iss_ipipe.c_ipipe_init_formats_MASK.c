
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; int code; } ;
struct v4l2_subdev_format {TYPE_1__ format; int which; int pad; } ;
struct v4l2_subdev_fh {int * pad; } ;
struct v4l2_subdev {int dummy; } ;
typedef int format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int *,struct v4l2_subdev_format*) ;
 int FUNC_1 (struct v4l2_subdev_format*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, struct v4l2_subdev_fh *VAR_5)
{
 struct v4l2_subdev_format VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.pad = VAR_0;
 VAR_6.which = VAR_5 ? VAR_3 : VAR_2;
 VAR_6.format.code = VAR_1;
 VAR_6.format.width = 4096;
 VAR_6.format.height = 4096;
 FUNC_0(VAR_4, VAR_5 ? VAR_5->pad : ((void*)0), &VAR_6);

 return 0;
}
