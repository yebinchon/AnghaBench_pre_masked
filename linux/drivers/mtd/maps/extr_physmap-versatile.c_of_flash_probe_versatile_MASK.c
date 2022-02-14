
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct map_info {int set_vpp; } ;
struct device_node {int dummy; } ;
typedef enum versatile_flashprot { ____Placeholder_versatile_flashprot } versatile_flashprot ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;


 int FUNC_2 (struct platform_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct device_node*,char*) ;
 struct device_node* FUNC_5 (int *,int ,struct of_device_id const**) ;
 int VAR_3 ;
 struct regmap* FUNC_6 (struct device_node*) ;
 struct regmap* VAR_4 ;
 int VAR_5 ;

int FUNC_7(struct platform_device *VAR_6,
        struct device_node *VAR_7,
        struct map_info *VAR_8)
{
 struct device_node *VAR_9;
 const struct of_device_id *VAR_10;
 struct regmap *VAR_11;
 static enum versatile_flashprot VAR_12;
 int VAR_13;


 if (!FUNC_4(VAR_7, "arm,versatile-flash"))
  return 0;


 if (!VAR_4) {
  VAR_9 = FUNC_5(((void*)0),
       VAR_3,
       &VAR_10);
  if (!VAR_9)
   return -VAR_0;

  VAR_12 = (enum versatile_flashprot)VAR_10->data;
  VAR_11 = FUNC_6(VAR_9);
  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);

  VAR_4 = VAR_11;
 }

 switch (VAR_12) {
 case 131:
  VAR_13 = FUNC_2(VAR_6);
  if (VAR_13)
   return VAR_13;
  VAR_8->set_vpp = VAR_1;
  FUNC_3(&VAR_6->dev, "Integrator/AP flash protection\n");
  break;
 case 130:
  VAR_8->set_vpp = VAR_2;
  FUNC_3(&VAR_6->dev, "Integrator/CP flash protection\n");
  break;
 case 128:
 case 129:
  VAR_8->set_vpp = VAR_5;
  FUNC_3(&VAR_6->dev, "versatile/realview flash protection\n");
  break;
 default:
  FUNC_3(&VAR_6->dev, "device marked as Versatile flash "
    "but no system controller was found\n");
  break;
 }

 return 0;
}
