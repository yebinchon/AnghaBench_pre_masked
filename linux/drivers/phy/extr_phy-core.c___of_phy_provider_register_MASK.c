
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_provider {struct phy* (* of_xlate ) (struct device*,struct of_phandle_args*) ;int list; struct module* owner; void* children; struct device* dev; } ;
struct module {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy_provider* FUNC_0 (int ) ;
 int VAR_2 ;
 struct phy_provider* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 void* FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 int VAR_3 ;
 int VAR_4 ;

struct phy_provider *FUNC_8(struct device *VAR_5,
 struct device_node *VAR_6, struct module *VAR_7,
 struct phy * (*VAR_8)(struct device *VAR_9,
     struct of_phandle_args *VAR_10))
{
 struct phy_provider *VAR_11;






 if (VAR_6) {
  struct device_node *VAR_12 = FUNC_6(VAR_6), *VAR_13;

  while (VAR_12) {
   if (VAR_12 == VAR_5->of_node)
    break;

   VAR_13 = FUNC_5(VAR_12);
   FUNC_7(VAR_12);
   VAR_12 = VAR_13;
  }

  if (!VAR_12)
   return FUNC_0(-VAR_0);

  FUNC_7(VAR_12);
 } else {
  VAR_6 = VAR_5->of_node;
 }

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->dev = VAR_5;
 VAR_11->children = FUNC_6(VAR_6);
 VAR_11->owner = VAR_7;
 VAR_11->of_xlate = VAR_8;

 FUNC_3(&VAR_4);
 FUNC_2(&VAR_11->list, &VAR_3);
 FUNC_4(&VAR_4);

 return VAR_11;
}
