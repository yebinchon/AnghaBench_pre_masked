
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_plane_pix_format {int bytesperline; int sizeimage; } ;
struct v4l2_pix_format_mplane {int width; int height; int colorspace; int field; int pixelformat; int num_planes; struct v4l2_plane_pix_format* plane_fmt; } ;
struct TYPE_2__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct flite_frame {int f_width; int f_height; struct fimc_fmt* fmt; } ;
struct fimc_lite {struct flite_frame out_frame; } ;
struct fimc_fmt {int* depth; int colorspace; int fourcc; int memplanes; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct fimc_lite* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{
 struct fimc_lite *VAR_4 = FUNC_0(VAR_1);
 struct v4l2_pix_format_mplane *VAR_5 = &VAR_3->fmt.pix_mp;
 struct v4l2_plane_pix_format *VAR_6 = &VAR_5->plane_fmt[0];
 struct flite_frame *VAR_7 = &VAR_4->out_frame;
 const struct fimc_fmt *VAR_8 = VAR_7->fmt;

 VAR_6->bytesperline = (VAR_7->f_width * VAR_8->depth[0]) / 8;
 VAR_6->sizeimage = VAR_6->bytesperline * VAR_7->f_height;

 VAR_5->num_planes = VAR_8->memplanes;
 VAR_5->pixelformat = VAR_8->fourcc;
 VAR_5->width = VAR_7->f_width;
 VAR_5->height = VAR_7->f_height;
 VAR_5->field = VAR_0;
 VAR_5->colorspace = VAR_8->colorspace;
 return 0;
}
