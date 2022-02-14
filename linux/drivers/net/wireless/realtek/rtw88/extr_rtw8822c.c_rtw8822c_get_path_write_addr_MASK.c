
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;




 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_0)
{
 u32 VAR_1;

 switch (VAR_0) {
 case 129:
  VAR_1 = 0x1800;
  break;
 case 128:
  VAR_1 = 0x4100;
  break;
 default:
  FUNC_0(1);
  return -1;
 }

 return VAR_1;
}
