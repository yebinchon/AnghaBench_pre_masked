
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {int length; } ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pinctrl_dev*,struct device_node*,int ,char const**,char const**) ;
 int FUNC_1 (int ,char*,struct device_node*) ;
 int FUNC_2 (unsigned long*) ;
 struct property* FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (struct device_node*,char*,int,int *) ;
 int FUNC_5 (struct device_node*,struct pinctrl_dev*,unsigned long**,unsigned int*) ;
 int FUNC_6 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,char const*,unsigned long*,unsigned int,int ) ;
 int FUNC_7 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,char const*,char const*) ;
 int FUNC_8 (struct pinctrl_dev*,struct pinctrl_map**,unsigned int*,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_2,
     struct device_node *VAR_3,
     struct pinctrl_map **VAR_4,
     unsigned *VAR_5,
     unsigned *VAR_6)
{
 unsigned VAR_7, VAR_8, VAR_9;
 unsigned long *VAR_10;
 struct property *VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_3(VAR_3, "pinmux", ((void*)0));
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_3, VAR_2, &VAR_10,
           &VAR_8);
 if (VAR_13 < 0) {
  FUNC_1(VAR_2->dev, "%pOF: could not parse node property\n",
   VAR_3);
  return VAR_13;
 }

 VAR_7 = VAR_11->length / sizeof(u32);
 if (!VAR_7) {
  FUNC_1(VAR_2->dev, "no pins found in node %pOF\n", VAR_3);
  VAR_13 = -VAR_0;
  goto exit;
 }





 VAR_9 = 1;
 if (VAR_8)
  VAR_9++;
 VAR_9 *= VAR_7;
 VAR_13 = FUNC_8(VAR_2, VAR_4, VAR_5, VAR_6,
     VAR_9);
 if (VAR_13 < 0)
  goto exit;

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
  const char *VAR_15, *VAR_16;

  VAR_13 = FUNC_4(VAR_3, "pinmux", VAR_14, &VAR_12);
  if (VAR_13)
   goto exit;

  VAR_13 = FUNC_0(VAR_2, VAR_3, VAR_12, &VAR_15,
            &VAR_16);
  if (VAR_13)
   goto exit;

  FUNC_7(VAR_2, VAR_4, VAR_5, VAR_6,
       VAR_15, VAR_16);

  if (VAR_8) {
   VAR_13 = FUNC_6(VAR_2, VAR_4,
     VAR_5, VAR_6, VAR_15,
     VAR_10, VAR_8,
     VAR_1);
   if (VAR_13 < 0)
    goto exit;
  }
 }

exit:
 FUNC_2(VAR_10);
 return VAR_13;
}
