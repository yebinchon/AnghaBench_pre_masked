
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(uint8_t *VAR_0)
{

 if ((VAR_0[0] & 0xF8) != 0x10)
  return -2;


 if (FUNC_0(*(uint16_t *)VAR_0) & 1)
  return -2;

 return (VAR_0[1] >> 1) | ((VAR_0[0] & 0x07) << 7);
}
