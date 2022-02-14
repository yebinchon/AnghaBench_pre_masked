
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;



__attribute__((used)) static u8 FUNC_0(int VAR_0, u64 VAR_1)
{
 if (VAR_0 == 8)
  return 0xff;
 else if (VAR_0 == 4)
  return 0x0f << (VAR_1 & 4);
 else if (VAR_0 == 2)
  return 0x03 << (VAR_1 & 6);
 else if (VAR_0 == 1)
  return 0x01 << (VAR_1 & 7);
 else
  return 0;
}
