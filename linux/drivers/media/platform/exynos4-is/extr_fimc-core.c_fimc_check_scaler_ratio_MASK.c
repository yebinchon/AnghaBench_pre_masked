
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct fimc_ctx {TYPE_1__ scaler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

int FUNC_1(struct fimc_ctx *VAR_3, int VAR_4, int VAR_5,
       int VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_8 == 90 || VAR_8 == 270)
  FUNC_0(VAR_6, VAR_7);

 if (!VAR_3->scaler.enabled)
  return (VAR_4 == VAR_6 && VAR_5 == VAR_7) ? 0 : -VAR_0;

 if ((VAR_4 >= VAR_1 * VAR_6) || (VAR_5 >= VAR_2 * VAR_7))
  return -VAR_0;

 return 0;
}
