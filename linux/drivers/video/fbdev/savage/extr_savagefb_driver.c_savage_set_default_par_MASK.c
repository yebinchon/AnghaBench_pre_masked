
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {scalar_t__ chip; } ;
struct savage_reg {unsigned char SR08; unsigned char CR31; unsigned char CR32; unsigned char CR34; unsigned char CR36; unsigned char CR3A; unsigned char CR40; unsigned char CR42; unsigned char CR45; unsigned char CR50; unsigned char CR51; unsigned char CR53; unsigned char CR58; unsigned char CR60; unsigned char CR66; unsigned char CR67; unsigned char CR68; unsigned char CR69; unsigned char CR6F; unsigned char CR33; unsigned char CR86; unsigned char CR88; unsigned char CR90; unsigned char CR91; unsigned char CRB0; unsigned char CR3B; unsigned char CR3C; unsigned char CR43; unsigned char CR5D; unsigned char CR5E; unsigned char CR65; unsigned char SR0E; unsigned char SR0F; unsigned char SR10; unsigned char SR11; unsigned char SR12; unsigned char SR13; unsigned char SR29; unsigned char SR15; unsigned char SR30; unsigned char SR18; unsigned char* SR54; int MMPR3; int MMPR2; int MMPR1; int MMPR0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct savagefb_par*) ;
 unsigned char FUNC_1 (int,struct savagefb_par*) ;
 int FUNC_2 (int,int,struct savagefb_par*) ;
 int FUNC_3 (int,unsigned char,struct savagefb_par*) ;

__attribute__((used)) static void FUNC_4(struct savagefb_par *VAR_5,
    struct savage_reg *VAR_6)
{
 unsigned char VAR_7, VAR_8, VAR_9;

 FUNC_2(0x3d4, 0x4838, VAR_5);
 FUNC_2(0x3d4, 0xa039, VAR_5);
 FUNC_2(0x3c4, 0x0608, VAR_5);

 FUNC_3(0x3d4, 0x66, VAR_5);
 VAR_9 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d5, VAR_9 | 0x80, VAR_5);
 FUNC_3(0x3d4, 0x3a, VAR_5);
 VAR_7 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d5, VAR_7 | 0x80, VAR_5);
 FUNC_3(0x3d4, 0x53, VAR_5);
 VAR_8 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d5, VAR_8 & 0x7f, VAR_5);

 FUNC_3(0x3d4, 0x66, VAR_5);
 FUNC_3(0x3d5, VAR_9, VAR_5);
 FUNC_3(0x3d4, 0x3a, VAR_5);
 FUNC_3(0x3d5, VAR_7, VAR_5);

 FUNC_3(0x3d4, 0x66, VAR_5);
 FUNC_3(0x3d5, VAR_9, VAR_5);
 FUNC_3(0x3d4, 0x3a, VAR_5);
 FUNC_3(0x3d5, VAR_7, VAR_5);


 FUNC_3(0x3c4, 0x08, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR08, VAR_5);
 FUNC_3(0x3c5, 0x06, VAR_5);


 FUNC_3(0x3d4, 0x31, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR31, VAR_5);
 FUNC_3(0x3d4, 0x32, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR32, VAR_5);
 FUNC_3(0x3d4, 0x34, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR34, VAR_5);
 FUNC_3(0x3d4, 0x36, VAR_5);
 FUNC_3(0x3d5,VAR_6->CR36, VAR_5);
 FUNC_3(0x3d4, 0x3a, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR3A, VAR_5);
 FUNC_3(0x3d4, 0x40, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR40, VAR_5);
 FUNC_3(0x3d4, 0x42, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR42, VAR_5);
 FUNC_3(0x3d4, 0x45, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR45, VAR_5);
 FUNC_3(0x3d4, 0x50, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR50, VAR_5);
 FUNC_3(0x3d4, 0x51, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR51, VAR_5);
 FUNC_3(0x3d4, 0x53, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR53, VAR_5);
 FUNC_3(0x3d4, 0x58, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR58, VAR_5);
 FUNC_3(0x3d4, 0x60, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR60, VAR_5);
 FUNC_3(0x3d4, 0x66, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR66, VAR_5);
 FUNC_3(0x3d4, 0x67, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR67, VAR_5);
 FUNC_3(0x3d4, 0x68, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR68, VAR_5);
 FUNC_3(0x3d4, 0x69, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR69, VAR_5);
 FUNC_3(0x3d4, 0x6f, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR6F, VAR_5);

 FUNC_3(0x3d4, 0x33, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR33, VAR_5);
 FUNC_3(0x3d4, 0x86, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR86, VAR_5);
 FUNC_3(0x3d4, 0x88, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR88, VAR_5);
 FUNC_3(0x3d4, 0x90, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR90, VAR_5);
 FUNC_3(0x3d4, 0x91, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR91, VAR_5);
 FUNC_3(0x3d4, 0xb0, VAR_5);
 FUNC_3(0x3d5, VAR_6->CRB0, VAR_5);


 FUNC_3(0x3d4, 0x3b, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR3B, VAR_5);
 FUNC_3(0x3d4, 0x3c, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR3C, VAR_5);
 FUNC_3(0x3d4, 0x43, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR43, VAR_5);
 FUNC_3(0x3d4, 0x5d, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR5D, VAR_5);
 FUNC_3(0x3d4, 0x5e, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR5E, VAR_5);
 FUNC_3(0x3d4, 0x65, VAR_5);
 FUNC_3(0x3d5, VAR_6->CR65, VAR_5);


 FUNC_3(0x3c4, 0x0e, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR0E, VAR_5);
 FUNC_3(0x3c4, 0x0f, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR0F, VAR_5);
 FUNC_3(0x3c4, 0x10, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR10, VAR_5);
 FUNC_3(0x3c4, 0x11, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR11, VAR_5);
 FUNC_3(0x3c4, 0x12, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR12, VAR_5);
 FUNC_3(0x3c4, 0x13, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR13, VAR_5);
 FUNC_3(0x3c4, 0x29, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR29, VAR_5);

 FUNC_3(0x3c4, 0x15, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR15, VAR_5);
 FUNC_3(0x3c4, 0x30, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR30, VAR_5);
 FUNC_3(0x3c4, 0x18, VAR_5);
 FUNC_3(0x3c5, VAR_6->SR18, VAR_5);


 if (VAR_5->chip == VAR_3) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
   FUNC_3(0x3c4, 0x54+VAR_10, VAR_5);
   FUNC_3(0x3c5, VAR_6->SR54[VAR_10], VAR_5);
  }
 }

 FUNC_3(0x3d4, 0x66, VAR_5);
 VAR_9 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d5, VAR_9 | 0x80, VAR_5);
 FUNC_3(0x3d4, 0x3a, VAR_5);
 VAR_7 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d5, VAR_7 | 0x80, VAR_5);


 if (VAR_5->chip != VAR_3) {
  FUNC_0(VAR_0, VAR_6->MMPR0, VAR_5);
  FUNC_0(VAR_2, VAR_6->MMPR1, VAR_5);
  FUNC_0(VAR_4, VAR_6->MMPR2, VAR_5);
  FUNC_0(VAR_1, VAR_6->MMPR3, VAR_5);
 }

 FUNC_3(0x3d4, 0x3a, VAR_5);
 FUNC_3(0x3d5, VAR_7, VAR_5);
 FUNC_3(0x3d4, 0x66, VAR_5);
 FUNC_3(0x3d5, VAR_9, VAR_5);
}
