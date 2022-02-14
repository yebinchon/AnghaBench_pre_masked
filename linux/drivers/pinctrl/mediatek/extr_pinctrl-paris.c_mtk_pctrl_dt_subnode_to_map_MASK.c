
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
struct mtk_pinctrl {int dev; TYPE_1__* soc; } ;
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
 struct mtk_pinctrl *VAR_8 = FUNC_10(VAR_3);
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct mtk_pinctrl_group *VAR_14;
 unsigned int VAR_15;
 bool VAR_16 = 0;
 unsigned long *VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 struct property *VAR_21;
 unsigned VAR_22 = 0;

 VAR_21 = FUNC_7(VAR_4, "pinmux", ((void*)0));
 if (!VAR_21) {
  FUNC_3(VAR_8->dev, "missing pins property in node %pOFn .\n",
   VAR_4);
  return -VAR_0;
 }

 VAR_13 = FUNC_9(VAR_4, VAR_3, &VAR_17,
           &VAR_15);
 if (VAR_13)
  return VAR_13;

 if (VAR_15)
  VAR_16 = 1;

 VAR_9 = VAR_21->length / sizeof(u32);
 VAR_10 = VAR_9;
 VAR_11 = 0;
 if (VAR_10)
  VAR_11++;
 if (VAR_16 && VAR_9 >= 1)
  VAR_11++;

 if (!VAR_9 || !VAR_11) {
  VAR_13 = -VAR_0;
  goto exit;
 }

 VAR_22 = VAR_9 * VAR_11;

 VAR_13 = FUNC_12(VAR_3, VAR_5, VAR_6, VAR_7,
     VAR_22);
 if (VAR_13 < 0)
  goto exit;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_13 = FUNC_8(VAR_4, "pinmux", VAR_12, &VAR_18);
  if (VAR_13)
   goto exit;

  VAR_19 = FUNC_2(VAR_18);
  VAR_20 = FUNC_1(VAR_18);

  if (VAR_19 >= VAR_8->soc->npins ||
      VAR_20 >= FUNC_0(VAR_2)) {
   FUNC_3(VAR_8->dev, "invalid pins value.\n");
   VAR_13 = -VAR_0;
   goto exit;
  }

  VAR_14 = FUNC_6(VAR_8, VAR_19);
  if (!VAR_14) {
   FUNC_3(VAR_8->dev, "unable to match pin %d to group\n",
    VAR_19);
   VAR_13 = -VAR_0;
   goto exit;
  }

  VAR_13 = FUNC_5(VAR_8, VAR_19, VAR_20, VAR_14, VAR_5,
          VAR_6, VAR_7);
  if (VAR_13 < 0)
   goto exit;

  if (VAR_16) {
   VAR_13 = FUNC_11(VAR_3, VAR_5,
           VAR_6,
           VAR_7,
           VAR_14->name,
           VAR_17,
           VAR_15,
           VAR_1);
   if (VAR_13 < 0)
    goto exit;
  }
 }

 VAR_13 = 0;

exit:
 FUNC_4(VAR_17);
 return VAR_13;
}
