
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct cx25821_dev {int tvnorm; } ;
struct cx25821_channel {int width; int height; struct cx25821_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx25821_dev*) ;
 struct cx25821_channel* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    v4l2_std_id VAR_3)
{
 struct cx25821_channel *VAR_4 = FUNC_1(VAR_1);
 struct cx25821_dev *VAR_5 = VAR_4->dev;

 if (VAR_5->tvnorm == VAR_3)
  return 0;

 VAR_5->tvnorm = VAR_3;
 VAR_4->width = 720;
 VAR_4->height = (VAR_5->tvnorm & VAR_0) ? 576 : 480;

 FUNC_0(VAR_5);

 return 0;
}
