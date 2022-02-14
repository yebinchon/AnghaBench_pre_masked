
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct mdio_mux_gpio_state* platform_data; int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mdio_mux_gpio_state {struct gpio_descs* gpios; int mux_handle; } ;
struct gpio_descs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct gpio_descs*) ;
 int FUNC_1 (struct gpio_descs*) ;
 struct mdio_mux_gpio_state* FUNC_2 (TYPE_1__*,int,int ) ;
 struct gpio_descs* FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (struct gpio_descs*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *,struct mdio_mux_gpio_state*,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct mdio_mux_gpio_state *VAR_5;
 struct gpio_descs *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(&VAR_4->dev, ((void*)0), VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_4(VAR_6);
  return -VAR_0;
 }

 VAR_5->gpios = VAR_6;

 VAR_7 = FUNC_5(&VAR_4->dev, VAR_4->dev.of_node,
     VAR_3, &VAR_5->mux_handle, VAR_5, ((void*)0));

 if (VAR_7 != 0) {
  FUNC_4(VAR_5->gpios);
  return VAR_7;
 }

 VAR_4->dev.platform_data = VAR_5;
 return 0;
}
