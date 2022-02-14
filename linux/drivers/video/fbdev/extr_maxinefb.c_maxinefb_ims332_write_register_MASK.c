
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

void FUNC_0(int VAR_1, register unsigned int VAR_2)
{
 register unsigned char *VAR_3 = (char *) VAR_0;
 unsigned char *VAR_4;

 VAR_4 = VAR_3 + 0xa0000 + (VAR_1 << 4);
 *((volatile unsigned int *) (VAR_3)) = (VAR_2 >> 8) & 0xff00;
 *((volatile unsigned short *) (VAR_4)) = VAR_2;
}
