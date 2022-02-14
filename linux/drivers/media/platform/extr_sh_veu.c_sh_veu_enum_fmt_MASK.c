
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct TYPE_2__ {int fourcc; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct v4l2_fmtdesc *VAR_2, const int *VAR_3, int VAR_4)
{
 if (VAR_2->index >= VAR_4)
  return -VAR_0;

 VAR_2->pixelformat = VAR_1[VAR_3[VAR_2->index]].fourcc;
 return 0;
}
