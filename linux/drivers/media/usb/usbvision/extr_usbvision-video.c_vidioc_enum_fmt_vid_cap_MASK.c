
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4,
     struct v4l2_fmtdesc *VAR_5)
{
 if (VAR_5->index >= VAR_1 - 1)
  return -VAR_0;
 VAR_5->pixelformat = VAR_2[VAR_5->index].format;
 return 0;
}
