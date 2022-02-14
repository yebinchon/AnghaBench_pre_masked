
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tv_usec; int tv_sec; } ;
struct omap3isp_stat_data_time32 {int buf; TYPE_1__ ts; } ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;
struct omap3isp_stat_data {int buf; TYPE_2__ ts; } ;
struct ispstat {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct ispstat*,struct omap3isp_stat_data*) ;

int FUNC_2(struct ispstat *VAR_0,
     struct omap3isp_stat_data_time32 *VAR_1)
{
 struct omap3isp_stat_data VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_1->ts.tv_sec = VAR_2;
 VAR_1->ts.tv_usec = VAR_2;
 FUNC_0(&VAR_1->buf, &VAR_2, sizeof(*VAR_1) - sizeof(VAR_1->ts));

 return 0;
}
