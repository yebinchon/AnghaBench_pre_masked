
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ source_pad; int lock; } ;
struct vsp1_brx {TYPE_1__ entity; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int code; int height; int width; } ;
struct v4l2_subdev_format {unsigned int pad; struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct v4l2_rect* FUNC_1 (struct vsp1_brx*,struct v4l2_subdev_pad_config*,scalar_t__) ;
 int FUNC_2 (struct vsp1_brx*,struct v4l2_subdev_pad_config*,unsigned int,struct v4l2_mbus_framefmt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vsp1_brx* FUNC_5 (struct v4l2_subdev*) ;
 struct v4l2_subdev_pad_config* FUNC_6 (TYPE_1__*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_7 (TYPE_1__*,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_1,
     struct v4l2_subdev_pad_config *VAR_2,
     struct v4l2_subdev_format *VAR_3)
{
 struct vsp1_brx *VAR_4 = FUNC_5(VAR_1);
 struct v4l2_subdev_pad_config *VAR_5;
 struct v4l2_mbus_framefmt *VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_4->entity.lock);

 VAR_5 = FUNC_6(&VAR_4->entity, VAR_2, VAR_3->which);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto done;
 }

 FUNC_2(VAR_4, VAR_5, VAR_3->pad, &VAR_3->format);

 VAR_6 = FUNC_7(&VAR_4->entity, VAR_5, VAR_3->pad);
 *VAR_6 = VAR_3->format;


 if (VAR_3->pad != VAR_4->entity.source_pad) {
  struct v4l2_rect *VAR_8;

  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3->pad);
  VAR_8->left = 0;
  VAR_8->top = 0;
  VAR_8->width = VAR_6->width;
  VAR_8->height = VAR_6->height;
 }


 if (VAR_3->pad == FUNC_0(0)) {
  unsigned int VAR_9;

  for (VAR_9 = 0; VAR_9 <= VAR_4->entity.source_pad; ++VAR_9) {
   VAR_6 = FUNC_7(&VAR_4->entity,
           VAR_5, VAR_9);
   VAR_6->code = VAR_3->format.code;
  }
 }

done:
 FUNC_4(&VAR_4->entity.lock);
 return VAR_7;
}
