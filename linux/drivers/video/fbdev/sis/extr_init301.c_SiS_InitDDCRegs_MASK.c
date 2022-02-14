
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned char SiS_DDC_DeviceAddr; int SiS_DDC_Index; int SiS_DDC_Data; int SiS_DDC_Clk; int SiS_Part4Port; int SiS_DDC_Port; int SiS_P3d4; int SiS_P3c4; scalar_t__ SiS_DDC_SecAddr; scalar_t__ SiS_ChrontelInit; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ,int) ;
 int FUNC_1 (struct SiS_Private*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static
unsigned short
FUNC_2(struct SiS_Private *VAR_6, unsigned int VAR_7, int VAR_8,
                unsigned short VAR_9, unsigned short VAR_10, bool VAR_11,
  unsigned int VAR_12)
{
     unsigned char VAR_13[] = { 0xa0, 0xa0, 0xa0, 0xa2, 0xa6 };
     unsigned char VAR_14, VAR_15;
     unsigned short VAR_16 = 0, VAR_17 = VAR_9;

     if(VAR_9 != 0) {
 if(!(VAR_12 & VAR_5)) return 0xFFFF;
 if((VAR_12 & VAR_2) && (VAR_9 == 1)) return 0xFFFF;
     }



     VAR_6->SiS_ChrontelInit = 0;

     VAR_6->SiS_DDC_SecAddr = 0;
     VAR_6->SiS_DDC_DeviceAddr = VAR_13[VAR_10];
     VAR_6->SiS_DDC_Port = VAR_6->SiS_P3c4;
     VAR_6->SiS_DDC_Index = 0x11;
     VAR_14 = 0xff;

     VAR_15 = FUNC_0(VAR_6->SiS_P3d4,0x32);
     if(VAR_8 == VAR_0) {

        if(VAR_17 != 0) {
    VAR_14 = 0;
    if(VAR_12 & VAR_4) {
       VAR_6->SiS_DDC_Port = VAR_6->SiS_Part4Port;
              VAR_6->SiS_DDC_Index = 0x0f;
    }
        }

 if(!(VAR_12 & VAR_1)) {
    if((VAR_15 & 0x80) && (VAR_11)) {
              if(VAR_17 >= 1) {
          if(!(VAR_15 & 0x08)) {
       VAR_17 = 1;
       if(!(VAR_15 & 0x10)) return 0xFFFF;
                 }
       }
    }
 }

 VAR_16 = 4 - (VAR_17 * 2);
 if(VAR_14) VAR_16 = 0;

     } else {



 if(VAR_12 & VAR_4) {
    if(VAR_17 == 2) {
       VAR_17 = 1;
    }
 }

        if(VAR_17 == 1) {
    VAR_14 = 0;
    if(VAR_12 & VAR_4) {
       VAR_6->SiS_DDC_Port = VAR_6->SiS_Part4Port;
              VAR_6->SiS_DDC_Index = 0x0f;
    }
        }

        if((VAR_15 & 0x80) && (VAR_11)) {
           if(VAR_17 >= 1) {
       if(!(VAR_15 & 0x08)) {
          VAR_17 = 1;
   if(!(VAR_15 & 0x10)) return 0xFFFF;
       }
    }
        }

        VAR_16 = VAR_17;
        if(VAR_17 == 1) {
           VAR_16 = 0;
    if(VAR_12 & VAR_3) VAR_14 = 0xff;
        }

 if(VAR_14) VAR_16 = 0;
    }

    VAR_6->SiS_DDC_Data = 0x02 << VAR_16;
    VAR_6->SiS_DDC_Clk = 0x01 << VAR_16;

    FUNC_1(VAR_6);

    return 0;
}
