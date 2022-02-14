
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(unsigned int VAR_0, u8 VAR_1)
{
 u8 VAR_2 = VAR_0 % 8;

 if (VAR_2 <= 3)
  return VAR_2 ? (VAR_1 + 1) : VAR_1;
 else
  return VAR_1 + 4 * (VAR_0 / 8) + VAR_2 - 2;
}
