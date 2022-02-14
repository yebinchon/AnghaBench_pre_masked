
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int num_planes; int width; int height; TYPE_2__* plane_fmt; } ;
struct TYPE_3__ {int min_width; int min_height; } ;
struct hantro_fmt {int max_depth; scalar_t__ header_size; TYPE_1__ frmsize; } ;
struct hantro_ctx {struct v4l2_pix_format_mplane src_fmt; struct hantro_fmt const* vpu_src_fmt; struct v4l2_pix_format_mplane dst_fmt; struct hantro_fmt const* vpu_dst_fmt; } ;
struct TYPE_4__ {scalar_t__ sizeimage; } ;


 struct hantro_fmt* FUNC_0 (struct hantro_fmt const*,unsigned int,int) ;
 struct hantro_fmt* FUNC_1 (struct hantro_ctx*,unsigned int*) ;
 scalar_t__ FUNC_2 (struct hantro_ctx*) ;
 int FUNC_3 (struct v4l2_pix_format_mplane*,struct hantro_fmt const*) ;

__attribute__((used)) static void
FUNC_4(struct hantro_ctx *VAR_0)
{
 const struct hantro_fmt *VAR_1, *VAR_2;
 struct v4l2_pix_format_mplane *VAR_3;
 unsigned int VAR_4;

 VAR_2 = FUNC_1(VAR_0, &VAR_4);
 VAR_1 = FUNC_0(VAR_2, VAR_4, 1);

 if (FUNC_2(VAR_0)) {
  VAR_0->vpu_dst_fmt = VAR_1;
  VAR_3 = &VAR_0->dst_fmt;
 } else {
  VAR_0->vpu_src_fmt = VAR_1;
  VAR_3 = &VAR_0->src_fmt;
 }

 FUNC_3(VAR_3, VAR_1);
 VAR_3->num_planes = 1;
 VAR_3->width = VAR_1->frmsize.min_width;
 VAR_3->height = VAR_1->frmsize.min_height;
 VAR_3->plane_fmt[0].sizeimage = VAR_1->header_size +
    VAR_3->width * VAR_3->height * VAR_1->max_depth;
}
