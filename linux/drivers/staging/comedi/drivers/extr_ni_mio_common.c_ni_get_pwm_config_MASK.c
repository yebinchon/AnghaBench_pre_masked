
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int pwm_up_count; unsigned int clock_ns; unsigned int pwm_down_count; } ;
struct comedi_device {struct ni_private* private; } ;



__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_0, unsigned int *VAR_1)
{
 struct ni_private *VAR_2 = VAR_0->private;

 VAR_1[1] = VAR_2->pwm_up_count * VAR_2->clock_ns;
 VAR_1[2] = VAR_2->pwm_down_count * VAR_2->clock_ns;
 return 3;
}
