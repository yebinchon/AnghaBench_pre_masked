
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned char VAR_0 = 0x6a, VAR_1;
 int VAR_2;

 FUNC_0(1);
 FUNC_1(0x00);
 FUNC_1(0x00);

 FUNC_1(VAR_0);

 for (VAR_2 = 1; VAR_2 < 32; VAR_2++) {
  VAR_1 = ((VAR_0 & 0x01) ^ ((VAR_0 & 0x02) >> 1)) << 7;
  VAR_0 = (VAR_0 >> 1) | VAR_1;
  FUNC_1(VAR_0);
 }
}
