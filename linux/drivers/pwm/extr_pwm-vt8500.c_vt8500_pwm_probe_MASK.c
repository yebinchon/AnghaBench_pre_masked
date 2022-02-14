
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_pwm_n_cells; int base; int npwm; int of_xlate; int * ops; TYPE_2__* dev; } ;
struct vt8500_chip {int clk; TYPE_1__ chip; int base; } ;
struct resource {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 struct vt8500_chip* FUNC_7 (TYPE_2__*,int,int ) ;
 int VAR_5 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct vt8500_chip*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct vt8500_chip *VAR_8;
 struct resource *VAR_9;
 struct device_node *VAR_10 = VAR_7->dev.of_node;
 int VAR_11;

 if (!VAR_10) {
  FUNC_4(&VAR_7->dev, "invalid devicetree node\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_7(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_8->chip.dev = &VAR_7->dev;
 VAR_8->chip.ops = &VAR_6;
 VAR_8->chip.of_xlate = VAR_5;
 VAR_8->chip.of_pwm_n_cells = 3;
 VAR_8->chip.base = -1;
 VAR_8->chip.npwm = VAR_4;

 VAR_8->clk = FUNC_5(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  FUNC_4(&VAR_7->dev, "clock source not specified\n");
  return FUNC_1(VAR_8->clk);
 }

 VAR_9 = FUNC_8(VAR_7, VAR_3, 0);
 VAR_8->base = FUNC_6(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_11 = FUNC_2(VAR_8->clk);
 if (VAR_11 < 0) {
  FUNC_4(&VAR_7->dev, "failed to prepare clock\n");
  return VAR_11;
 }

 VAR_11 = FUNC_10(&VAR_8->chip);
 if (VAR_11 < 0) {
  FUNC_4(&VAR_7->dev, "failed to add PWM chip\n");
  FUNC_3(VAR_8->clk);
  return VAR_11;
 }

 FUNC_9(VAR_7, VAR_8);
 return VAR_11;
}
