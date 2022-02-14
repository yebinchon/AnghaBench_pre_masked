
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(unsigned VAR_0)
{
 unsigned VAR_1 = VAR_0;
 unsigned char VAR_2;
 VAR_1 ^= 0x7f7edfd3;
 VAR_1 = VAR_1 ^ (VAR_1 >> 3);
 VAR_1 = VAR_1 ^ (VAR_1 >> 5);
 VAR_1 = VAR_1 ^ (VAR_1 >> 13);
 VAR_2 = VAR_1 & 0xFF;

 VAR_2 = (VAR_2 & 0x0F) << 4 | (VAR_2 & 0xF0) >> 4;
 VAR_2 = (VAR_2 & 0x33) << 2 | (VAR_2 & 0xCC) >> 2;
 VAR_2 = (VAR_2 & 0x55) << 1 | (VAR_2 & 0xAA) >> 1;
 return VAR_2;
}
