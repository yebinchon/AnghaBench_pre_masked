
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int colorspace; int pixelformat; int field; } ;
struct TYPE_6__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int field; } ;
struct bttv_fh {TYPE_4__* fmt; TYPE_1__ cap; int height; int width; } ;
struct TYPE_8__ {int fourcc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_2;

 FUNC_0(&VAR_3->fmt.pix, VAR_4->fmt,
    VAR_4->width, VAR_4->height);
 VAR_3->fmt.pix.field = VAR_4->cap.field;
 VAR_3->fmt.pix.pixelformat = VAR_4->fmt->fourcc;
 VAR_3->fmt.pix.colorspace = VAR_0;

 return 0;
}
