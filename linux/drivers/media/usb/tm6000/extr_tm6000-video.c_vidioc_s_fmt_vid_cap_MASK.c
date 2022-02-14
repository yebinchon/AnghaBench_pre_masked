
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pixelformat; int field; int height; int width; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;
struct TYPE_4__ {int field; } ;
struct tm6000_fh {int type; TYPE_1__ vb_vidq; int height; int width; int fmt; struct tm6000_core* dev; } ;
struct tm6000_core {int fourcc; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tm6000_core*) ;
 int FUNC_2 (struct file*,struct tm6000_fh*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct tm6000_fh *VAR_3 = VAR_1;
 struct tm6000_core *VAR_4 = VAR_3->dev;
 int VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->fmt = FUNC_0(VAR_2->fmt.pix.pixelformat);
 VAR_3->width = VAR_2->fmt.pix.width;
 VAR_3->height = VAR_2->fmt.pix.height;
 VAR_3->vb_vidq.field = VAR_2->fmt.pix.field;
 VAR_3->type = VAR_2->type;

 VAR_4->fourcc = VAR_2->fmt.pix.pixelformat;

 FUNC_1(VAR_4);

 return 0;
}
