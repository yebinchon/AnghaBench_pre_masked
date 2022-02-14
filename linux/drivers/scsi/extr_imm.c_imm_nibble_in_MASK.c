
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned short,int) ;

__attribute__((used)) static int FUNC_2(unsigned short VAR_0, char *VAR_1, int VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;




 FUNC_1(VAR_0, 0x4);
 for (VAR_4 = VAR_2; VAR_4; VAR_4--) {
  FUNC_1(VAR_0, 0x6);
  VAR_3 = (FUNC_0(VAR_0) & 0xf0) >> 4;
  FUNC_1(VAR_0, 0x5);
  *VAR_1++ = (FUNC_0(VAR_0) & 0xf0) | VAR_3;
  FUNC_1(VAR_0, 0x4);
 }
 return 1;
}
