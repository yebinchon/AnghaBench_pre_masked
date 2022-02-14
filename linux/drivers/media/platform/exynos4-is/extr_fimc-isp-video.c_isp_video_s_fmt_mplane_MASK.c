
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int height; int width; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct param_dma_output {int height; int width; int bitwidth; int plane; int order; int format; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pixfmt; struct fimc_fmt const* format; } ;
struct fimc_isp {TYPE_2__ video_capture; } ;
struct fimc_is {int dummy; } ;
struct fimc_fmt {int * depth; int memplanes; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct param_dma_output* FUNC_1 (struct fimc_is*) ;
 int FUNC_2 (struct fimc_isp*,struct v4l2_pix_format_mplane*,struct fimc_fmt const**) ;
 int FUNC_3 () ;
 struct fimc_is* FUNC_4 (struct fimc_isp*) ;
 struct fimc_isp* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct fimc_isp *VAR_6 = FUNC_5(VAR_3);
 struct fimc_is *VAR_7 = FUNC_4(VAR_6);
 struct v4l2_pix_format_mplane *VAR_8 = &VAR_5->fmt.pix_mp;
 const struct fimc_fmt *VAR_9 = ((void*)0);
 struct param_dma_output *VAR_10 = FUNC_1(VAR_7);

 FUNC_2(VAR_6, VAR_8, &VAR_9);

 if (FUNC_0(VAR_9 == ((void*)0)))
  return -VAR_2;

 VAR_10->format = VAR_0;
 VAR_10->order = VAR_1;
 VAR_10->plane = VAR_9->memplanes;
 VAR_10->bitwidth = VAR_9->depth[0];
 VAR_10->width = VAR_8->width;
 VAR_10->height = VAR_8->height;

 FUNC_3();

 VAR_6->video_capture.format = VAR_9;
 VAR_6->video_capture.pixfmt = *VAR_8;

 return 0;
}
