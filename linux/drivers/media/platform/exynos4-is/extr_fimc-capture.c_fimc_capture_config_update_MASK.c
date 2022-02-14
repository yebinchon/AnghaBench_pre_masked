
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimc_dev {int state; TYPE_1__* drv_data; } ;
struct fimc_ctx {int d_frame; int s_frame; struct fimc_dev* fimc_dev; } ;
struct TYPE_2__ {scalar_t__ alpha_color; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fimc_dev*,int *) ;
 int FUNC_2 (struct fimc_ctx*) ;
 int FUNC_3 (struct fimc_ctx*) ;
 int FUNC_4 (struct fimc_ctx*) ;
 int FUNC_5 (struct fimc_ctx*) ;
 int FUNC_6 (struct fimc_ctx*) ;
 int FUNC_7 (struct fimc_ctx*) ;
 int FUNC_8 (struct fimc_ctx*) ;
 int FUNC_9 (struct fimc_ctx*,int *) ;
 int FUNC_10 (struct fimc_ctx*) ;

__attribute__((used)) static int FUNC_11(struct fimc_ctx *VAR_1)
{
 struct fimc_dev *VAR_2 = VAR_1->fimc_dev;
 int VAR_3;

 FUNC_1(VAR_2, &VAR_1->s_frame);

 VAR_3 = FUNC_10(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_8(VAR_1);
 FUNC_7(VAR_1);
 FUNC_2(VAR_1);
 FUNC_9(VAR_1, &VAR_1->d_frame);
 FUNC_4(VAR_1);
 if (VAR_2->drv_data->alpha_color)
  FUNC_6(VAR_1);

 FUNC_0(VAR_0, &VAR_2->state);
 return VAR_3;
}
