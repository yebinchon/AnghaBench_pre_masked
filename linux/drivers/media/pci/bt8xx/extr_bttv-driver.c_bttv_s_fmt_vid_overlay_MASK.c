
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bttv_fh*,struct bttv*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_format *VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_3;
 struct bttv *VAR_6 = VAR_5->btv;

 if (VAR_1 > 0) {
  FUNC_0("V4L2_BUF_TYPE_VIDEO_OVERLAY: no_overlay\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_5, VAR_6, &VAR_4->fmt.win, 1);
}
