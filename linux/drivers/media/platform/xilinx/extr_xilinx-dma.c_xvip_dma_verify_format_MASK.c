
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ height; scalar_t__ width; scalar_t__ colorspace; } ;
struct xvip_dma {TYPE_2__ format; TYPE_1__* fmtinfo; int pad; } ;
struct TYPE_6__ {scalar_t__ code; scalar_t__ height; scalar_t__ width; scalar_t__ colorspace; } ;
struct v4l2_subdev_format {TYPE_3__ format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {scalar_t__ code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct v4l2_subdev* FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct xvip_dma *VAR_6)
{
 struct v4l2_subdev_format VAR_7;
 struct v4l2_subdev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(&VAR_6->pad, &VAR_7.pad);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 VAR_7.which = VAR_3;
 VAR_9 = FUNC_0(VAR_8, VAR_5, VAR_4, ((void*)0), &VAR_7);
 if (VAR_9 < 0)
  return VAR_9 == -VAR_1 ? -VAR_0 : VAR_9;

 if (VAR_6->fmtinfo->code != VAR_7.format.code ||
     VAR_6->format.height != VAR_7.format.height ||
     VAR_6->format.width != VAR_7.format.width ||
     VAR_6->format.colorspace != VAR_7.format.colorspace)
  return -VAR_0;

 return 0;
}
