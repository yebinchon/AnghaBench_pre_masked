
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct file {int dummy; } ;
struct atmel_isi {size_t num_user_formats; TYPE_1__** user_formats; } ;
struct TYPE_2__ {int fourcc; } ;


 int VAR_0 ;
 struct atmel_isi* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
    struct v4l2_fmtdesc *VAR_3)
{
 struct atmel_isi *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->index >= VAR_4->num_user_formats)
  return -VAR_0;

 VAR_3->pixelformat = VAR_4->user_formats[VAR_3->index]->fourcc;
 return 0;
}
