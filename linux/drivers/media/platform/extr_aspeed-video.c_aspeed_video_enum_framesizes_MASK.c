
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; int type; TYPE_1__ discrete; scalar_t__ index; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int height; int width; } ;
struct aspeed_video {TYPE_2__ pix_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct aspeed_video* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
     struct v4l2_frmsizeenum *VAR_5)
{
 struct aspeed_video *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->index)
  return -VAR_0;

 if (VAR_5->pixel_format != VAR_2)
  return -VAR_0;

 VAR_5->discrete.width = VAR_6->pix_fmt.width;
 VAR_5->discrete.height = VAR_6->pix_fmt.height;
 VAR_5->type = VAR_1;

 return 0;
}
