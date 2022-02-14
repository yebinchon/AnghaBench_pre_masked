
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {unsigned int index; int pixelformat; } ;
struct pxa_mbus_pixelfmt {int fourcc; } ;
struct pxa_camera_dev {TYPE_1__* user_formats; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct pxa_mbus_pixelfmt* host_fmt; scalar_t__ code; } ;


 int VAR_0 ;
 struct pxa_camera_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_fmtdesc *VAR_3)
{
 struct pxa_camera_dev *VAR_4 = FUNC_0(VAR_1);
 const struct pxa_mbus_pixelfmt *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_4->user_formats[VAR_6].code; VAR_6++);
 if (VAR_3->index >= VAR_6)
  return -VAR_0;

 VAR_5 = VAR_4->user_formats[VAR_3->index].host_fmt;
 VAR_3->pixelformat = VAR_5->fourcc;
 return 0;
}
