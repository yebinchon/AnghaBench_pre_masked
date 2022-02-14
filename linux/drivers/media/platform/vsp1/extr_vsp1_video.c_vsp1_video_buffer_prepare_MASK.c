
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vsp1_video {TYPE_1__* rwpf; } ;
struct TYPE_6__ {scalar_t__* addr; } ;
struct vsp1_vb2_buffer {TYPE_3__ mem; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {unsigned int num_planes; int vb2_queue; } ;
struct v4l2_pix_format_mplane {unsigned int num_planes; TYPE_2__* plane_fmt; } ;
struct TYPE_5__ {scalar_t__ sizeimage; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane format; } ;


 int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct vsp1_vb2_buffer* FUNC_1 (struct vb2_v4l2_buffer*) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,unsigned int) ;
 struct vsp1_video* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vb2_buffer*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_1);
 struct vsp1_video *VAR_3 = FUNC_3(VAR_1->vb2_queue);
 struct vsp1_vb2_buffer *VAR_4 = FUNC_1(VAR_2);
 const struct v4l2_pix_format_mplane *VAR_5 = &VAR_3->rwpf->format;
 unsigned int VAR_6;

 if (VAR_1->num_planes < VAR_5->num_planes)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1->num_planes; ++VAR_6) {
  VAR_4->mem.addr[VAR_6] = FUNC_2(VAR_1, VAR_6);

  if (FUNC_4(VAR_1, VAR_6) < VAR_5->plane_fmt[VAR_6].sizeimage)
   return -VAR_0;
 }

 for ( ; VAR_6 < 3; ++VAR_6)
  VAR_4->mem.addr[VAR_6] = 0;

 return 0;
}
