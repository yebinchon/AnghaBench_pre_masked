
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (unsigned char,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1)
{
 unsigned char VAR_2;
 unsigned int VAR_3 = 0x26;


 FUNC_1(VAR_3, 0x3c4);
 VAR_2 = FUNC_0(0x3c5);

 if (VAR_1)
  VAR_2 |= 0x20;
 else
  VAR_2 &= ~0x20;

 if (VAR_0)
  VAR_2 |= 0x10;
 else
  VAR_2 &= ~0x10;

 VAR_2 |= 0x01;

 FUNC_1(VAR_3, 0x3c4);
 FUNC_1(VAR_2, 0x3c5);
}
