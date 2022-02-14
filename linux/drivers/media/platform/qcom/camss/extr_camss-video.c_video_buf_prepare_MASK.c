
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_v4l2_buffer {int field; } ;
struct vb2_buffer {int vb2_queue; } ;
struct v4l2_pix_format_mplane {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct camss_video {TYPE_3__ active_fmt; } ;
struct TYPE_4__ {scalar_t__ sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 struct camss_video* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vb2_buffer*,unsigned int) ;
 int FUNC_3 (struct vb2_buffer*,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3 = FUNC_0(VAR_2);
 struct camss_video *VAR_4 = FUNC_1(VAR_2->vb2_queue);
 const struct v4l2_pix_format_mplane *VAR_5 =
      &VAR_4->active_fmt.fmt.pix_mp;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_planes; VAR_6++) {
  if (VAR_5->plane_fmt[VAR_6].sizeimage > FUNC_2(VAR_2, VAR_6))
   return -VAR_0;

  FUNC_3(VAR_2, VAR_6, VAR_5->plane_fmt[VAR_6].sizeimage);
 }

 VAR_3->field = VAR_1;

 return 0;
}
