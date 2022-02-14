
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmt_pinctrl_data {int nbanks; int dev; } ;
struct property {int length; } ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct pinctrl_map* FUNC_1 (int,int,int ) ;
 struct property* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*,char*,int,int*) ;
 struct wmt_pinctrl_data* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (struct pinctrl_dev*,struct pinctrl_map*,int) ;
 int FUNC_6 (struct wmt_pinctrl_data*,struct device_node*,int,int,struct pinctrl_map**) ;
 int FUNC_7 (struct wmt_pinctrl_data*,struct device_node*,int,int,struct pinctrl_map**) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_3,
       struct device_node *VAR_4,
       struct pinctrl_map **VAR_5,
       unsigned *VAR_6)
{
 struct pinctrl_map *VAR_7, *VAR_8;
 struct property *VAR_9, *VAR_10, *VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 struct wmt_pinctrl_data *VAR_21 = FUNC_4(VAR_3);

 VAR_9 = FUNC_2(VAR_4, "wm,pins", ((void*)0));
 if (!VAR_9) {
  FUNC_0(VAR_21->dev, "missing wmt,pins property\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_2(VAR_4, "wm,function", ((void*)0));
 VAR_11 = FUNC_2(VAR_4, "wm,pull", ((void*)0));

 if (!VAR_10 && !VAR_11) {
  FUNC_0(VAR_21->dev, "neither wm,function nor wm,pull specified\n");
  return -VAR_0;
 }





 VAR_15 = VAR_9->length / sizeof(u32);
 VAR_16 = VAR_10 ? (VAR_10->length / sizeof(u32)) : 0;
 VAR_17 = VAR_11 ? (VAR_11->length / sizeof(u32)) : 0;

 if (VAR_16 > 1 && VAR_16 != VAR_15) {
  FUNC_0(VAR_21->dev, "wm,function must have 1 or %d entries\n",
   VAR_15);
  return -VAR_0;
 }

 if (VAR_17 > 1 && VAR_17 != VAR_15) {
  FUNC_0(VAR_21->dev, "wm,pull must have 1 or %d entries\n",
   VAR_15);
  return -VAR_0;
 }

 VAR_18 = 0;
 if (VAR_16)
  VAR_18++;
 if (VAR_17)
  VAR_18++;

 VAR_8 = VAR_7 = FUNC_1(VAR_15 * VAR_18, sizeof(*VAR_7),
     VAR_2);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  VAR_20 = FUNC_3(VAR_4, "wm,pins", VAR_19, &VAR_12);
  if (VAR_20)
   goto fail;

  if (VAR_12 >= (VAR_21->nbanks * 32)) {
   FUNC_0(VAR_21->dev, "invalid wm,pins value\n");
   VAR_20 = -VAR_0;
   goto fail;
  }

  if (VAR_16) {
   VAR_20 = FUNC_3(VAR_4, "wm,function",
      (VAR_16 > 1 ? VAR_19 : 0), &VAR_13);
   if (VAR_20)
    goto fail;

   VAR_20 = FUNC_6(VAR_21, VAR_4, VAR_12, VAR_13,
          &VAR_8);
   if (VAR_20)
    goto fail;
  }

  if (VAR_17) {
   VAR_20 = FUNC_3(VAR_4, "wm,pull",
      (VAR_17 > 1 ? VAR_19 : 0), &VAR_14);
   if (VAR_20)
    goto fail;

   VAR_20 = FUNC_7(VAR_21, VAR_4, VAR_12, VAR_14,
          &VAR_8);
   if (VAR_20)
    goto fail;
  }
 }
 *VAR_5 = VAR_7;
 *VAR_6 = VAR_15 * VAR_18;
 return 0;
fail:
 FUNC_5(VAR_3, VAR_7, VAR_15 * VAR_18);
 return VAR_20;
}
