
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5c73m3 {TYPE_1__* gpio; TYPE_2__* i2c_client; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int gpio; int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char const* const) ;
 int FUNC_1 (struct device_node*,char const* const,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_3)
{
 static const char * const VAR_4[] = {
  "standby-gpios", "xshutdown-gpios",
 };
 struct device *VAR_5 = &VAR_3->i2c_client->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  enum of_gpio_flags VAR_9;

  VAR_7 = FUNC_1(VAR_6, VAR_4[VAR_8],
           0, &VAR_9);
  if (VAR_7 < 0) {
   FUNC_0(VAR_5, "failed to parse %s DT property\n",
    VAR_4[VAR_8]);
   return -VAR_0;
  }
  VAR_3->gpio[VAR_8].gpio = VAR_7;
  VAR_3->gpio[VAR_8].level = !(VAR_9 & VAR_2);
 }
 return 0;
}
