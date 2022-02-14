
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_dss_device* FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 struct omap_dss_device* FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*) ;

struct omap_dss_device *
FUNC_5(struct device_node *VAR_2)
{
 struct device_node *VAR_3;
 struct device_node *VAR_4;
 struct omap_dss_device *VAR_5;

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_4(VAR_3);
 if (!VAR_4) {
  FUNC_1(VAR_3);
  return FUNC_0(-VAR_0);
 }

 FUNC_1(VAR_3);

 VAR_5 = FUNC_2(VAR_4);

 FUNC_1(VAR_4);

 return VAR_5 ? VAR_5 : FUNC_0(-VAR_1);
}
