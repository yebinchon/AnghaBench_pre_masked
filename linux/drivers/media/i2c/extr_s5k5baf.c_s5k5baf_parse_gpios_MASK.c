
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k5baf_gpio {int gpio; int level; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,char const* const) ;
 int FUNC_1 (struct device_node*,char const* const,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct s5k5baf_gpio *VAR_2, struct device *VAR_3)
{
 static const char * const VAR_4[] = {
  "stbyn-gpios",
  "rstn-gpios",
 };
 struct device_node *VAR_5 = VAR_3->of_node;
 enum of_gpio_flags VAR_6;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
  VAR_7 = FUNC_1(VAR_5, VAR_4[VAR_8], 0, &VAR_6);
  if (VAR_7 < 0) {
   FUNC_0(VAR_3, "no %s GPIO pin provided\n", VAR_4[VAR_8]);
   return VAR_7;
  }
  VAR_2[VAR_8].gpio = VAR_7;
  VAR_2[VAR_8].level = !(VAR_6 & VAR_1);
 }

 return 0;
}
