
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned short,int) ;
 int FUNC_3 (unsigned short,int) ;

__attribute__((used)) static int FUNC_4(unsigned short VAR_0, unsigned char VAR_1)
{





 unsigned char VAR_2, VAR_3, VAR_4;
 FUNC_2(VAR_0, 0x0c);
 FUNC_1(2);
 FUNC_3(VAR_0, 0xaa);
 FUNC_1(10);
 FUNC_3(VAR_0, 0x55);
 FUNC_1(10);
 FUNC_3(VAR_0, 0x00);
 FUNC_1(10);
 FUNC_3(VAR_0, 0xff);
 FUNC_1(10);
 VAR_2 = FUNC_0(VAR_0) & 0xb8;
 FUNC_3(VAR_0, 0x87);
 FUNC_1(10);
 VAR_3 = FUNC_0(VAR_0) & 0xb8;
 FUNC_3(VAR_0, 0x78);
 FUNC_1(10);
 VAR_4 = FUNC_0(VAR_0) & 0x38;
 FUNC_3(VAR_0, VAR_1);
 FUNC_1(2);
 FUNC_2(VAR_0, 0x0c);
 FUNC_1(10);
 FUNC_2(VAR_0, 0x0d);
 FUNC_1(2);
 FUNC_2(VAR_0, 0x0c);
 FUNC_1(10);
 FUNC_3(VAR_0, 0xff);
 FUNC_1(10);
 if ((VAR_2 == 0xb8) && (VAR_3 == 0x18) && (VAR_4 == 0x30))
  return 1;
 if ((VAR_2 == 0xb8) && (VAR_3 == 0x18) && (VAR_4 == 0x38))
  return 0;

 return -1;
}
