
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {void* chip_data; } ;



void *FUNC_0(struct pwm_device *VAR_0)
{
 return VAR_0 ? VAR_0->chip_data : ((void*)0);
}
