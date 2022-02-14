
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {int led; int irq; int dev; } ;
struct pnp_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct wbcir_data* FUNC_3 (struct pnp_dev*) ;
 int FUNC_4 (struct wbcir_data*) ;

__attribute__((used)) static int
FUNC_5(struct pnp_dev *VAR_0)
{
 struct wbcir_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1);
 FUNC_1(VAR_1->dev);
 FUNC_0(VAR_1->irq);
 FUNC_2(&VAR_1->led);

 return 0;
}
