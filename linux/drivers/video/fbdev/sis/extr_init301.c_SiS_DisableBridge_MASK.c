
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBType; scalar_t__ ChipType; scalar_t__ SiS_CustomT; int SiS_IF_DEF_CH70xx; int SiS_Part1Port; int SiS_P3c4; int SiS_Part2Port; int SiS_Part4Port; int SiS_P3c6; int SiS_P3d4; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (struct SiS_Private*) ;
 scalar_t__ FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*) ;
 int FUNC_4 (struct SiS_Private*) ;
 int FUNC_5 (struct SiS_Private*,int) ;
 int FUNC_6 (struct SiS_Private*) ;
 unsigned short FUNC_7 (struct SiS_Private*,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct SiS_Private*) ;
 scalar_t__ FUNC_10 (struct SiS_Private*) ;
 scalar_t__ FUNC_11 (struct SiS_Private*) ;
 scalar_t__ FUNC_12 (struct SiS_Private*) ;
 scalar_t__ FUNC_13 (struct SiS_Private*) ;
 scalar_t__ FUNC_14 (struct SiS_Private*) ;
 scalar_t__ FUNC_15 (struct SiS_Private*) ;
 scalar_t__ FUNC_16 (struct SiS_Private*) ;
 int FUNC_17 (struct SiS_Private*,int) ;
 int FUNC_18 (struct SiS_Private*,int,int) ;
 int FUNC_19 (struct SiS_Private*,int,int) ;
 int FUNC_20 (struct SiS_Private*,int,int) ;
 int FUNC_21 (int ,int,unsigned short) ;
 int FUNC_22 (int ,int,int) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,int,int) ;
 int FUNC_25 (struct SiS_Private*,int,int) ;
 int FUNC_26 (struct SiS_Private*,int) ;
 int FUNC_27 (struct SiS_Private*) ;
 int FUNC_28 (struct SiS_Private*) ;
 int FUNC_29 (struct SiS_Private*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_30(struct SiS_Private *VAR_11)
{



  unsigned short VAR_12=0;

  if(VAR_11->SiS_VBType & VAR_10) {

     if(VAR_11->SiS_VBType & VAR_7) {

 if(VAR_11->ChipType < VAR_3) {
        } else {
 }

     } else {

        if(VAR_11->ChipType < VAR_3) {






 }

 FUNC_22(VAR_11->SiS_Part2Port,0x00,0xDF);
 FUNC_6(VAR_11);

 if(VAR_11->ChipType >= VAR_3) {
    FUNC_24(VAR_11->SiS_Part1Port,0x00,0x80);
 }

 FUNC_22(VAR_11->SiS_P3c4,0x32,0xDF);

 if(VAR_11->ChipType >= VAR_3) {
     VAR_12 = FUNC_8(VAR_11->SiS_Part1Port,0x00);
     FUNC_24(VAR_11->SiS_Part1Port,0x00,0x10);
     FUNC_24(VAR_11->SiS_P3c4,0x1E,0x20);
     FUNC_21(VAR_11->SiS_Part1Port,0x00,VAR_12);
 } else {
 }

      }

  } else {

    if(VAR_11->ChipType < VAR_3) {
    } else {
    }

  }

}
