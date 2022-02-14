
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_histogram {int entity; } ;
struct v4l2_rect {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {struct v4l2_rect r; int pad; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int,int) ;
 struct vsp1_histogram* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_rect* FUNC_2 (int *,struct v4l2_subdev_pad_config*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
        struct v4l2_subdev_pad_config *VAR_3,
        struct v4l2_subdev_selection *VAR_4)
{
 struct vsp1_histogram *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_rect *VAR_6;
 struct v4l2_rect *VAR_7;
 unsigned int VAR_8;






 VAR_4->r.left = 0;
 VAR_4->r.top = 0;

 VAR_7 = FUNC_2(&VAR_5->entity, VAR_3, VAR_4->pad,
          VAR_1);
 VAR_4->r.width = FUNC_0(VAR_4->r.width, VAR_7->width / 4, VAR_7->width);
 VAR_8 = 1 << (VAR_7->width * 2 / VAR_4->r.width / 3);
 VAR_4->r.width = VAR_7->width / VAR_8;


 VAR_4->r.height = FUNC_0(VAR_4->r.height, VAR_7->height / 4, VAR_7->height);
 VAR_8 = 1 << (VAR_7->height * 2 / VAR_4->r.height / 3);
 VAR_4->r.height = VAR_7->height / VAR_8;

 VAR_6 = FUNC_2(&VAR_5->entity, VAR_3,
      VAR_4->pad,
      VAR_0);
 *VAR_6 = VAR_4->r;

 return 0;
}
