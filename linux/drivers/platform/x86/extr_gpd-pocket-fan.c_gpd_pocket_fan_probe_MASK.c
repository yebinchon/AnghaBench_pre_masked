
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpd_pocket_fan_data {void* gpio1; int * dev; void* gpio0; void* dts1; void* dts0; int work; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_5 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,int *,int,int ) ;
 struct gpd_pocket_fan_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct gpd_pocket_fan_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct platform_device*,struct gpd_pocket_fan_data*) ;
 int VAR_8 ;
 int* VAR_9 ;
 void* FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_10)
{
 struct gpd_pocket_fan_data *VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9); VAR_12++) {
  if (VAR_9[VAR_12] < 40000 || VAR_9[VAR_12] > 70000) {
   FUNC_4(&VAR_10->dev, "Invalid temp-limit %d (must be between 40000 and 70000)\n",
    VAR_9[VAR_12]);
   return -VAR_0;
  }
 }
 if (VAR_7 < 1000 || VAR_7 > 10000) {
  FUNC_4(&VAR_10->dev, "Invalid hysteresis %d (must be between 1000 and 10000)\n",
   VAR_7);
  return -VAR_0;
 }
 if (VAR_8 < 0 || VAR_8 > VAR_5) {
  FUNC_4(&VAR_10->dev, "Invalid speed_on_ac %d (must be between 0 and 3)\n",
   VAR_8);
  return -VAR_0;
 }

 VAR_11 = FUNC_6(&VAR_10->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->dev = &VAR_10->dev;
 FUNC_1(&VAR_11->work, VAR_6);


 VAR_11->dts0 = FUNC_9("soc_dts0");
 if (FUNC_2(VAR_11->dts0))
  return -VAR_2;

 VAR_11->dts1 = FUNC_9("soc_dts1");
 if (FUNC_2(VAR_11->dts1))
  return -VAR_2;

 VAR_11->gpio0 = FUNC_5(VAR_11->dev, ((void*)0), 0, VAR_4);
 if (FUNC_2(VAR_11->gpio0))
  return FUNC_3(VAR_11->gpio0);

 VAR_11->gpio1 = FUNC_5(VAR_11->dev, ((void*)0), 1, VAR_4);
 if (FUNC_2(VAR_11->gpio1))
  return FUNC_3(VAR_11->gpio1);

 FUNC_7(VAR_11);

 FUNC_8(VAR_10, VAR_11);
 return 0;
}
