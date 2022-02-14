
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int priv; } ;
struct TYPE_7__ {TYPE_4__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct TYPE_6__ {TYPE_4__* cam_mode; } ;
struct gspca_dev {int curr_mode; TYPE_2__ cam; TYPE_4__ pixfmt; TYPE_1__* sd_desc; int queue; } ;
struct file {int dummy; } ;
struct TYPE_5__ {scalar_t__ try_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,struct v4l2_format*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct gspca_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct gspca_dev *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6 = VAR_4->fmt.pix.priv;
 int VAR_7;

 if (FUNC_1(&VAR_5->queue))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_4);
 if (VAR_7 < 0)
  return -VAR_1;

 VAR_5->curr_mode = VAR_7;
 if (VAR_5->sd_desc->try_fmt)

  VAR_5->pixfmt = VAR_4->fmt.pix;
 else
  VAR_5->pixfmt = VAR_5->cam.cam_mode[VAR_7];

 VAR_4->fmt.pix.priv = VAR_6;
 return 0;
}
