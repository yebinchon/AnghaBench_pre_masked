
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {void* chip_data; } ;


 int VAR_0 ;

int FUNC_0(struct pwm_device *VAR_1, void *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->chip_data = VAR_2;

 return 0;
}
