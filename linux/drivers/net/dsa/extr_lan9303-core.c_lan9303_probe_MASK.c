
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303 {int dev; int alr_mutex; int indirect_mutex; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct lan9303*) ;
 int FUNC_2 (struct lan9303*) ;
 int FUNC_3 (struct lan9303*,struct device_node*) ;
 int FUNC_4 (struct lan9303*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct lan9303 *VAR_0, struct device_node *VAR_1)
{
 int VAR_2;

 FUNC_5(&VAR_0->indirect_mutex);
 FUNC_5(&VAR_0->alr_mutex);

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_0->dev, "Failed to register switch: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
