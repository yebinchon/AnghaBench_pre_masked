
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_ops {scalar_t__ apply; scalar_t__ disable; scalar_t__ enable; scalar_t__ config; } ;



__attribute__((used)) static bool FUNC_0(const struct pwm_ops *VAR_0)
{

 if (VAR_0->config && VAR_0->enable && VAR_0->disable)
  return 1;


 if (VAR_0->apply)
  return 1;

 return 0;
}
