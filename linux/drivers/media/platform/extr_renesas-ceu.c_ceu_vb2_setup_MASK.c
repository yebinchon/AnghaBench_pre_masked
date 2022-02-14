
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct device {int dummy; } ;
struct ceu_device {struct v4l2_pix_format_mplane v4l2_pix; } ;
struct TYPE_2__ {unsigned int sizeimage; } ;


 int VAR_0 ;
 struct ceu_device* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1, unsigned int *VAR_2,
    unsigned int *VAR_3, unsigned int VAR_4[],
    struct device *VAR_5[])
{
 struct ceu_device *VAR_6 = FUNC_0(VAR_1);
 struct v4l2_pix_format_mplane *VAR_7 = &VAR_6->v4l2_pix;
 unsigned int VAR_8;


 if (*VAR_3) {
  for (VAR_8 = 0; VAR_8 < VAR_7->num_planes; VAR_8++)
   if (VAR_4[VAR_8] < VAR_7->plane_fmt[VAR_8].sizeimage)
    return -VAR_0;

  return 0;
 }


 *VAR_3 = VAR_7->num_planes;
 for (VAR_8 = 0; VAR_8 < VAR_7->num_planes; VAR_8++)
  VAR_4[VAR_8] = VAR_7->plane_fmt[VAR_8].sizeimage;

 return 0;
}
