
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long width; unsigned long height; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct tw686x_video_channel {unsigned long width; unsigned long height; int vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tw686x_video_channel*,int ,unsigned long,unsigned long,int) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct tw686x_video_channel* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct tw686x_video_channel *VAR_4 = FUNC_3(VAR_1);
 unsigned long VAR_5;
 bool VAR_6;
 int VAR_7;

 if (FUNC_2(&VAR_4->vidq))
  return -VAR_0;

 VAR_5 = VAR_4->width * VAR_4->height;
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_5 != (VAR_3->fmt.pix.width * VAR_3->fmt.pix.height);
 return FUNC_0(VAR_4, VAR_3->fmt.pix.pixelformat,
     VAR_3->fmt.pix.width, VAR_3->fmt.pix.height,
     VAR_6);
}
