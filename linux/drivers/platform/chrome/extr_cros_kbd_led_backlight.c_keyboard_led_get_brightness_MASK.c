
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dev; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,unsigned long long*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static enum led_brightness
FUNC_3(struct led_classdev *VAR_2)
{
 unsigned long long VAR_3;
 acpi_status VAR_4;

 VAR_4 = FUNC_1(((void*)0), VAR_0,
           ((void*)0), &VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_2->dev, "Error getting keyboard LED value: %d\n",
   VAR_4);
  return -VAR_1;
 }

 return VAR_3;
}
