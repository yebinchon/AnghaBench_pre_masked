
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mdio_mux_gpio_state {int gpios; int mux_handle; } ;


 struct mdio_mux_gpio_state* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mdio_mux_gpio_state *VAR_1 = FUNC_0(&VAR_0->dev);
 FUNC_2(VAR_1->mux_handle);
 FUNC_1(VAR_1->gpios);
 return 0;
}
