
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * ops; TYPE_2__* dev; } ;
struct pwm_omap_dmtimer_chip {int * dm_timer; struct omap_dm_timer_ops const* pdata; TYPE_1__ chip; int mutex; struct platform_device* dm_timer_pdev; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct omap_dm_timer_ops {int (* free ) (int *) ;int (* set_source ) (int *,int ) ;int (* set_prescaler ) (int *,int ) ;int (* stop ) (int *) ;int * (* request_by_node ) (struct device_node*) ;int write_counter; int set_pwm; int set_match; int set_load; int start; int get_fclk; int disable; int enable; } ;
struct dmtimer_platform_data {struct omap_dm_timer_ops* timer_ops; } ;
struct device_node {int dummy; } ;
typedef int pwm_omap_dmtimer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct dmtimer_platform_data* FUNC_2 (TYPE_2__*) ;
 struct pwm_omap_dmtimer_chip* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*,char*,int ) ;
 int FUNC_9 (struct device_node*,char*,int *) ;
 int VAR_5 ;
 int FUNC_10 (struct platform_device*,struct pwm_omap_dmtimer_chip*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_12 (TYPE_1__*) ;
 int * FUNC_13 (struct device_node*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct device_node *VAR_9;
 struct platform_device *VAR_10;
 struct pwm_omap_dmtimer_chip *VAR_11;
 struct dmtimer_platform_data *VAR_12;
 const struct omap_dm_timer_ops *VAR_13;
 pwm_omap_dmtimer *VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;

 VAR_9 = FUNC_8(VAR_8, "ti,timers", 0);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_5(VAR_9);
 if (!VAR_10) {
  FUNC_1(&VAR_7->dev, "Unable to find Timer pdev\n");
  VAR_16 = -VAR_1;
  goto put;
 }

 VAR_12 = FUNC_2(&VAR_10->dev);
 if (!VAR_12) {
  FUNC_0(&VAR_7->dev,
    "dmtimer pdata structure NULL, deferring probe\n");
  VAR_16 = -VAR_3;
  goto put;
 }

 VAR_13 = VAR_12->timer_ops;

 if (!VAR_13 || !VAR_13->request_by_node ||
     !VAR_13->free ||
     !VAR_13->enable ||
     !VAR_13->disable ||
     !VAR_13->get_fclk ||
     !VAR_13->start ||
     !VAR_13->stop ||
     !VAR_13->set_load ||
     !VAR_13->set_match ||
     !VAR_13->set_pwm ||
     !VAR_13->set_prescaler ||
     !VAR_13->write_counter) {
  FUNC_1(&VAR_7->dev, "Incomplete dmtimer pdata structure\n");
  VAR_16 = -VAR_0;
  goto put;
 }

 if (!FUNC_6(VAR_9, "ti,timer-pwm", ((void*)0))) {
  FUNC_1(&VAR_7->dev, "Missing ti,timer-pwm capability\n");
  VAR_16 = -VAR_1;
  goto put;
 }

 VAR_14 = VAR_13->request_by_node(VAR_9);
 if (!VAR_14) {
  VAR_16 = -VAR_3;
  goto put;
 }

put:
 FUNC_7(VAR_9);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_11 = FUNC_3(&VAR_7->dev, sizeof(*VAR_11), VAR_4);
 if (!VAR_11) {
  VAR_13->free(VAR_14);
  return -VAR_2;
 }

 VAR_11->pdata = VAR_13;
 VAR_11->dm_timer = VAR_14;
 VAR_11->dm_timer_pdev = VAR_10;





 if (FUNC_11(&VAR_11->dm_timer_pdev->dev))
  VAR_11->pdata->stop(VAR_11->dm_timer);

 if (!FUNC_9(VAR_7->dev.of_node, "ti,prescaler", &VAR_15))
  VAR_11->pdata->set_prescaler(VAR_11->dm_timer, VAR_15);


 if (!FUNC_9(VAR_7->dev.of_node, "ti,clock-source", &VAR_15))
  VAR_11->pdata->set_source(VAR_11->dm_timer, VAR_15);

 VAR_11->chip.dev = &VAR_7->dev;
 VAR_11->chip.ops = &VAR_6;
 VAR_11->chip.base = -1;
 VAR_11->chip.npwm = 1;
 VAR_11->chip.of_xlate = VAR_5;
 VAR_11->chip.of_pwm_n_cells = 3;

 FUNC_4(&VAR_11->mutex);

 VAR_16 = FUNC_12(&VAR_11->chip);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_7->dev, "failed to register PWM\n");
  VAR_11->pdata->free(VAR_11->dm_timer);
  return VAR_16;
 }

 FUNC_10(VAR_7, VAR_11);

 return 0;
}
