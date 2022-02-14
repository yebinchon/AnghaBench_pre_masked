
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct of_device_id {struct atmel_pmecc_caps* data; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct atmel_pmecc_caps {int dummy; } ;
struct atmel_pmecc {int dummy; } ;


 int VAR_0 ;
 struct atmel_pmecc* FUNC_0 (int ) ;
 struct atmel_pmecc_caps VAR_1 ;
 struct atmel_pmecc* FUNC_1 (struct platform_device*,struct atmel_pmecc_caps const*,int,int) ;
 struct atmel_pmecc* FUNC_2 (struct device*,struct device_node*) ;
 int VAR_2 ;
 struct of_device_id* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*) ;
 struct platform_device* FUNC_7 (struct device*) ;

struct atmel_pmecc *FUNC_8(struct device *VAR_3)
{
 struct atmel_pmecc *VAR_4;
 struct device_node *VAR_5;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 if (!VAR_3->of_node)
  return ((void*)0);

 VAR_5 = FUNC_5(VAR_3->of_node, "ecc-engine", 0);
 if (VAR_5) {
  VAR_4 = FUNC_2(VAR_3, VAR_5);
  FUNC_4(VAR_5);
 } else {





  struct platform_device *VAR_6 = FUNC_7(VAR_3);
  const struct atmel_pmecc_caps *VAR_7;
  const struct of_device_id *VAR_8;


  if (!FUNC_6(VAR_3->of_node,
        "atmel,has-pmecc"))
   return ((void*)0);

  VAR_7 = &VAR_1;


  VAR_8 = FUNC_3(VAR_2,
          VAR_3->of_node);
  if (VAR_8 && VAR_8->data)
   VAR_7 = VAR_8->data;

  VAR_4 = FUNC_1(VAR_6, VAR_7, 1, 2);
 }

 return VAR_4;
}
