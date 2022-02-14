
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int denominator; int numerator; } ;
struct TYPE_6__ {int numerator; int denominator; } ;
struct TYPE_8__ {TYPE_3__ max; TYPE_3__ step; TYPE_2__ min; } ;
struct v4l2_frmivalenum {scalar_t__ width; scalar_t__ height; scalar_t__ pixel_format; TYPE_4__ stepwise; int type; scalar_t__ index; } ;
struct file {int dummy; } ;
struct TYPE_5__ {scalar_t__ width; scalar_t__ height; } ;
struct aspeed_video {TYPE_1__ detected_timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct aspeed_video* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
         struct v4l2_frmivalenum *VAR_6)
{
 struct aspeed_video *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6->index)
  return -VAR_0;

 if (VAR_6->width != VAR_7->detected_timings.width ||
     VAR_6->height != VAR_7->detected_timings.height)
  return -VAR_0;

 if (VAR_6->pixel_format != VAR_3)
  return -VAR_0;

 VAR_6->type = VAR_2;

 VAR_6->stepwise.min.denominator = VAR_1;
 VAR_6->stepwise.min.numerator = 1;
 VAR_6->stepwise.max.denominator = 1;
 VAR_6->stepwise.max.numerator = 1;
 VAR_6->stepwise.step = VAR_6->stepwise.max;

 return 0;
}
