
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pwm_omap_dmtimer_chip {int mutex; int dm_timer; TYPE_2__* pdata; TYPE_1__* dm_timer_pdev; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int (* set_pwm ) (int ,int,int,int ) ;int (* set_match ) (int ,int,int) ;int (* set_load ) (int ,int,int) ;int (* stop ) (int ) ;struct clk* (* get_fclk ) (int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 (struct clk*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct pwm_device*) ;
 int FUNC_9 (struct pwm_device*) ;
 scalar_t__ FUNC_10 (struct pwm_device*) ;
 int FUNC_11 (unsigned long,int) ;
 int FUNC_12 (struct pwm_omap_dmtimer_chip*) ;
 struct clk* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int,int,int ) ;
 struct pwm_omap_dmtimer_chip* FUNC_18 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_19(struct pwm_chip *VAR_5,
       struct pwm_device *VAR_6,
       int VAR_7, int VAR_8)
{
 struct pwm_omap_dmtimer_chip *VAR_9 = FUNC_18(VAR_5);
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 struct clk *VAR_14;
 unsigned long VAR_15;
 bool VAR_16;

 FUNC_2(VAR_5->dev, "requested duty cycle: %d ns, period: %d ns\n",
  VAR_7, VAR_8);

 FUNC_5(&VAR_9->mutex);
 if (VAR_7 == FUNC_8(VAR_6) &&
     VAR_8 == FUNC_9(VAR_6)) {

  FUNC_6(&VAR_9->mutex);
  return 0;
 }

 VAR_14 = VAR_9->pdata->get_fclk(VAR_9->dm_timer);
 if (!VAR_14) {
  FUNC_3(VAR_5->dev, "invalid pmtimer fclk\n");
  goto err_einval;
 }

 VAR_15 = FUNC_1(VAR_14);
 if (!VAR_15) {
  FUNC_3(VAR_5->dev, "invalid pmtimer fclk rate\n");
  goto err_einval;
 }

 FUNC_2(VAR_5->dev, "clk rate: %luHz\n", VAR_15);
 VAR_10 = FUNC_11(VAR_15, VAR_8);
 VAR_11 = FUNC_11(VAR_15, VAR_7);

 if (VAR_10 < 2) {
  FUNC_4(VAR_5->dev,
    "period %d ns too short for clock rate %lu Hz\n",
    VAR_8, VAR_15);
  goto err_einval;
 }

 if (VAR_11 < 1) {
  FUNC_2(VAR_5->dev,
   "duty cycle %d ns is too short for clock rate %lu Hz\n",
   VAR_7, VAR_15);
  FUNC_2(VAR_5->dev, "using minimum of 1 clock cycle\n");
  VAR_11 = 1;
 } else if (VAR_11 >= VAR_10) {
  FUNC_2(VAR_5->dev,
   "duty cycle %d ns is too long for period %d ns at clock rate %lu Hz\n",
   VAR_7, VAR_8, VAR_15);
  FUNC_2(VAR_5->dev, "using maximum of 1 clock cycle less than period\n");
  VAR_11 = VAR_10 - 1;
 }

 FUNC_2(VAR_5->dev, "effective duty cycle: %lld ns, period: %lld ns\n",
  FUNC_0((u64)VAR_2 * VAR_11,
          VAR_15),
  FUNC_0((u64)VAR_2 * VAR_10,
          VAR_15));

 VAR_12 = (VAR_0 - VAR_10) + 1;
 VAR_13 = VAR_12 + VAR_11 - 1;






 VAR_16 = FUNC_7(&VAR_9->dm_timer_pdev->dev);
 if (VAR_16)
  VAR_9->pdata->stop(VAR_9->dm_timer);

 VAR_9->pdata->set_load(VAR_9->dm_timer, 1, VAR_12);
 VAR_9->pdata->set_match(VAR_9->dm_timer, 1, VAR_13);

 FUNC_2(VAR_5->dev, "load value: %#08x (%d), match value: %#08x (%d)\n",
  VAR_12, VAR_12, VAR_13, VAR_13);

 VAR_9->pdata->set_pwm(VAR_9->dm_timer,
         FUNC_10(VAR_6) == VAR_4,
         1,
         VAR_3);


 if (VAR_16)
  FUNC_12(VAR_9);

 FUNC_6(&VAR_9->mutex);

 return 0;

err_einval:
 FUNC_6(&VAR_9->mutex);

 return -VAR_1;
}
