
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {int length; } ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct device_node {int dummy; } ;
struct bcm2835_pinctrl {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pinctrl_dev*,struct pinctrl_map*,int) ;
 int FUNC_2 (struct bcm2835_pinctrl*,struct device_node*,int,int,struct pinctrl_map**) ;
 int FUNC_3 (struct bcm2835_pinctrl*,struct device_node*,int,int,struct pinctrl_map**) ;
 int FUNC_4 (int ,char*,struct device_node*,...) ;
 struct pinctrl_map* FUNC_5 (int,int,int ) ;
 struct property* FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*,char*,int,int*) ;
 int FUNC_8 (struct pinctrl_dev*,struct device_node*,struct pinctrl_map**,unsigned int*) ;
 struct bcm2835_pinctrl* FUNC_9 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_10(struct pinctrl_dev *VAR_4,
  struct device_node *VAR_5,
  struct pinctrl_map **VAR_6, unsigned int *VAR_7)
{
 struct bcm2835_pinctrl *VAR_8 = FUNC_9(VAR_4);
 struct property *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 struct pinctrl_map *VAR_16, *VAR_17;
 int VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22;


 VAR_19 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_19 || *VAR_7)
  return VAR_19;


 VAR_9 = FUNC_6(VAR_5, "brcm,pins", ((void*)0));
 if (!VAR_9) {
  FUNC_4(VAR_8->dev, "%pOF: missing brcm,pins property\n", VAR_5);
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_5, "brcm,function", ((void*)0));
 VAR_11 = FUNC_6(VAR_5, "brcm,pull", ((void*)0));

 if (!VAR_10 && !VAR_11) {
  FUNC_4(VAR_8->dev,
   "%pOF: neither brcm,function nor brcm,pull specified\n",
   VAR_5);
  return -VAR_0;
 }

 VAR_12 = VAR_9->length / 4;
 VAR_13 = VAR_10 ? (VAR_10->length / 4) : 0;
 VAR_14 = VAR_11 ? (VAR_11->length / 4) : 0;

 if (VAR_13 > 1 && VAR_13 != VAR_12) {
  FUNC_4(VAR_8->dev,
   "%pOF: brcm,function must have 1 or %d entries\n",
   VAR_5, VAR_12);
  return -VAR_0;
 }

 if (VAR_14 > 1 && VAR_14 != VAR_12) {
  FUNC_4(VAR_8->dev,
   "%pOF: brcm,pull must have 1 or %d entries\n",
   VAR_5, VAR_12);
  return -VAR_0;
 }

 VAR_15 = 0;
 if (VAR_13)
  VAR_15++;
 if (VAR_14)
  VAR_15++;
 VAR_17 = VAR_16 = FUNC_5(VAR_12 * VAR_15, sizeof(*VAR_16),
     VAR_2);
 if (!VAR_16)
  return -VAR_1;

 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
  VAR_19 = FUNC_7(VAR_5, "brcm,pins", VAR_18, &VAR_20);
  if (VAR_19)
   goto out;
  if (VAR_20 >= FUNC_0(VAR_3)) {
   FUNC_4(VAR_8->dev, "%pOF: invalid brcm,pins value %d\n",
    VAR_5, VAR_20);
   VAR_19 = -VAR_0;
   goto out;
  }

  if (VAR_13) {
   VAR_19 = FUNC_7(VAR_5, "brcm,function",
     (VAR_13 > 1) ? VAR_18 : 0, &VAR_21);
   if (VAR_19)
    goto out;
   VAR_19 = FUNC_2(VAR_8, VAR_5, VAR_20,
       VAR_21, &VAR_17);
   if (VAR_19)
    goto out;
  }
  if (VAR_14) {
   VAR_19 = FUNC_7(VAR_5, "brcm,pull",
     (VAR_14 > 1) ? VAR_18 : 0, &VAR_22);
   if (VAR_19)
    goto out;
   VAR_19 = FUNC_3(VAR_8, VAR_5, VAR_20,
       VAR_22, &VAR_17);
   if (VAR_19)
    goto out;
  }
 }

 *VAR_6 = VAR_16;
 *VAR_7 = VAR_12 * VAR_15;

 return 0;

out:
 FUNC_1(VAR_4, VAR_16, VAR_12 * VAR_15);
 return VAR_19;
}
