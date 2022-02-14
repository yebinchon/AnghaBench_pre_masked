
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int in_reset; scalar_t__ disabled; } ;


 scalar_t__ FUNC_0 (int *) ;

bool FUNC_1(struct hl_device *VAR_0)
{
 if ((VAR_0->disabled) || (FUNC_0(&VAR_0->in_reset)))
  return 1;
 else
  return 0;
}
