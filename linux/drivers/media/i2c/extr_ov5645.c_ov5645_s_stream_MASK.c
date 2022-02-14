
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ov5645 {int dev; int ctrls; TYPE_1__* current_mode; } ;
struct TYPE_2__ {int height; int width; int data_size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ov5645*,int ,int ) ;
 int FUNC_2 (struct ov5645*,int ,int) ;
 struct ov5645* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct ov5645 *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 if (VAR_5) {
  VAR_7 = FUNC_1(VAR_6,
     VAR_6->current_mode->data,
     VAR_6->current_mode->data_size);
  if (VAR_7 < 0) {
   FUNC_0(VAR_6->dev, "could not set mode %dx%d\n",
    VAR_6->current_mode->width,
    VAR_6->current_mode->height);
   return VAR_7;
  }
  VAR_7 = FUNC_4(&VAR_6->ctrls);
  if (VAR_7 < 0) {
   FUNC_0(VAR_6->dev, "could not sync v4l2 controls\n");
   return VAR_7;
  }

  VAR_7 = FUNC_2(VAR_6, VAR_0, 0x45);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_6, VAR_1,
           VAR_2);
  if (VAR_7 < 0)
   return VAR_7;
 } else {
  VAR_7 = FUNC_2(VAR_6, VAR_0, 0x40);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_6, VAR_1,
           VAR_3);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
