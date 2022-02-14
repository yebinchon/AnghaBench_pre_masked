
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_2__* parent; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int data; } ;
struct TYPE_3__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; struct device* dev; int * ops; } ;
struct atmel_hlcdc_pwm {TYPE_1__ chip; struct atmel_hlcdc* hlcdc; int errata; } ;
struct atmel_hlcdc {int periph_clk; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct atmel_hlcdc* FUNC_2 (TYPE_2__*) ;
 struct atmel_hlcdc_pwm* FUNC_3 (struct device*,int,int ) ;
 struct of_device_id* FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct platform_device*,struct atmel_hlcdc_pwm*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 const struct of_device_id *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct atmel_hlcdc_pwm *VAR_9;
 struct atmel_hlcdc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_8->parent);

 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_10->periph_clk);
 if (VAR_11)
  return VAR_11;

 VAR_7 = FUNC_4(VAR_3, VAR_8->parent->of_node);
 if (VAR_7)
  VAR_9->errata = VAR_7->data;

 VAR_9->hlcdc = VAR_10;
 VAR_9->chip.ops = &VAR_4;
 VAR_9->chip.dev = VAR_8;
 VAR_9->chip.base = -1;
 VAR_9->chip.npwm = 1;
 VAR_9->chip.of_xlate = VAR_5;
 VAR_9->chip.of_pwm_n_cells = 3;

 VAR_11 = FUNC_6(&VAR_9->chip, VAR_2);
 if (VAR_11) {
  FUNC_0(VAR_10->periph_clk);
  return VAR_11;
 }

 FUNC_5(VAR_6, VAR_9);

 return 0;
}
