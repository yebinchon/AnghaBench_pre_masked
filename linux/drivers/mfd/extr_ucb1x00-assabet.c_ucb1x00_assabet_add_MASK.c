
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucb1x00_dev {struct platform_device* priv; struct ucb1x00* ucb; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct ucb1x00 {int dev; TYPE_1__ gpio; } ;
struct platform_device {int dummy; } ;
struct gpio_keys_platform_data {int can_disable; unsigned int nbuttons; int poll_interval; char* name; struct gpio_keys_platform_data* buttons; int type; scalar_t__ gpio; scalar_t__ code; } ;
struct gpio_keys_button {int can_disable; unsigned int nbuttons; int poll_interval; char* name; struct gpio_keys_button* buttons; int type; scalar_t__ gpio; scalar_t__ code; } ;
typedef int keys ;
typedef int buttons ;


 unsigned int FUNC_0 (struct gpio_keys_platform_data*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct gpio_keys_platform_data*,int ,int) ;
 struct platform_device* FUNC_3 (int *,char*,int,struct gpio_keys_platform_data*,int) ;

__attribute__((used)) static int FUNC_4(struct ucb1x00_dev *VAR_5)
{
 struct ucb1x00 *VAR_6 = VAR_5->ucb;
 struct platform_device *VAR_7;
 struct gpio_keys_platform_data VAR_8;
 static struct gpio_keys_button VAR_9[6];
 unsigned VAR_10;

 FUNC_2(VAR_9, 0, sizeof(VAR_9));
 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9); VAR_10++) {
  VAR_9[VAR_10].code = VAR_0 + VAR_10;
  VAR_9[VAR_10].gpio = VAR_6->gpio.base + VAR_10;
  VAR_9[VAR_10].type = VAR_1;
  VAR_9[VAR_10].can_disable = 1;
 }

 VAR_8.buttons = VAR_9;
 VAR_8.nbuttons = FUNC_0(VAR_9);
 VAR_8.poll_interval = 50;
 VAR_8.name = "ucb1x00";

 VAR_7 = FUNC_3(&VAR_6->dev, "gpio-keys", -1,
  &VAR_8, sizeof(VAR_8));

 FUNC_1(&VAR_6->dev, &VAR_3);
 FUNC_1(&VAR_6->dev, &VAR_4);
 FUNC_1(&VAR_6->dev, &VAR_2);

 VAR_5->priv = VAR_7;
 return 0;
}
