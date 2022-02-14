
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct fimc_lite* drv_priv; } ;
struct flite_frame {unsigned long f_width; unsigned long f_height; struct fimc_fmt* fmt; } ;
struct fimc_lite {struct flite_frame out_frame; } ;
struct fimc_fmt {unsigned int memplanes; unsigned long* depth; } ;
struct device {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct fimc_lite *VAR_6 = VAR_1->drv_priv;
 struct flite_frame *VAR_7 = &VAR_6->out_frame;
 const struct fimc_fmt *VAR_8 = VAR_7->fmt;
 unsigned long VAR_9 = VAR_7->f_width * VAR_7->f_height;
 int VAR_10;

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (*VAR_3) {
  if (*VAR_3 != VAR_8->memplanes)
   return -VAR_0;
  for (VAR_10 = 0; VAR_10 < *VAR_3; VAR_10++)
   if (VAR_4[VAR_10] < (VAR_9 * VAR_8->depth[VAR_10]) / 8)
    return -VAR_0;
  return 0;
 }

 *VAR_3 = VAR_8->memplanes;

 for (VAR_10 = 0; VAR_10 < VAR_8->memplanes; VAR_10++)
  VAR_4[VAR_10] = (VAR_9 * VAR_8->depth[VAR_10]) / 8;

 return 0;
}
