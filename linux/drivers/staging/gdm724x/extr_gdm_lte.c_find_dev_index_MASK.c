
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(u32 VAR_2)
{
 u8 VAR_3;

 VAR_3 = (u8)(VAR_2 & 0x0000000f);
 if (VAR_3 >= VAR_1)
  return -VAR_0;

 return VAR_3;
}
