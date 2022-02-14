
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;


 size_t VAR_0 ;
 unsigned short** VAR_1 ;

u32 FUNC_0(unsigned char VAR_2)
{
 unsigned short VAR_3 = VAR_1[VAR_0][VAR_2];
 return VAR_3 == (0xf000 | VAR_2) ? VAR_2 : VAR_3;
}
