
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct musb_hdrc_platform_data {int mode; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct musb_hdrc_platform_data* FUNC_1 (int *,int,int ) ;
 char* FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static struct musb_hdrc_platform_data *
FUNC_4(struct platform_device *VAR_4, struct device_node *VAR_5)
{
 struct musb_hdrc_platform_data *VAR_6;
 const char *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(&VAR_4->dev, sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_2(VAR_5, "dr_mode", &VAR_8);
 if (!VAR_7) {
  FUNC_0(&VAR_4->dev, "No 'dr_mode' property found\n");
  return ((void*)0);
 }

 if (VAR_8 > 0) {
  if (!FUNC_3(VAR_7, "host"))
   VAR_6->mode = VAR_1;
  if (!FUNC_3(VAR_7, "otg"))
   VAR_6->mode = VAR_2;
  if (!FUNC_3(VAR_7, "peripheral"))
   VAR_6->mode = VAR_3;
 }

 return VAR_6;
}
