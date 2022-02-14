
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fimc_source_info {scalar_t__ fimc_bus_type; } ;
struct TYPE_4__ {struct fimc_ctx* ctx; struct fimc_source_info source_config; } ;
struct fimc_dev {int slock; int state; TYPE_2__* drv_data; TYPE_1__ vid_cap; } ;
struct TYPE_6__ {int * fmt; } ;
struct fimc_ctx {TYPE_3__ s_frame; int d_frame; } ;
struct TYPE_5__ {scalar_t__ alpha_color; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fimc_dev*) ;
 int FUNC_2 (struct fimc_dev*,TYPE_3__*) ;
 int FUNC_3 (struct fimc_dev*,struct fimc_source_info*) ;
 int FUNC_4 (struct fimc_dev*,struct fimc_source_info*) ;
 int FUNC_5 (struct fimc_dev*,struct fimc_source_info*) ;
 int FUNC_6 (struct fimc_ctx*) ;
 int FUNC_7 (struct fimc_ctx*) ;
 int FUNC_8 (struct fimc_ctx*) ;
 int FUNC_9 (struct fimc_ctx*) ;
 int FUNC_10 (struct fimc_ctx*) ;
 int FUNC_11 (struct fimc_ctx*) ;
 int FUNC_12 (struct fimc_ctx*) ;
 int FUNC_13 (struct fimc_ctx*) ;
 int FUNC_14 (struct fimc_ctx*) ;
 int FUNC_15 (struct fimc_ctx*,int *) ;
 int FUNC_16 (struct fimc_ctx*) ;
 int FUNC_17 (struct fimc_ctx*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct fimc_dev *VAR_3)
{
 struct fimc_source_info *VAR_4 = &VAR_3->vid_cap.source_config;
 struct fimc_ctx *VAR_5 = VAR_3->vid_cap.ctx;
 int VAR_6;
 unsigned long VAR_7;

 if (VAR_5 == ((void*)0) || VAR_5->s_frame.fmt == ((void*)0))
  return -VAR_0;

 if (VAR_4->fimc_bus_type == VAR_1) {
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_18(&VAR_3->slock, VAR_7);
 FUNC_15(VAR_5, &VAR_5->d_frame);
 FUNC_17(VAR_5);

 FUNC_3(VAR_3, VAR_4);
 FUNC_5(VAR_3, VAR_4);
 FUNC_4(VAR_3, VAR_4);
 FUNC_2(VAR_3, &VAR_5->s_frame);

 VAR_6 = FUNC_16(VAR_5);
 if (!VAR_6) {
  FUNC_7(VAR_5);
  FUNC_11(VAR_5);
  FUNC_8(VAR_5);
  FUNC_14(VAR_5);
  FUNC_13(VAR_5);
  FUNC_6(VAR_5);
  FUNC_10(VAR_5);
  FUNC_9(VAR_5);
  if (VAR_3->drv_data->alpha_color)
   FUNC_12(VAR_5);
  FUNC_0(VAR_2, &VAR_3->state);
 }
 FUNC_19(&VAR_3->slock, VAR_7);
 return VAR_6;
}
