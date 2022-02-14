
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ clipcount; int * clips; } ;
struct TYPE_3__ {TYPE_2__ win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct saa7134_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct saa7134_dev*,TYPE_2__*,int) ;
 struct saa7134_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_format *VAR_4)
{
 struct saa7134_dev *VAR_5 = FUNC_2(VAR_2);

 if (VAR_1 > 0) {
  FUNC_0("V4L2_BUF_TYPE_VIDEO_OVERLAY: no_overlay\n");
  return -VAR_0;
 }

 if (VAR_4->fmt.win.clips == ((void*)0))
  VAR_4->fmt.win.clipcount = 0;
 return FUNC_1(VAR_5, &VAR_4->fmt.win, 1);
}
