
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBType; scalar_t__ ChipType; scalar_t__ SiS_CustomT; unsigned char* VirtualRomBase; int EMI_30; unsigned char EMI_31; unsigned short SiS_EMIOffset; unsigned char EMI_32; unsigned char EMI_33; int HaveEMI; int HaveEMILCD; int OverruleEMI; int SiS_IF_DEF_CH70xx; int SiS_Part1Port; int SiS_P3c4; int SiS_Part2Port; int SiS_P3d4; int SiS_P3c6; int SiS_Part4Port; scalar_t__ SiS_ROMNew; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short FUNC_0 (struct SiS_Private*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned short VAR_10 ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*) ;
 scalar_t__ FUNC_4 (struct SiS_Private*) ;
 int FUNC_5 (struct SiS_Private*) ;
 int FUNC_6 (struct SiS_Private*) ;
 int FUNC_7 (struct SiS_Private*) ;
 int FUNC_8 (struct SiS_Private*) ;
 int FUNC_9 (struct SiS_Private*) ;
 int FUNC_10 (struct SiS_Private*) ;
 int FUNC_11 (struct SiS_Private*) ;
 int FUNC_12 (struct SiS_Private*,int) ;
 unsigned short FUNC_13 (struct SiS_Private*,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct SiS_Private*) ;
 scalar_t__ FUNC_16 (struct SiS_Private*) ;
 scalar_t__ FUNC_17 (struct SiS_Private*) ;
 int FUNC_18 (struct SiS_Private*) ;
 scalar_t__ FUNC_19 (struct SiS_Private*) ;
 scalar_t__ FUNC_20 (struct SiS_Private*) ;
 scalar_t__ FUNC_21 (struct SiS_Private*) ;
 scalar_t__ FUNC_22 (struct SiS_Private*) ;
 int FUNC_23 (struct SiS_Private*,int) ;
 int FUNC_24 (struct SiS_Private*,int,int) ;
 int FUNC_25 (struct SiS_Private*,int,int) ;
 int FUNC_26 (int ,int,unsigned short) ;
 int FUNC_27 (int ,int,int) ;
 int FUNC_28 (int ,int,int,int) ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 (int ,int,int) ;
 int FUNC_31 (struct SiS_Private*,int,int) ;
 scalar_t__ FUNC_32 (struct SiS_Private*) ;
 int FUNC_33 (struct SiS_Private*) ;
 int FUNC_34 (struct SiS_Private*) ;
 int FUNC_35 (struct SiS_Private*) ;
 int FUNC_36 (struct SiS_Private*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static
void
FUNC_37(struct SiS_Private *VAR_17)
{
  unsigned short VAR_18=0, VAR_19;





  if(VAR_17->SiS_VBType & VAR_16) {

    if(VAR_17->SiS_VBType & VAR_12) {

      if(VAR_17->ChipType < VAR_6) {
      } else {
      }

    } else {

       if(VAR_17->ChipType < VAR_6) {
   if(FUNC_4(VAR_17)) {
      FUNC_31(VAR_17,0xFB,0x00);
      FUNC_23(VAR_17, 0);
   }
       }

       VAR_18 = FUNC_14(VAR_17->SiS_P3c4,0x32) & 0xDF;
       if(FUNC_1(VAR_17)) {
   VAR_19 = FUNC_14(VAR_17->SiS_P3d4,0x30);
   if(!(VAR_19 & VAR_10)) VAR_18 |= 0x20;
       }
       FUNC_26(VAR_17->SiS_P3c4,0x32,VAR_18);

       FUNC_30(VAR_17->SiS_P3c4,0x1E,0x20);

       if(VAR_17->ChipType >= VAR_6) {
   VAR_18 = FUNC_14(VAR_17->SiS_Part1Port,0x2E);
   if(!(VAR_18 & 0x80)) {
      FUNC_30(VAR_17->SiS_Part1Port,0x2E,0x80);
   }
       }

       FUNC_28(VAR_17->SiS_Part2Port,0x00,0x1F,0x20);

       FUNC_34(VAR_17);
       FUNC_11(VAR_17);
       if(VAR_17->ChipType >= VAR_6) {
   FUNC_27(VAR_17->SiS_Part1Port,0x00,0x7f);
       }
       FUNC_34(VAR_17);

       if(VAR_17->ChipType < VAR_6) {
   if(FUNC_4(VAR_17)) {
      FUNC_23(VAR_17, 1);
      FUNC_31(VAR_17,0xF7,0x00);
   }
       }

    }

  } else {

    if(VAR_17->ChipType < VAR_6) {
    } else {
    }

  }

}
