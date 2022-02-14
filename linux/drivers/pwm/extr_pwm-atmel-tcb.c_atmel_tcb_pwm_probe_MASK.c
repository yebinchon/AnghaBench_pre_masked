
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int of_pwm_n_cells; int base; int npwm; int of_xlate; int * ops; TYPE_2__* dev; } ;
struct atmel_tcb_pwm_chip {struct atmel_tc* tc; TYPE_1__ chip; int lock; } ;
struct atmel_tc {int slow_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atmel_tc* FUNC_0 (int) ;
 int FUNC_1 (struct atmel_tc*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 struct atmel_tcb_pwm_chip* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct device_node*,char*,int*) ;
 int VAR_4 ;
 int FUNC_7 (struct platform_device*,struct atmel_tcb_pwm_chip*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct atmel_tcb_pwm_chip *VAR_6;
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 struct atmel_tc *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(VAR_7, "tc-block", &VAR_10);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_5->dev,
   "failed to get Timer Counter Block number from device tree (error: %d)\n",
   VAR_9);
  return VAR_9;
 }

 VAR_8 = FUNC_0(VAR_10);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(&VAR_5->dev, "failed to allocate Timer Counter Block\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto err_free_tc;
 }

 VAR_6->chip.dev = &VAR_5->dev;
 VAR_6->chip.ops = &VAR_3;
 VAR_6->chip.of_xlate = VAR_4;
 VAR_6->chip.of_pwm_n_cells = 3;
 VAR_6->chip.base = -1;
 VAR_6->chip.npwm = VAR_2;
 VAR_6->tc = VAR_8;

 VAR_9 = FUNC_3(VAR_8->slow_clk);
 if (VAR_9)
  goto err_free_tc;

 FUNC_9(&VAR_6->lock);

 VAR_9 = FUNC_8(&VAR_6->chip);
 if (VAR_9 < 0)
  goto err_disable_clk;

 FUNC_7(VAR_5, VAR_6);

 return 0;

err_disable_clk:
 FUNC_2(VAR_6->tc->slow_clk);

err_free_tc:
 FUNC_1(VAR_8);

 return VAR_9;
}
