
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_frame {int dummy; } ;
struct fimc_ctx {TYPE_1__* fimc_dev; struct fimc_frame d_frame; struct fimc_frame s_frame; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int v4l2_dev; } ;


 int VAR_0 ;
 struct fimc_frame* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,struct fimc_ctx*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static inline struct fimc_frame *FUNC_3(struct fimc_ctx *VAR_6,
            enum v4l2_buf_type VAR_7)
{
 struct fimc_frame *VAR_8;

 if (VAR_7 == VAR_5 ||
     VAR_7 == VAR_4) {
  if (FUNC_1(VAR_1, VAR_6))
   VAR_8 = &VAR_6->s_frame;
  else
   return FUNC_0(-VAR_0);
 } else if (VAR_7 == VAR_3 ||
     VAR_7 == VAR_2) {
  VAR_8 = &VAR_6->d_frame;
 } else {
  FUNC_2(VAR_6->fimc_dev->v4l2_dev,
   "Wrong buffer/video queue type (%d)\n", VAR_7);
  return FUNC_0(-VAR_0);
 }

 return VAR_8;
}
