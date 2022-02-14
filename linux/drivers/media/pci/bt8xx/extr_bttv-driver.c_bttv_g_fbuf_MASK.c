
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pixelformat; } ;
struct v4l2_framebuffer {TYPE_2__ fmt; int flags; int capability; } ;
struct file {int dummy; } ;
struct bttv_fh {TYPE_1__* ovfmt; struct bttv* btv; } ;
struct bttv {struct v4l2_framebuffer fbuf; } ;
struct TYPE_3__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
    struct v4l2_framebuffer *VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_3;
 struct bttv *VAR_6 = VAR_5->btv;

 *VAR_4 = VAR_6->fbuf;
 VAR_4->capability = VAR_0;
 VAR_4->flags = VAR_1;
 if (VAR_5->ovfmt)
  VAR_4->fmt.pixelformat = VAR_5->ovfmt->fourcc;
 return 0;
}
