
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ width; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct solo_enc_dev {int fmt; int mode; int vidq; struct solo_dev* solo_dev; } ;
struct solo_dev {scalar_t__ video_hsize; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_1 (struct solo_enc_dev*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct solo_enc_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct solo_enc_dev *VAR_6 = FUNC_3(VAR_3);
 struct solo_dev *VAR_7 = VAR_6->solo_dev;
 struct v4l2_pix_format *VAR_8 = &VAR_5->fmt.pix;
 int VAR_9;

 if (FUNC_2(&VAR_6->vidq))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;

 if (VAR_8->width == VAR_7->video_hsize)
  VAR_6->mode = VAR_2;
 else
  VAR_6->mode = VAR_1;


 VAR_6->fmt = VAR_8->pixelformat;
 FUNC_1(VAR_6);
 return 0;
}
