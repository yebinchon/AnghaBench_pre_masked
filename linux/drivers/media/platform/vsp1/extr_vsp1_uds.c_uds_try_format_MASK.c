
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_uds {int entity; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; void* height; void* width; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*,unsigned int,unsigned int) ;
 int FUNC_1 (void*,unsigned int*,unsigned int*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (int *,struct v4l2_subdev_pad_config*,int const) ;

__attribute__((used)) static void FUNC_3(struct vsp1_uds *VAR_6,
      struct v4l2_subdev_pad_config *VAR_7,
      unsigned int VAR_8, struct v4l2_mbus_framefmt *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 switch (VAR_8) {
 case 129:

  if (VAR_9->code != VAR_0 &&
      VAR_9->code != VAR_1)
   VAR_9->code = VAR_1;

  VAR_9->width = FUNC_0(VAR_9->width, VAR_3, VAR_2);
  VAR_9->height = FUNC_0(VAR_9->height, VAR_3, VAR_2);
  break;

 case 128:

  VAR_10 = FUNC_2(&VAR_6->entity, VAR_7,
          129);
  VAR_9->code = VAR_10->code;

  FUNC_1(VAR_10->width, &VAR_11, &VAR_12);
  VAR_9->width = FUNC_0(VAR_9->width, VAR_11, VAR_12);
  FUNC_1(VAR_10->height, &VAR_11, &VAR_12);
  VAR_9->height = FUNC_0(VAR_9->height, VAR_11, VAR_12);
  break;
 }

 VAR_9->field = VAR_5;
 VAR_9->colorspace = VAR_4;
}
