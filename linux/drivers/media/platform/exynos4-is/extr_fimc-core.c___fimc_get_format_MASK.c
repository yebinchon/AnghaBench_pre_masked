
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int num_planes; TYPE_3__* plane_fmt; int colorspace; int pixelformat; int field; int height; int width; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct fimc_frame {int * payload; int * bytesperline; TYPE_2__* fmt; int o_height; int o_width; } ;
struct TYPE_6__ {int sizeimage; int bytesperline; } ;
struct TYPE_5__ {int memplanes; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct fimc_frame *VAR_2, struct v4l2_format *VAR_3)
{
 struct v4l2_pix_format_mplane *VAR_4 = &VAR_3->fmt.pix_mp;
 int VAR_5;

 VAR_4->width = VAR_2->o_width;
 VAR_4->height = VAR_2->o_height;
 VAR_4->field = VAR_1;
 VAR_4->pixelformat = VAR_2->fmt->fourcc;
 VAR_4->colorspace = VAR_0;
 VAR_4->num_planes = VAR_2->fmt->memplanes;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_planes; ++VAR_5) {
  VAR_4->plane_fmt[VAR_5].bytesperline = VAR_2->bytesperline[VAR_5];
  VAR_4->plane_fmt[VAR_5].sizeimage = VAR_2->payload[VAR_5];
 }
}
