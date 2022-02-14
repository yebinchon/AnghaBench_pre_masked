
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct device *VAR_0, unsigned int VAR_1)
{
 if ((VAR_1 < 0x36) ||
     ((VAR_1 >= 0x40) && (VAR_1 < 0x4c)) ||
     ((VAR_1 >= 0x52) && (VAR_1 < 0x56)) ||
     ((VAR_1 >= 0x60) && (VAR_1 < 0x66)) ||
     ((VAR_1 >= 0x68) && (VAR_1 < 0x80)) ||
     ((VAR_1 >= 0x86) && (VAR_1 < 0x92)) ||
     (VAR_1 == 0xc8))
  return 1;
 else
  return 0;
}
