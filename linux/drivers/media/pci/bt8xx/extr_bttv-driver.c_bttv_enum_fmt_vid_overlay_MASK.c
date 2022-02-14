
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_fmtdesc*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     struct v4l2_fmtdesc *VAR_6)
{
 int VAR_7;

 if (VAR_3 > 0) {
  FUNC_1("V4L2_BUF_TYPE_VIDEO_OVERLAY: no_overlay\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 < 0)
  return VAR_7;

 if (!(VAR_2[VAR_7].flags & VAR_1))
  return -VAR_0;

 return 0;
}
