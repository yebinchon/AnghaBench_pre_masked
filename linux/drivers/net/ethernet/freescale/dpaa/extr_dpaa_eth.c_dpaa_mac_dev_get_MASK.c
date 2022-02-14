
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct dpaa_eth_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct mac_device {int dummy; } ;
struct dpaa_eth_data {struct mac_device* mac_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_device* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;

__attribute__((used)) static struct mac_device *FUNC_2(struct platform_device *VAR_2)
{
 struct dpaa_eth_data *VAR_3;
 struct device *VAR_4;
 struct mac_device *VAR_5;

 VAR_4 = &VAR_2->dev;
 VAR_3 = VAR_4->platform_data;
 if (!VAR_3) {
  FUNC_1(VAR_4, "eth_data missing\n");
  return FUNC_0(-VAR_1);
 }
 VAR_5 = VAR_3->mac_dev;
 if (!VAR_5) {
  FUNC_1(VAR_4, "mac_dev missing\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
