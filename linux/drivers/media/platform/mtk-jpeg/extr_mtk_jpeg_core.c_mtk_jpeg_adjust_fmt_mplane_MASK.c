
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int num_planes; TYPE_3__* plane_fmt; int pixelformat; int height; int width; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {int type; TYPE_1__ fmt; } ;
struct mtk_jpeg_q_data {int * sizeimage; int * bytesperline; TYPE_2__* fmt; int h; int w; } ;
struct mtk_jpeg_ctx {int dummy; } ;
struct TYPE_6__ {int sizeimage; int bytesperline; } ;
struct TYPE_5__ {int colplanes; int fourcc; } ;


 struct mtk_jpeg_q_data* FUNC_0 (struct mtk_jpeg_ctx*,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_jpeg_ctx *VAR_0,
           struct v4l2_format *VAR_1)
{
 struct v4l2_pix_format_mplane *VAR_2 = &VAR_1->fmt.pix_mp;
 struct mtk_jpeg_q_data *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1->type);

 VAR_2->width = VAR_3->w;
 VAR_2->height = VAR_3->h;
 VAR_2->pixelformat = VAR_3->fmt->fourcc;
 VAR_2->num_planes = VAR_3->fmt->colplanes;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_planes; VAR_4++) {
  VAR_2->plane_fmt[VAR_4].bytesperline = VAR_3->bytesperline[VAR_4];
  VAR_2->plane_fmt[VAR_4].sizeimage = VAR_3->sizeimage[VAR_4];
 }
}
