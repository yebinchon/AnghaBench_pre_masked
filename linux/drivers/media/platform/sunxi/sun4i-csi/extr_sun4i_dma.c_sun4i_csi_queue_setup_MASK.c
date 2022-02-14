
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_4__ {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct sun4i_csi {TYPE_2__ fmt; } ;
struct device {int dummy; } ;
struct TYPE_3__ {unsigned int sizeimage; } ;


 int VAR_0 ;
 struct sun4i_csi* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
     unsigned int *VAR_2,
     unsigned int *VAR_3,
     unsigned int VAR_4[],
     struct device *VAR_5[])
{
 struct sun4i_csi *VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7 = VAR_6->fmt.num_planes;
 unsigned int VAR_8;

 if (*VAR_3) {
  if (*VAR_3 != VAR_7)
   return -VAR_0;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   if (VAR_4[VAR_8] < VAR_6->fmt.plane_fmt[VAR_8].sizeimage)
    return -VAR_0;
  return 0;
 }

 *VAR_3 = VAR_7;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_4[VAR_8] = VAR_6->fmt.plane_fmt[VAR_8].sizeimage;

 return 0;
}
