
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fusb302_chip {int gpio_int_n; int gpio_int_n_irq; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct fusb302_chip *VAR_0)
{
 struct device_node *VAR_1;
 int VAR_2 = 0;

 VAR_1 = VAR_0->dev->of_node;
 VAR_0->gpio_int_n = FUNC_5(VAR_1, "fcs,int_n", 0);
 if (!FUNC_3(VAR_0->gpio_int_n)) {
  VAR_2 = VAR_0->gpio_int_n;
  FUNC_0(VAR_0->dev, "cannot get named GPIO Int_N, ret=%d", VAR_2);
  return VAR_2;
 }
 VAR_2 = FUNC_1(VAR_0->dev, VAR_0->gpio_int_n, "fcs,int_n");
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "cannot request GPIO Int_N, ret=%d", VAR_2);
  return VAR_2;
 }
 VAR_2 = FUNC_2(VAR_0->gpio_int_n);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev,
   "cannot set GPIO Int_N to input, ret=%d", VAR_2);
  return VAR_2;
 }
 VAR_2 = FUNC_4(VAR_0->gpio_int_n);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev,
   "cannot request IRQ for GPIO Int_N, ret=%d", VAR_2);
  return VAR_2;
 }
 VAR_0->gpio_int_n_irq = VAR_2;
 return 0;
}
