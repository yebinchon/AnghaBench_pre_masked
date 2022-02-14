
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 if ((VAR_0 & 0xff) == 8)
  return (VAR_0 & 0xff) + 0x400;
 if (((VAR_0 >> 8) & 3) == 1)
  return (VAR_0 & 0xff) + 0x200;
 return VAR_0;
}
