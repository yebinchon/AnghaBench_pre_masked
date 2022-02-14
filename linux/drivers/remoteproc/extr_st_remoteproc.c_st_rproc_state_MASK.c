
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_rproc {int pwr_reset; TYPE_1__* config; int sw_reset; } ;
struct rproc {struct st_rproc* priv; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pwr_reset; scalar_t__ sw_reset; } ;


 int VAR_0 ;
 struct rproc* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct rproc *VAR_2 = FUNC_0(VAR_1);
 struct st_rproc *VAR_3 = VAR_2->priv;
 int VAR_4 = 0, VAR_5 = 0;

 if (VAR_3->config->sw_reset)
  VAR_4 = FUNC_1(VAR_3->sw_reset);

 if (VAR_3->config->pwr_reset)
  VAR_5 = FUNC_1(VAR_3->pwr_reset);

 if (VAR_4 < 0 || VAR_5 < 0)
  return -VAR_0;

 return !VAR_4 && !VAR_5;
}
