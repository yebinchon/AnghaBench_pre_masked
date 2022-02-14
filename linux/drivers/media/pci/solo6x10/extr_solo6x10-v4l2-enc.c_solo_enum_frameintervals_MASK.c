
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int numerator; int denominator; } ;
struct TYPE_6__ {int numerator; int denominator; } ;
struct TYPE_5__ {int numerator; int denominator; } ;
struct TYPE_8__ {TYPE_3__ step; TYPE_2__ max; TYPE_1__ min; } ;
struct v4l2_frmivalenum {scalar_t__ width; scalar_t__ height; TYPE_4__ stepwise; int type; scalar_t__ index; int pixel_format; } ;
struct solo_enc_dev {struct solo_dev* solo_dev; } ;
struct solo_dev {scalar_t__ video_hsize; scalar_t__ video_vsize; int fps; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct solo_enc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_frmivalenum *VAR_4)
{
 struct solo_enc_dev *VAR_5 = FUNC_1(VAR_2);
 struct solo_dev *VAR_6 = VAR_5->solo_dev;

 if (FUNC_0(VAR_4->pixel_format, VAR_6->type))
  return -VAR_0;
 if (VAR_4->index)
  return -VAR_0;
 if ((VAR_4->width != VAR_6->video_hsize >> 1 ||
      VAR_4->height != VAR_6->video_vsize) &&
     (VAR_4->width != VAR_6->video_hsize ||
      VAR_4->height != VAR_6->video_vsize << 1))
  return -VAR_0;

 VAR_4->type = VAR_1;

 VAR_4->stepwise.min.numerator = 1;
 VAR_4->stepwise.min.denominator = VAR_6->fps;

 VAR_4->stepwise.max.numerator = 15;
 VAR_4->stepwise.max.denominator = VAR_6->fps;

 VAR_4->stepwise.step.numerator = 1;
 VAR_4->stepwise.step.denominator = VAR_6->fps;

 return 0;
}
