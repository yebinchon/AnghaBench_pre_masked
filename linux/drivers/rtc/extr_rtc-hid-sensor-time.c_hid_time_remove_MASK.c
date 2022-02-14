
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;
 struct hid_sensor_hub_device* FUNC_0 (int *) ;
 int FUNC_1 (struct hid_sensor_hub_device*) ;
 int FUNC_2 (struct hid_sensor_hub_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct hid_sensor_hub_device *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, VAR_0);

 return 0;
}
