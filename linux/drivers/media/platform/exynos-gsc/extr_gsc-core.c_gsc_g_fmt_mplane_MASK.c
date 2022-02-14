
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int width; int height; int num_planes; TYPE_3__* plane_fmt; int colorspace; int pixelformat; int field; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; int type; } ;
struct gsc_frame {int f_width; int f_height; TYPE_2__* fmt; } ;
struct gsc_ctx {int out_colorspace; } ;
struct TYPE_6__ {int bytesperline; int sizeimage; } ;
struct TYPE_5__ {int num_planes; int* depth; int pixelformat; } ;


 scalar_t__ FUNC_0 (struct gsc_frame*) ;
 int FUNC_1 (struct gsc_frame*) ;
 int VAR_0 ;
 struct gsc_frame* FUNC_2 (struct gsc_ctx*,int ) ;

int FUNC_3(struct gsc_ctx *VAR_1, struct v4l2_format *VAR_2)
{
 struct gsc_frame *VAR_3;
 struct v4l2_pix_format_mplane *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_1, VAR_2->type);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = &VAR_2->fmt.pix_mp;

 VAR_4->width = VAR_3->f_width;
 VAR_4->height = VAR_3->f_height;
 VAR_4->field = VAR_0;
 VAR_4->pixelformat = VAR_3->fmt->pixelformat;
 VAR_4->num_planes = VAR_3->fmt->num_planes;
 VAR_4->colorspace = VAR_1->out_colorspace;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_planes; ++VAR_5) {
  VAR_4->plane_fmt[VAR_5].bytesperline = (VAR_3->f_width *
   VAR_3->fmt->depth[VAR_5]) / 8;
  VAR_4->plane_fmt[VAR_5].sizeimage =
    VAR_4->plane_fmt[VAR_5].bytesperline * VAR_3->f_height;
 }

 return 0;
}
