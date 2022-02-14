
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_4;

 FUNC_3(&VAR_1, VAR_4);

 FUNC_2(0xff, 0x21);
 FUNC_2(0xff, 0xa1);


 FUNC_2(0x11, 0x20);
 FUNC_2(0x00, 0x21);
 FUNC_2(0x04, 0x21);
 FUNC_2(0x01, 0x21);
 FUNC_2(0x40, 0x20);


 FUNC_2(0x11, 0xa0);
 FUNC_2(0x08, 0xa1);
 FUNC_2(0x02, 0xa1);
 FUNC_2(0x01, 0xa1);
 FUNC_2(0x40, 0xa0);

 FUNC_5(100);

 VAR_3 = 0xff;
 VAR_2 = 0xfb;
 FUNC_2(VAR_3, 0xa1);
 FUNC_2(VAR_2, 0x21);


 FUNC_0("EISA edge/level %04x\n", VAR_0);

 FUNC_2(VAR_0&0xff, 0x4d0);
 FUNC_2((VAR_0 >> 8) & 0xff, 0x4d1);

 FUNC_0("pic0 mask %02x\n", FUNC_1(0x21));
 FUNC_0("pic1 mask %02x\n", FUNC_1(0xa1));
 FUNC_0("pic0 edge/level %02x\n", FUNC_1(0x4d0));
 FUNC_0("pic1 edge/level %02x\n", FUNC_1(0x4d1));

 FUNC_4(&VAR_1, VAR_4);
}
