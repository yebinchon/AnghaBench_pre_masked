
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int field; int w; } ;
struct TYPE_5__ {TYPE_1__ win; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int field; int w; } ;
struct bttv_fh {TYPE_3__ ov; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct bttv_fh *VAR_3 = VAR_1;

 VAR_2->fmt.win.w = VAR_3->ov.w;
 VAR_2->fmt.win.field = VAR_3->ov.field;

 return 0;
}
