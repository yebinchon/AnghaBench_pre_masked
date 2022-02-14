
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_DeviceAddr; } ;


 scalar_t__ FUNC_0 (struct SiS_Private*) ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (struct SiS_Private*,int) ;
 int FUNC_3 (struct SiS_Private*) ;
 int FUNC_4 (struct SiS_Private*) ;

__attribute__((used)) static unsigned short
FUNC_5(struct SiS_Private *VAR_0)
{
    unsigned char VAR_1, VAR_2;
    unsigned short VAR_3, VAR_4=0;
    bool VAR_5 = 0;

    FUNC_4(VAR_0);
    if(FUNC_0(VAR_0)) {
         FUNC_3(VAR_0);
         return 0xFFFF;
    }
    VAR_1 = 0xf0;
    VAR_2 = 0x20;
    if(VAR_0->SiS_DDC_DeviceAddr == 0xa0) {
       VAR_3 = (unsigned char)FUNC_1(VAR_0);
       FUNC_2(VAR_0, 0);
       if(VAR_3 == 0) {
           VAR_1 = 0xff;
    VAR_2 = 0xff;
       } else {
           VAR_5 = 1;
    VAR_4 = 0xFFFF;
       }
    }
    if(!VAR_5) {
       VAR_3 = (unsigned char)FUNC_1(VAR_0);
       FUNC_2(VAR_0, 1);
       VAR_3 &= VAR_1;
       if(VAR_3 == VAR_2) VAR_4 = 0;
       else {
          VAR_4 = 0xFFFF;
          if(VAR_0->SiS_DDC_DeviceAddr == 0xa0) {
             if(VAR_3 == 0x30) VAR_4 = 0;
          }
       }
    }
    FUNC_3(VAR_0);
    return VAR_4;
}
