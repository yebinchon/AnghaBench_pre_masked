
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned long VAR_0, const void *VAR_1, int VAR_2)
{
 volatile unsigned short *VAR_3 = (void *)VAR_0;
 const unsigned short *VAR_4 = VAR_1;

 VAR_2++;
 VAR_2 /= 2;

 while (VAR_2--)
  *VAR_3++ = *VAR_4++;
}
