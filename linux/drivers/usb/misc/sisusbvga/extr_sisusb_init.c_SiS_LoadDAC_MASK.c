
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned long SiS_P3c8; unsigned long SiS_P3c9; unsigned long SiS_P3c6; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_3__ {unsigned short St_ModeFlag; } ;


 unsigned short VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;
 int FUNC_0 (struct SiS_Private*,unsigned long,unsigned short) ;
 unsigned char* VAR_4 ;
 int FUNC_1 (struct SiS_Private*,unsigned long,unsigned short,unsigned short,unsigned char const,unsigned char const,unsigned char const) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_5, unsigned short VAR_6,
     unsigned short VAR_7)
{
 unsigned short VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned short VAR_17, VAR_18, VAR_19, VAR_20;
 unsigned long VAR_21, VAR_22;
 const unsigned char *VAR_23 = ((void*)0);

 if (VAR_6 < 0x13)
  VAR_8 = VAR_5->SiS_SModeIDTable[VAR_7].St_ModeFlag;
 else
  VAR_8 = VAR_5->SiS_EModeIDTable[VAR_7].Ext_ModeFlag;

 VAR_8 &= VAR_0;

 VAR_12 = VAR_10 = 64;
 if (VAR_8 == 0x00)
  VAR_23 = VAR_3;
 else if (VAR_8 == 0x08)
  VAR_23 = VAR_1;
 else if (VAR_8 == 0x10)
  VAR_23 = VAR_2;
 else {
  VAR_12 = 16;
  VAR_10 = 256;
  VAR_23 = VAR_4;
 }

 VAR_21 = VAR_5->SiS_P3c8;
 VAR_22 = VAR_5->SiS_P3c9;
 VAR_20 = 0;
 FUNC_0(VAR_5, VAR_5->SiS_P3c6, 0xFF);

 FUNC_0(VAR_5, VAR_21, 0x00);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_8 = VAR_23[VAR_11];
  for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
   VAR_9 = 0;
   if (VAR_8 & 0x01)
    VAR_9 += 0x2A;
   if (VAR_8 & 0x02)
    VAR_9 += 0x15;
   FUNC_0(VAR_5, VAR_22, (VAR_9 << VAR_20));
   VAR_8 >>= 2;
  }
 }

 if (VAR_10 == 256) {
  for (VAR_11 = 16; VAR_11 < 32; VAR_11++) {
   VAR_8 = VAR_23[VAR_11] << VAR_20;
   for (VAR_13 = 0; VAR_13 < 3; VAR_13++)
    FUNC_0(VAR_5, VAR_22, VAR_8);
  }
  VAR_17 = 32;
  for (VAR_14 = 0; VAR_14 < 9; VAR_14++) {
   VAR_18 = VAR_17;
   VAR_19 = VAR_17 + 4;
   for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
    for (VAR_16 = 0; VAR_16 < 5; VAR_16++) {
     FUNC_1(VAR_5, VAR_22, VAR_20, VAR_15,
           VAR_23[VAR_18], VAR_23[VAR_19],
           VAR_23[VAR_17]);
     VAR_17++;
    }
    VAR_17 -= 2;
    for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
     FUNC_1(VAR_5, VAR_22, VAR_20, VAR_15,
           VAR_23[VAR_18], VAR_23[VAR_17],
           VAR_23[VAR_19]);
     VAR_17--;
    }
   }
   VAR_17 += 5;
  }
 }
}
