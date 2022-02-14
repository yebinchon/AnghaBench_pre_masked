
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {unsigned int index; int pixelformat; } ;
struct TYPE_2__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_fmtdesc *VAR_3)
{
 int VAR_4 = -1, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5].fourcc != -1)
   VAR_4++;
  if ((unsigned int)VAR_4 == VAR_3->index)
   break;
 }
 if (VAR_1 == VAR_5)
  return -VAR_0;

 VAR_3->pixelformat = VAR_2[VAR_5].fourcc;

 return VAR_5;
}
