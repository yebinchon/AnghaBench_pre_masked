
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_2__ {int width; int height; int code; } ;
struct v4l2_subdev_format {TYPE_1__ format; int which; } ;
struct file {int dummy; } ;
struct cx231xx_fh {int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int norm; int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int,...) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8, void *VAR_9, v4l2_std_id VAR_10)
{
 struct cx231xx_fh *VAR_11 = VAR_9;
 struct cx231xx *VAR_12 = VAR_11->dev;
 struct v4l2_subdev_format VAR_13 = {
  .which = VAR_3,
 };
 int VAR_14;

 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_12->norm == VAR_10)
  return 0;

 if (FUNC_3(&VAR_11->vb_vidq))
  return -VAR_0;

 VAR_12->norm = VAR_10;


 VAR_12->width = 720;
 VAR_12->height = (VAR_12->norm & VAR_2) ? 576 : 480;

 FUNC_0(VAR_12, VAR_7, VAR_5, VAR_12->norm);




 VAR_13.format.code = VAR_1;
 VAR_13.format.width = VAR_12->width;
 VAR_13.format.height = VAR_12->height;
 FUNC_0(VAR_12, VAR_4, VAR_6, ((void*)0), &VAR_13);


 FUNC_2(VAR_12);

 return 0;
}
