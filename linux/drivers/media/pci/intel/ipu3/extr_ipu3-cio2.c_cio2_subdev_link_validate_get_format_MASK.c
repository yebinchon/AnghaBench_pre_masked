
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_format {int pad; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int index; int entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct v4l2_subdev* FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_subdev*,struct media_pad*,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_3(struct media_pad *VAR_3,
      struct v4l2_subdev_format *VAR_4)
{
 if (FUNC_0(VAR_3->entity)) {
  struct v4l2_subdev *VAR_5 =
   FUNC_1(VAR_3->entity);

  VAR_4->which = VAR_1;
  VAR_4->pad = VAR_3->index;
  return FUNC_2(VAR_5, VAR_3, VAR_2, ((void*)0), VAR_4);
 }

 return -VAR_0;
}
