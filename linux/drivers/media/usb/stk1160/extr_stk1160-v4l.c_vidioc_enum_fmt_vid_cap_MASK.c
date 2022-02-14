
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int fourcc; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
  struct v4l2_fmtdesc *VAR_4)
{
 if (VAR_4->index != 0)
  return -VAR_0;

 VAR_4->pixelformat = VAR_1[VAR_4->index].fourcc;
 return 0;
}
