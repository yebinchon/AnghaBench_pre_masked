
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int height; int width; TYPE_1__* plane_fmt; } ;
struct fimc_frame {struct fimc_fmt* fmt; scalar_t__ offs_v; scalar_t__ offs_h; int height; int width; int o_height; int o_width; int f_height; int f_width; int * payload; int * bytesperline; } ;
struct fimc_fmt {int memplanes; } ;
struct TYPE_2__ {int sizeimage; int bytesperline; } ;



__attribute__((used)) static void FUNC_0(struct fimc_frame *VAR_0, struct fimc_fmt *VAR_1,
          struct v4l2_pix_format_mplane *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->memplanes; VAR_3++) {
  VAR_0->bytesperline[VAR_3] = VAR_2->plane_fmt[VAR_3].bytesperline;
  VAR_0->payload[VAR_3] = VAR_2->plane_fmt[VAR_3].sizeimage;
 }

 VAR_0->f_width = VAR_2->width;
 VAR_0->f_height = VAR_2->height;
 VAR_0->o_width = VAR_2->width;
 VAR_0->o_height = VAR_2->height;
 VAR_0->width = VAR_2->width;
 VAR_0->height = VAR_2->height;
 VAR_0->offs_h = 0;
 VAR_0->offs_v = 0;
 VAR_0->fmt = VAR_1;
}
