
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_provider {int dummy; } ;
struct module {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy_provider* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct phy_provider*) ;
 struct phy_provider* FUNC_2 (struct device*,struct device_node*,struct module*,struct phy* (*) (struct device*,struct of_phandle_args*)) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct phy_provider**) ;
 struct phy_provider** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct phy_provider**) ;

struct phy_provider *FUNC_6(struct device *VAR_3,
 struct device_node *VAR_4, struct module *VAR_5,
 struct phy * (*VAR_6)(struct device *VAR_7,
     struct of_phandle_args *VAR_8))
{
 struct phy_provider **VAR_9, *VAR_10;

 VAR_9 = FUNC_4(VAR_2, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5,
        VAR_6);
 if (!FUNC_1(VAR_10)) {
  *VAR_9 = VAR_10;
  FUNC_3(VAR_3, VAR_9);
 } else {
  FUNC_5(VAR_9);
 }

 return VAR_10;
}
