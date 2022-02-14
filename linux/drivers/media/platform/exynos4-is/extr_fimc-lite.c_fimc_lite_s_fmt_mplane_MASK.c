
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int width; int height; TYPE_2__* plane_fmt; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct flite_frame {int f_width; int f_height; struct fimc_fmt const* fmt; } ;
struct fimc_lite {int * payload; int vb_queue; struct flite_frame out_frame; } ;
struct fimc_fmt {int* depth; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int sizeimage; } ;


 int VAR_0 ;
 int FUNC_0 (struct fimc_lite*,struct v4l2_pix_format_mplane*,struct fimc_fmt const**) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct fimc_lite* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct v4l2_pix_format_mplane *VAR_4 = &VAR_3->fmt.pix_mp;
 struct fimc_lite *VAR_5 = FUNC_3(VAR_1);
 struct flite_frame *VAR_6 = &VAR_5->out_frame;
 const struct fimc_fmt *VAR_7 = ((void*)0);
 int VAR_8;

 if (FUNC_2(&VAR_5->vb_queue))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5, &VAR_3->fmt.pix_mp, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->fmt = VAR_7;
 VAR_5->payload[0] = FUNC_1((VAR_4->width * VAR_4->height * VAR_7->depth[0]) / 8,
          VAR_4->plane_fmt[0].sizeimage);
 VAR_6->f_width = VAR_4->width;
 VAR_6->f_height = VAR_4->height;

 return 0;
}
