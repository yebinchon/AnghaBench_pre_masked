
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct device_node* u32 ;
struct stm32_pinctrl_group {int name; } ;
struct stm32_pinctrl {int dev; } ;
struct property {int length; } ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (unsigned long*) ;
 struct property* FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*,char*,int,struct device_node**) ;
 int FUNC_6 (struct device_node*,struct pinctrl_dev*,unsigned long**,unsigned int*) ;
 struct stm32_pinctrl* FUNC_7 (struct pinctrl_dev*) ;
 int FUNC_8 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,int ,unsigned long*,unsigned int,int ) ;
 int FUNC_9 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_10 (struct stm32_pinctrl*,struct device_node*,struct device_node*,struct stm32_pinctrl_group*,struct pinctrl_map**,unsigned int*,unsigned int*) ;
 struct stm32_pinctrl_group* FUNC_11 (struct stm32_pinctrl*,struct device_node*) ;
 int FUNC_12 (struct stm32_pinctrl*,struct device_node*,struct device_node*) ;

__attribute__((used)) static int FUNC_13(struct pinctrl_dev *VAR_2,
          struct device_node *VAR_3,
          struct pinctrl_map **VAR_4,
          unsigned *VAR_5,
          unsigned *VAR_6)
{
 struct stm32_pinctrl *VAR_7;
 struct stm32_pinctrl_group *VAR_8;
 struct property *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 unsigned long *VAR_13;
 unsigned int VAR_14;
 bool VAR_15 = 0;
 unsigned VAR_16 = 0;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 = 0;

 VAR_7 = FUNC_7(VAR_2);

 VAR_9 = FUNC_4(VAR_3, "pinmux", ((void*)0));
 if (!VAR_9) {
  FUNC_2(VAR_7->dev, "missing pins property in node %pOFn .\n",
    VAR_3);
  return -VAR_0;
 }

 VAR_21 = FUNC_6(VAR_3, VAR_2, &VAR_13,
  &VAR_14);
 if (VAR_21)
  return VAR_21;

 if (VAR_14)
  VAR_15 = 1;

 VAR_17 = VAR_9->length / sizeof(u32);
 VAR_18 = VAR_17;
 VAR_19 = 0;
 if (VAR_18)
  VAR_19++;
 if (VAR_15 && VAR_17 >= 1)
  VAR_19++;

 if (!VAR_17 || !VAR_19) {
  VAR_21 = -VAR_0;
  goto exit;
 }

 VAR_16 = VAR_17 * VAR_19;

 VAR_21 = FUNC_9(VAR_2, VAR_4,
   VAR_5, VAR_6, VAR_16);
 if (VAR_21)
  goto exit;

 for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
  VAR_21 = FUNC_5(VAR_3, "pinmux",
    VAR_20, &VAR_10);
  if (VAR_21)
   goto exit;

  VAR_11 = FUNC_1(VAR_10);
  VAR_12 = FUNC_0(VAR_10);

  if (!FUNC_12(VAR_7, VAR_11, VAR_12)) {
   FUNC_2(VAR_7->dev, "invalid function.\n");
   VAR_21 = -VAR_0;
   goto exit;
  }

  VAR_8 = FUNC_11(VAR_7, VAR_11);
  if (!VAR_8) {
   FUNC_2(VAR_7->dev, "unable to match pin %d to group\n",
     VAR_11);
   VAR_21 = -VAR_0;
   goto exit;
  }

  VAR_21 = FUNC_10(VAR_7, VAR_11, VAR_12, VAR_8, VAR_4,
    VAR_5, VAR_6);
  if (VAR_21)
   goto exit;

  if (VAR_15) {
   VAR_21 = FUNC_8(VAR_2, VAR_4,
     VAR_5, VAR_6, VAR_8->name,
     VAR_13, VAR_14,
     VAR_1);
   if (VAR_21)
    goto exit;
  }
 }

exit:
 FUNC_3(VAR_13);
 return VAR_21;
}
