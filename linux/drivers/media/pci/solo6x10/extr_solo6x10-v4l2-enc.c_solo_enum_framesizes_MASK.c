
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct v4l2_frmsizeenum {int index; int type; TYPE_1__ discrete; int pixel_format; } ;
struct solo_enc_dev {struct solo_dev* solo_dev; } ;
struct solo_dev {int video_hsize; int video_vsize; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct solo_enc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_frmsizeenum *VAR_4)
{
 struct solo_enc_dev *VAR_5 = FUNC_1(VAR_2);
 struct solo_dev *VAR_6 = VAR_5->solo_dev;

 if (FUNC_0(VAR_4->pixel_format, VAR_6->type))
  return -VAR_0;

 switch (VAR_4->index) {
 case 0:
  VAR_4->discrete.width = VAR_6->video_hsize >> 1;
  VAR_4->discrete.height = VAR_6->video_vsize;
  break;
 case 1:
  VAR_4->discrete.width = VAR_6->video_hsize;
  VAR_4->discrete.height = VAR_6->video_vsize << 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_4->type = VAR_1;

 return 0;
}
