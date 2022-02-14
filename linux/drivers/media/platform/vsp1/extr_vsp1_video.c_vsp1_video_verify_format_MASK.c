
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vsp1_video {TYPE_3__* rwpf; int pad; } ;
struct TYPE_8__ {scalar_t__ code; scalar_t__ height; scalar_t__ width; } ;
struct v4l2_subdev_format {TYPE_4__ format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_6__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_7__ {TYPE_2__ format; TYPE_1__* fmtinfo; } ;
struct TYPE_5__ {scalar_t__ mbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct v4l2_subdev* FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct vsp1_video *VAR_5)
{
 struct v4l2_subdev_format VAR_6;
 struct v4l2_subdev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(&VAR_5->pad, &VAR_6.pad);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_6.which = VAR_2;
 VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_3, ((void*)0), &VAR_6);
 if (VAR_8 < 0)
  return VAR_8 == -VAR_1 ? -VAR_0 : VAR_8;

 if (VAR_5->rwpf->fmtinfo->mbus != VAR_6.format.code ||
     VAR_5->rwpf->format.height != VAR_6.format.height ||
     VAR_5->rwpf->format.width != VAR_6.format.width)
  return -VAR_0;

 return 0;
}
