
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2mps11_info {struct gpio_desc** ext_control_gpiod; } ;
struct platform_device {int dev; } ;
struct of_regulator_match {int name; int of_node; int init_data; } ;
struct gpio_desc {int dummy; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (int *,char*,unsigned int,int ) ;
 int FUNC_4 (int *,char*,unsigned int,int ) ;
 struct gpio_desc* FUNC_5 (int *,int ,char*,int ,int,char*) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_6,
  struct of_regulator_match *VAR_7, struct s2mps11_info *VAR_8)
{
 struct gpio_desc **VAR_9 = VAR_8->ext_control_gpiod;
 unsigned int VAR_10;
 unsigned int VAR_11[3] = { VAR_3, VAR_4,
  VAR_5 };

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_11); VAR_10++) {
  unsigned int VAR_12 = VAR_11[VAR_10];

  if (!VAR_7[VAR_12].init_data || !VAR_7[VAR_12].of_node)
   continue;

  VAR_9[VAR_12] = FUNC_5(&VAR_6->dev,
    VAR_7[VAR_12].of_node,
    "samsung,ext-control-gpios",
    0,
    VAR_2 | VAR_1,
    "s2mps11-regulator");
  if (FUNC_2(VAR_9[VAR_12]) == -VAR_0)
   VAR_9[VAR_12] = ((void*)0);
  else if (FUNC_1(VAR_9[VAR_12])) {
   FUNC_4(&VAR_6->dev, "Failed to get control GPIO for %d/%s\n",
    VAR_12, VAR_7[VAR_12].name);
   VAR_9[VAR_12] = ((void*)0);
   continue;
  }
  if (VAR_9[VAR_12])
   FUNC_3(&VAR_6->dev, "Using GPIO for ext-control over %d/%s\n",
    VAR_12, VAR_7[VAR_12].name);
 }
}
