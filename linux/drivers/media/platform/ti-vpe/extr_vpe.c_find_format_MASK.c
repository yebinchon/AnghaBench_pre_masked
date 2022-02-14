
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpe_fmt {scalar_t__ fourcc; } ;
struct TYPE_3__ {scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;


 unsigned int FUNC_0 (struct vpe_fmt*) ;
 struct vpe_fmt* VAR_0 ;

__attribute__((used)) static struct vpe_fmt *FUNC_1(struct v4l2_format *VAR_1)
{
 struct vpe_fmt *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (VAR_2->fourcc == VAR_1->fmt.pix.pixelformat)
   return VAR_2;
 }

 return ((void*)0);
}
