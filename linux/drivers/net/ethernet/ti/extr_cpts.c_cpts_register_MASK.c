
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpts {int refclk; int ov_check_period; int * clock; int phc_index; int dev; int info; int cc; int tc; int pool; TYPE_1__* pool_data; int events; int txq; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct cpts*,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ) ;

int FUNC_14(struct cpts *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_12(&VAR_5->txq);
 FUNC_0(&VAR_5->events);
 FUNC_0(&VAR_5->pool);
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  FUNC_8(&VAR_5->pool_data[VAR_7].list, &VAR_5->pool);

 FUNC_4(VAR_5->refclk);

 FUNC_5(VAR_5, VAR_0, VAR_3);
 FUNC_5(VAR_5, VAR_2, VAR_4);

 FUNC_13(&VAR_5->tc, &VAR_5->cc, FUNC_7(FUNC_6()));

 VAR_5->clock = FUNC_10(&VAR_5->info, VAR_5->dev);
 if (FUNC_1(VAR_5->clock)) {
  VAR_6 = FUNC_2(VAR_5->clock);
  VAR_5->clock = ((void*)0);
  goto err_ptp;
 }
 VAR_5->phc_index = FUNC_9(VAR_5->clock);

 FUNC_11(VAR_5->clock, VAR_5->ov_check_period);
 return 0;

err_ptp:
 FUNC_3(VAR_5->refclk);
 return VAR_6;
}
