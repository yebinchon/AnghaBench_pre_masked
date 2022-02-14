
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct g2d_fmt {scalar_t__ fourcc; } ;


 unsigned int VAR_0 ;
 struct g2d_fmt* VAR_1 ;

__attribute__((used)) static struct g2d_fmt *FUNC_0(struct v4l2_format *VAR_2)
{
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].fourcc == VAR_2->fmt.pix.pixelformat)
   return &VAR_1[VAR_3];
 }
 return ((void*)0);
}
