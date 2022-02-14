
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct fimc_ctx* drv_priv; } ;
struct fimc_frame {unsigned long f_width; unsigned long f_height; unsigned int* payload; struct fimc_fmt* fmt; } ;
struct fimc_fmt {unsigned int memplanes; unsigned long* depth; int color; } ;
struct fimc_ctx {struct fimc_frame d_frame; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,unsigned int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_2,
         unsigned int *VAR_3, unsigned int *VAR_4,
         unsigned int VAR_5[], struct device *VAR_6[])
{
 struct fimc_ctx *VAR_7 = VAR_2->drv_priv;
 struct fimc_frame *VAR_8 = &VAR_7->d_frame;
 struct fimc_fmt *VAR_9 = VAR_8->fmt;
 unsigned long VAR_10 = VAR_8->f_width * VAR_8->f_height;
 int VAR_11;

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 if (*VAR_4) {
  if (*VAR_4 != VAR_9->memplanes)
   return -VAR_0;
  for (VAR_11 = 0; VAR_11 < *VAR_4; VAR_11++)
   if (VAR_5[VAR_11] < (VAR_10 * VAR_9->depth[VAR_11]) / 8)
    return -VAR_0;
  return 0;
 }

 *VAR_4 = VAR_9->memplanes;

 for (VAR_11 = 0; VAR_11 < VAR_9->memplanes; VAR_11++) {
  unsigned int VAR_12 = (VAR_10 * VAR_9->depth[VAR_11]) / 8;

  if (FUNC_0(VAR_9->color))
   VAR_5[VAR_11] = VAR_8->payload[VAR_11];
  else
   VAR_5[VAR_11] = FUNC_1(VAR_1, VAR_12, VAR_8->payload[VAR_11]);
 }

 return 0;
}
