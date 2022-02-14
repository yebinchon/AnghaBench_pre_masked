
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_dss_device {int dev; } ;
typedef enum omap_dss_output_id { ____Placeholder_omap_dss_output_id } omap_dss_output_id ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_dss_device* FUNC_0 (int) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static struct platform_device *FUNC_2(int VAR_2)
{
 struct omap_dss_device *VAR_3;
 enum omap_dss_output_id VAR_4;

 switch (VAR_2) {
 case 0:
  VAR_4 = VAR_0;
  break;
 case 1:
  VAR_4 = VAR_1;
  break;
 default:
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_4);

 return VAR_3 ? FUNC_1(VAR_3->dev) : ((void*)0);
}
