
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct v4l2_pix_format_mplane {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct ceu_device {int dev; struct v4l2_pix_format_mplane v4l2_pix; } ;
struct TYPE_2__ {scalar_t__ sizeimage; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 struct ceu_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,unsigned int) ;
 int FUNC_3 (struct vb2_buffer*,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct ceu_device *VAR_2 = FUNC_1(VAR_1->vb2_queue);
 struct v4l2_pix_format_mplane *VAR_3 = &VAR_2->v4l2_pix;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_planes; VAR_4++) {
  if (FUNC_2(VAR_1, VAR_4) < VAR_3->plane_fmt[VAR_4].sizeimage) {
   FUNC_0(VAR_2->dev,
    "Plane size too small (%lu < %u)\n",
    FUNC_2(VAR_1, VAR_4),
    VAR_3->plane_fmt[VAR_4].sizeimage);
   return -VAR_0;
  }

  FUNC_3(VAR_1, VAR_4, VAR_3->plane_fmt[VAR_4].sizeimage);
 }

 return 0;
}
