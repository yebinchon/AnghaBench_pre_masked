
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,unsigned char*) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(6, VAR_0);
 VAR_1[(VAR_2 >> 3) & 0x3f] |= 1 << (VAR_2 & 7);
}
