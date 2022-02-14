
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int ssize_t ;


 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_0(u16 VAR_1)
{
 if ((VAR_1 & 0xf) > 9)
  return -VAR_0;
 if (((VAR_1 >> 4) & 0xf) > 9)
  return -VAR_0;
 if (((VAR_1 >> 8) & 0xf) > 9)
  return -VAR_0;
 if (((VAR_1 >> 12) & 0xf) > 9)
  return -VAR_0;
 return 0;
}
