
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct v4l2_pix_format_mplane {unsigned int width; unsigned int height; } ;
struct TYPE_2__ {struct fimc_fmt* format; struct v4l2_pix_format_mplane pixfmt; } ;
struct fimc_isp {TYPE_1__ video_capture; } ;
struct fimc_fmt {unsigned int memplanes; unsigned int* depth; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,unsigned int,int ,int ) ;
 int VAR_3 ;
 struct fimc_isp* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_4,
   unsigned int *VAR_5, unsigned int *VAR_6,
   unsigned int VAR_7[], struct device *VAR_8[])
{
 struct fimc_isp *VAR_9 = FUNC_1(VAR_4);
 struct v4l2_pix_format_mplane *VAR_10 = &VAR_9->video_capture.pixfmt;
 const struct fimc_fmt *VAR_11 = VAR_9->video_capture.format;
 unsigned int VAR_12, VAR_13;

 VAR_12 = VAR_10->width * VAR_10->height;

 if (VAR_11 == ((void*)0))
  return -VAR_0;

 *VAR_5 = FUNC_0(VAR_3, *VAR_5, VAR_2,
      VAR_1);
 if (*VAR_6) {
  if (*VAR_6 != VAR_11->memplanes)
   return -VAR_0;
  for (VAR_13 = 0; VAR_13 < *VAR_6; VAR_13++)
   if (VAR_7[VAR_13] < (VAR_12 * VAR_11->depth[VAR_13]) / 8)
    return -VAR_0;
  return 0;
 }

 *VAR_6 = VAR_11->memplanes;

 for (VAR_13 = 0; VAR_13 < VAR_11->memplanes; VAR_13++)
  VAR_7[VAR_13] = (VAR_12 * VAR_11->depth[VAR_13]) / 8;

 return 0;
}
