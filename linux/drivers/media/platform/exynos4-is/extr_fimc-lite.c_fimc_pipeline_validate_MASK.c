
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ width; scalar_t__ height; scalar_t__ code; } ;
struct v4l2_subdev_format {TYPE_4__ format; void* which; int pad; } ;
struct TYPE_5__ {struct media_pad* pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct media_pad {int flags; int index; int entity; } ;
struct flite_frame {scalar_t__ f_width; scalar_t__ f_height; } ;
struct TYPE_7__ {TYPE_2__* fmt; } ;
struct fimc_lite {TYPE_3__ inp_frame; struct flite_frame out_frame; struct v4l2_subdev subdev; } ;
struct TYPE_6__ {scalar_t__ mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_2 (int ) ;
 int FUNC_3 (struct v4l2_subdev*,struct media_pad*,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_4(struct fimc_lite *VAR_5)
{
 struct v4l2_subdev *VAR_6 = &VAR_5->subdev;
 struct v4l2_subdev_format VAR_7, VAR_8;
 struct media_pad *VAR_9;
 int VAR_10;

 while (1) {

  VAR_9 = &VAR_6->entity.pads[0];
  if (!(VAR_9->flags & VAR_2))
   break;

  if (VAR_6 == &VAR_5->subdev) {
   struct flite_frame *VAR_11 = &VAR_5->out_frame;
   VAR_7.format.width = VAR_11->f_width;
   VAR_7.format.height = VAR_11->f_height;
   VAR_7.format.code = VAR_5->inp_frame.fmt->mbus_code;
  } else {
   VAR_7.pad = VAR_9->index;
   VAR_7.which = VAR_3;
   VAR_10 = FUNC_3(VAR_6, VAR_9, VAR_4, ((void*)0),
            &VAR_7);
   if (VAR_10 < 0 && VAR_10 != -VAR_0)
    return -VAR_1;
  }

  VAR_9 = FUNC_1(VAR_9);
  if (!VAR_9 || !FUNC_0(VAR_9->entity))
   break;

  VAR_6 = FUNC_2(VAR_9->entity);
  VAR_8.pad = VAR_9->index;
  VAR_8.which = VAR_3;
  VAR_10 = FUNC_3(VAR_6, VAR_9, VAR_4, ((void*)0), &VAR_8);
  if (VAR_10 < 0 && VAR_10 != -VAR_0)
   return -VAR_1;

  if (VAR_8.format.width != VAR_7.format.width ||
      VAR_8.format.height != VAR_7.format.height ||
      VAR_8.format.code != VAR_7.format.code)
   return -VAR_1;
 }
 return 0;
}
