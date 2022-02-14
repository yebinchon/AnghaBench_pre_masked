
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ov7251 {int lock; int dev; int ctrls; TYPE_1__* current_mode; } ;
struct TYPE_2__ {int height; int width; int data_size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ov7251*,int ,int ) ;
 int FUNC_5 (struct ov7251*,int ,int ) ;
 struct ov7251* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_3, int VAR_4)
{
 struct ov7251 *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 FUNC_2(&VAR_5->lock);

 if (VAR_4) {
  VAR_6 = FUNC_4(VAR_5,
     VAR_5->current_mode->data,
     VAR_5->current_mode->data_size);
  if (VAR_6 < 0) {
   FUNC_1(VAR_5->dev, "could not set mode %dx%d\n",
    VAR_5->current_mode->width,
    VAR_5->current_mode->height);
   goto exit;
  }
  VAR_6 = FUNC_0(&VAR_5->ctrls);
  if (VAR_6 < 0) {
   FUNC_1(VAR_5->dev, "could not sync v4l2 controls\n");
   goto exit;
  }
  VAR_6 = FUNC_5(VAR_5, VAR_0,
           VAR_1);
 } else {
  VAR_6 = FUNC_5(VAR_5, VAR_0,
           VAR_2);
 }

exit:
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
