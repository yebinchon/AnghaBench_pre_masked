
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(int VAR_1)
{
 if (VAR_1 > 4096)
  return -VAR_0;
 if (VAR_1 > 1024)
  return 5;
 if (VAR_1 > 128)
  return 4;
 if (VAR_1 > 4)
  return 3;
 if (VAR_1 > 0)
  return 2;
 return 1;
}
