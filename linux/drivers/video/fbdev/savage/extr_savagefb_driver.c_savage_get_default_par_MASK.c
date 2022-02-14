
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {scalar_t__ chip; } ;
struct savage_reg {int SR08; int CR31; int CR32; int CR34; int CR36; int CR3A; int CR40; int CR42; int CR45; int CR50; int CR51; int CR53; int CR58; int CR60; int CR66; int CR67; int CR68; int CR69; int CR6F; int CR33; int CR86; int CR88; int CR90; int CR91; int CRB0; int CR3B; int CR3C; int CR43; int CR5D; int CR5E; int CR65; int SR0E; int SR0F; int SR10; int SR11; int SR12; int SR13; int SR29; int SR15; int SR30; int SR18; int* SR54; void* MMPR3; void* MMPR2; void* MMPR1; void* MMPR0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,struct savagefb_par*) ;
 int FUNC_1 (int,struct savagefb_par*) ;
 int FUNC_2 (int,int,struct savagefb_par*) ;
 int FUNC_3 (int,unsigned char,struct savagefb_par*) ;

__attribute__((used)) static void FUNC_4(struct savagefb_par *VAR_5, struct savage_reg *VAR_6)
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
 VAR_6->SR08 = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c5, 0x06, VAR_5);


 FUNC_3(0x3d4, 0x31, VAR_5);
 VAR_6->CR31 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x32, VAR_5);
 VAR_6->CR32 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x34, VAR_5);
 VAR_6->CR34 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x36, VAR_5);
 VAR_6->CR36 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x3a, VAR_5);
 VAR_6->CR3A = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x40, VAR_5);
 VAR_6->CR40 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x42, VAR_5);
 VAR_6->CR42 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x45, VAR_5);
 VAR_6->CR45 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x50, VAR_5);
 VAR_6->CR50 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x51, VAR_5);
 VAR_6->CR51 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x53, VAR_5);
 VAR_6->CR53 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x58, VAR_5);
 VAR_6->CR58 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x60, VAR_5);
 VAR_6->CR60 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x66, VAR_5);
 VAR_6->CR66 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x67, VAR_5);
 VAR_6->CR67 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x68, VAR_5);
 VAR_6->CR68 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x69, VAR_5);
 VAR_6->CR69 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x6f, VAR_5);
 VAR_6->CR6F = FUNC_1(0x3d5, VAR_5);

 FUNC_3(0x3d4, 0x33, VAR_5);
 VAR_6->CR33 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x86, VAR_5);
 VAR_6->CR86 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x88, VAR_5);
 VAR_6->CR88 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x90, VAR_5);
 VAR_6->CR90 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x91, VAR_5);
 VAR_6->CR91 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0xb0, VAR_5);
 VAR_6->CRB0 = FUNC_1(0x3d5, VAR_5) | 0x80;


 FUNC_3(0x3d4, 0x3b, VAR_5);
 VAR_6->CR3B = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x3c, VAR_5);
 VAR_6->CR3C = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x43, VAR_5);
 VAR_6->CR43 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x5d, VAR_5);
 VAR_6->CR5D = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x5e, VAR_5);
 VAR_6->CR5E = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d4, 0x65, VAR_5);
 VAR_6->CR65 = FUNC_1(0x3d5, VAR_5);


 FUNC_3(0x3c4, 0x0e, VAR_5);
 VAR_6->SR0E = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x0f, VAR_5);
 VAR_6->SR0F = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x10, VAR_5);
 VAR_6->SR10 = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x11, VAR_5);
 VAR_6->SR11 = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x12, VAR_5);
 VAR_6->SR12 = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x13, VAR_5);
 VAR_6->SR13 = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x29, VAR_5);
 VAR_6->SR29 = FUNC_1(0x3c5, VAR_5);

 FUNC_3(0x3c4, 0x15, VAR_5);
 VAR_6->SR15 = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x30, VAR_5);
 VAR_6->SR30 = FUNC_1(0x3c5, VAR_5);
 FUNC_3(0x3c4, 0x18, VAR_5);
 VAR_6->SR18 = FUNC_1(0x3c5, VAR_5);


 if (VAR_5->chip == VAR_3) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
   FUNC_3(0x3c4, 0x54+VAR_10, VAR_5);
   VAR_6->SR54[VAR_10] = FUNC_1(0x3c5, VAR_5);
  }
 }

 FUNC_3(0x3d4, 0x66, VAR_5);
 VAR_9 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d5, VAR_9 | 0x80, VAR_5);
 FUNC_3(0x3d4, 0x3a, VAR_5);
 VAR_7 = FUNC_1(0x3d5, VAR_5);
 FUNC_3(0x3d5, VAR_7 | 0x80, VAR_5);


 if (VAR_5->chip != VAR_3) {
  VAR_6->MMPR0 = FUNC_0(VAR_0, VAR_5);
  VAR_6->MMPR1 = FUNC_0(VAR_2, VAR_5);
  VAR_6->MMPR2 = FUNC_0(VAR_4, VAR_5);
  VAR_6->MMPR3 = FUNC_0(VAR_1, VAR_5);
 }

 FUNC_3(0x3d4, 0x3a, VAR_5);
 FUNC_3(0x3d5, VAR_7, VAR_5);
 FUNC_3(0x3d4, 0x66, VAR_5);
 FUNC_3(0x3d5, VAR_9, VAR_5);
}
