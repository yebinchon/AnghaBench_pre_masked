
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(u16 VAR_0)
{
 u16 VAR_1 = 0x0000;

 FUNC_0(!((VAR_0 & ~0x000F) == 0x0000));

 VAR_1 |= (VAR_0 & 0x0001) << 3;
 VAR_1 |= (VAR_0 & 0x0002) << 1;
 VAR_1 |= (VAR_0 & 0x0004) >> 1;
 VAR_1 |= (VAR_0 & 0x0008) >> 3;

 return VAR_1;
}
