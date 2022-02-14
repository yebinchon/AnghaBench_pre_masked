
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct property {int length; } ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl_group {int name; } ;
struct mtk_pinctrl {int dev; TYPE_1__* devdata; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ npins; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (unsigned long*) ;
 int VAR_2 ;
 int FUNC_5 (struct mtk_pinctrl*,scalar_t__,scalar_t__,struct mtk_pinctrl_group*,struct pinctrl_map**,unsigned int*,unsigned int*) ;
 struct mtk_pinctrl_group* FUNC_6 (struct mtk_pinctrl*,scalar_t__) ;
 struct property* FUNC_7 (struct device_node*,char*,int *) ;
 int FUNC_8 (struct device_node*,char*,int,scalar_t__*) ;
 int FUNC_9 (struct device_node*,struct pinctrl_dev*,unsigned long**,unsigned int*) ;
 struct mtk_pinctrl* FUNC_10 (struct pinctrl_dev*) ;
 int FUNC_11 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,int ,unsigned long*,unsigned int,int ) ;
 int FUNC_12 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct pinctrl_dev *VAR_3,
          struct device_node *VAR_4,
          struct pinctrl_map **VAR_5,
          unsigned *VAR_6,
          unsigned *VAR_7)
{
 struct property *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 unsigned long *VAR_15;
 unsigned int VAR_16;
 bool VAR_17 = 0;
 int VAR_18, VAR_19;
 unsigned VAR_20 = 0;
 struct mtk_pinctrl_group *VAR_21;
 struct mtk_pinctrl *VAR_22 = FUNC_10(VAR_3);

 VAR_8 = FUNC_7(VAR_4, "pinmux", ((void*)0));
 if (!VAR_8) {
  FUNC_3(VAR_22->dev, "missing pins property in node %pOFn .\n",
    VAR_4);
  return -VAR_0;
 }

 VAR_19 = FUNC_9(VAR_4, VAR_3, &VAR_15,
  &VAR_16);
 if (VAR_19)
  return VAR_19;

 if (VAR_16)
  VAR_17 = 1;

 VAR_12 = VAR_8->length / sizeof(u32);
 VAR_13 = VAR_12;
 VAR_14 = 0;
 if (VAR_13)
  VAR_14++;
 if (VAR_17 && VAR_12 >= 1)
  VAR_14++;

 if (!VAR_12 || !VAR_14) {
  VAR_19 = -VAR_0;
  goto exit;
 }

 VAR_20 = VAR_12 * VAR_14;

 VAR_19 = FUNC_12(VAR_3, VAR_5,
   VAR_6, VAR_7, VAR_20);
 if (VAR_19 < 0)
  goto exit;

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
  VAR_19 = FUNC_8(VAR_4, "pinmux",
    VAR_18, &VAR_9);
  if (VAR_19)
   goto exit;

  VAR_10 = FUNC_2(VAR_9);
  VAR_11 = FUNC_1(VAR_9);

  if (VAR_10 >= VAR_22->devdata->npins ||
    VAR_11 >= FUNC_0(VAR_2)) {
   FUNC_3(VAR_22->dev, "invalid pins value.\n");
   VAR_19 = -VAR_0;
   goto exit;
  }

  VAR_21 = FUNC_6(VAR_22, VAR_10);
  if (!VAR_21) {
   FUNC_3(VAR_22->dev, "unable to match pin %d to group\n",
     VAR_10);
   VAR_19 = -VAR_0;
   goto exit;
  }

  VAR_19 = FUNC_5(VAR_22, VAR_10, VAR_11, VAR_21, VAR_5,
    VAR_6, VAR_7);
  if (VAR_19 < 0)
   goto exit;

  if (VAR_17) {
   VAR_19 = FUNC_11(VAR_3, VAR_5,
     VAR_6, VAR_7, VAR_21->name,
     VAR_15, VAR_16,
     VAR_1);
   if (VAR_19 < 0)
    goto exit;
  }
 }

 VAR_19 = 0;

exit:
 FUNC_4(VAR_15);
 return VAR_19;
}
