
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct device *VAR_0, unsigned int VAR_1)
{

 if (((VAR_1 >= 0xc0) && (VAR_1 < 0xc8)) ||
     ((VAR_1 >= 0xca) && (VAR_1 < 0xf0)))
  return 1;
 else
  return 0;
}
