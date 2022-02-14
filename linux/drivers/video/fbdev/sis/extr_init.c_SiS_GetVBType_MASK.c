
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBType; scalar_t__ ChipType; int SiS_Part4Port; scalar_t__ SiS_IF_DEF_CONEX; scalar_t__ SiS_IF_DEF_LVDS; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,unsigned short) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static
void
FUNC_4(struct SiS_Private *VAR_10)
{
   unsigned short VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
   unsigned short VAR_14, VAR_15, VAR_16;

   VAR_10->SiS_VBType = 0;

   if((VAR_10->SiS_IF_DEF_LVDS) || (VAR_10->SiS_IF_DEF_CONEX))
      return;

   if(VAR_10->ChipType == VAR_9)
      return;

   VAR_11 = FUNC_0(VAR_10->SiS_Part4Port,0x00);

   if(VAR_11 > 3)
      return;

   VAR_12 = FUNC_0(VAR_10->SiS_Part4Port,0x01);

   if(VAR_11 >= 2) {
      VAR_10->SiS_VBType = VAR_5;
   } else if(VAR_11 == 1) {
      if(VAR_12 >= 0xC0) {
  VAR_10->SiS_VBType = VAR_3;
      } else if(VAR_12 >= 0xB0) {
  VAR_10->SiS_VBType = VAR_2;

  VAR_13 = FUNC_0(VAR_10->SiS_Part4Port,0x23);
  if(!(VAR_13 & 0x02)) VAR_10->SiS_VBType |= VAR_0;
      } else {
  VAR_10->SiS_VBType = VAR_1;
      }
   }
   if(VAR_10->SiS_VBType & (VAR_2 | VAR_3 | VAR_5)) {
      if(VAR_12 >= 0xE0) {
  VAR_11 = FUNC_0(VAR_10->SiS_Part4Port,0x39);
  if(VAR_11 == 0xff) VAR_10->SiS_VBType = VAR_7;
  else VAR_10->SiS_VBType = VAR_3;
      } else if(VAR_12 >= 0xD0) {
  VAR_10->SiS_VBType = VAR_4;
      }
   }
   if(VAR_10->SiS_VBType & (VAR_3 | VAR_4 | VAR_7 | VAR_6)) {
      VAR_14 = FUNC_0(VAR_10->SiS_Part4Port,0x0f);
      VAR_15 = FUNC_0(VAR_10->SiS_Part4Port,0x25);
      VAR_16 = FUNC_0(VAR_10->SiS_Part4Port,0x27);
      FUNC_2(VAR_10->SiS_Part4Port,0x0f,0x7f);
      FUNC_3(VAR_10->SiS_Part4Port,0x25,0x08);
      FUNC_2(VAR_10->SiS_Part4Port,0x27,0xfd);
      if(FUNC_0(VAR_10->SiS_Part4Port,0x26) & 0x08) {
         VAR_10->SiS_VBType |= VAR_8;
      }
      FUNC_1(VAR_10->SiS_Part4Port,0x27,VAR_16);
      FUNC_1(VAR_10->SiS_Part4Port,0x25,VAR_15);
      FUNC_1(VAR_10->SiS_Part4Port,0x0f,VAR_14);
   }
}
