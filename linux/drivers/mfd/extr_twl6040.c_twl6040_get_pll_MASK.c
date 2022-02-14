
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040 {int pll; scalar_t__ power_count; } ;


 int VAR_0 ;

int FUNC_0(struct twl6040 *VAR_1)
{
 if (VAR_1->power_count)
  return VAR_1->pll;
 else
  return -VAR_0;
}
