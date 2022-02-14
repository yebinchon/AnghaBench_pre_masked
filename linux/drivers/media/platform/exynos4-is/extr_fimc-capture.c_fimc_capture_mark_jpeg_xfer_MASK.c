
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; } ;
struct fimc_ctx {TYPE_2__* fimc_dev; TYPE_1__ scaler; } ;
typedef enum fimc_color_fmt { ____Placeholder_fimc_color_fmt } fimc_color_fmt ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fimc_ctx*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct fimc_ctx *VAR_1,
     enum fimc_color_fmt VAR_2)
{
 bool VAR_3 = FUNC_2(VAR_2);

 VAR_1->scaler.enabled = !VAR_3;
 FUNC_1(VAR_1, !VAR_3);

 if (VAR_3)
  FUNC_3(VAR_0, &VAR_1->fimc_dev->state);
 else
  FUNC_0(VAR_0, &VAR_1->fimc_dev->state);
}
