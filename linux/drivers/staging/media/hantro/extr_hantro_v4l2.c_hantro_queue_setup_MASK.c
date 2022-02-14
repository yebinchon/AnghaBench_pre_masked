
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct v4l2_pix_format_mplane {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct hantro_ctx {struct v4l2_pix_format_mplane src_fmt; struct v4l2_pix_format_mplane dst_fmt; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int sizeimage; } ;


 int VAR_0 ;


 struct hantro_ctx* FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct vb2_queue *VAR_1, unsigned int *VAR_2,
     unsigned int *VAR_3, unsigned int VAR_4[],
     struct device *VAR_5[])
{
 struct hantro_ctx *VAR_6 = FUNC_0(VAR_1);
 struct v4l2_pix_format_mplane *VAR_7;
 int VAR_8;

 switch (VAR_1->type) {
 case 129:
  VAR_7 = &VAR_6->dst_fmt;
  break;
 case 128:
  VAR_7 = &VAR_6->src_fmt;
  break;
 default:
  FUNC_1("invalid queue type: %d\n", VAR_1->type);
  return -VAR_0;
 }

 if (*VAR_3) {
  if (*VAR_3 != VAR_7->num_planes)
   return -VAR_0;
  for (VAR_8 = 0; VAR_8 < VAR_7->num_planes; ++VAR_8)
   if (VAR_4[VAR_8] < VAR_7->plane_fmt[VAR_8].sizeimage)
    return -VAR_0;
  return 0;
 }

 *VAR_3 = VAR_7->num_planes;
 for (VAR_8 = 0; VAR_8 < VAR_7->num_planes; ++VAR_8)
  VAR_4[VAR_8] = VAR_7->plane_fmt[VAR_8].sizeimage;
 return 0;
}
