
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pinctrl {int dev; } ;
struct sprd_pin_group {char* name; unsigned int* pins; } ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct device_node {int name; } ;
typedef enum pinctrl_map_type { ____Placeholder_pinctrl_map_type } pinctrl_map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,char const**) ;
 char* FUNC_5 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_6 (struct device_node*,struct pinctrl_dev*,unsigned long**,unsigned int*) ;
 struct sprd_pinctrl* FUNC_7 (struct pinctrl_dev*) ;
 int FUNC_8 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,char const*,unsigned long*,unsigned int,int) ;
 int FUNC_9 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,char*,char const*) ;
 int FUNC_10 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,unsigned int) ;
 struct sprd_pin_group* FUNC_11 (struct sprd_pinctrl*,int ) ;

__attribute__((used)) static int FUNC_12(struct pinctrl_dev *VAR_3,
          struct device_node *VAR_4,
          struct pinctrl_map **VAR_5,
          unsigned int *VAR_6)
{
 struct sprd_pinctrl *VAR_7 = FUNC_7(VAR_3);
 const struct sprd_pin_group *VAR_8;
 unsigned long *VAR_9 = ((void*)0);
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 const char *VAR_13;
 enum pinctrl_map_type VAR_14;
 int VAR_15;

 VAR_8 = FUNC_11(VAR_7, VAR_4->name);
 if (!VAR_8) {
  FUNC_0(VAR_7->dev, "unable to find group for node %s\n",
   FUNC_2(VAR_4));
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_4, "pins");
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_15 == 1)
  VAR_14 = VAR_2;
 else
  VAR_14 = VAR_1;

 VAR_15 = FUNC_4(VAR_4, "function", &VAR_13);
 if (VAR_15 < 0) {
  if (VAR_15 != -VAR_0)
   FUNC_0(VAR_7->dev,
    "%s: could not parse property function\n",
    FUNC_2(VAR_4));
  VAR_13 = ((void*)0);
 }

 VAR_15 = FUNC_6(VAR_4, VAR_3, &VAR_9,
           &VAR_10);
 if (VAR_15 < 0) {
  FUNC_0(VAR_7->dev, "%s: could not parse node property\n",
   FUNC_2(VAR_4));
  return VAR_15;
 }

 *VAR_5 = ((void*)0);
 *VAR_6 = 0;

 if (VAR_13 != ((void*)0))
  VAR_12++;
 if (VAR_10)
  VAR_12++;

 VAR_15 = FUNC_10(VAR_3, VAR_5, &VAR_11,
     VAR_6, VAR_12);
 if (VAR_15 < 0)
  goto out;

 if (VAR_13) {
  VAR_15 = FUNC_9(VAR_3, VAR_5,
      &VAR_11, VAR_6,
      VAR_8->name, VAR_13);
  if (VAR_15 < 0)
   goto out;
 }

 if (VAR_10) {
  const char *VAR_16;
  unsigned int VAR_17;

  if (VAR_14 == VAR_2) {
   VAR_17 = VAR_8->pins[0];
   VAR_16 = FUNC_5(VAR_3, VAR_17);
  } else {
   VAR_16 = VAR_8->name;
  }

  VAR_15 = FUNC_8(VAR_3, VAR_5,
          &VAR_11, VAR_6,
          VAR_16, VAR_9,
          VAR_10, VAR_14);
 }

out:
 FUNC_1(VAR_9);
 return VAR_15;
}
