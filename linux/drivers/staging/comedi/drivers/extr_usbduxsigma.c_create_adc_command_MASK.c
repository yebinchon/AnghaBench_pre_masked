
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(unsigned int VAR_0,
          u8 *VAR_1, u8 *VAR_2)
{
 if (VAR_0 < 8)
  (*VAR_1) = (*VAR_1) | (1 << VAR_0);
 else if (VAR_0 < 16)
  (*VAR_2) = (*VAR_2) | (1 << (VAR_0 - 8));
}
