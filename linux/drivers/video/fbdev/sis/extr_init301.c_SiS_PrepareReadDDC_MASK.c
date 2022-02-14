
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_DeviceAddr; } ;


 scalar_t__ FUNC_0 (struct SiS_Private*) ;
 scalar_t__ FUNC_1 (struct SiS_Private*,int) ;

__attribute__((used)) static unsigned short
FUNC_2(struct SiS_Private *VAR_0)
{
   if(FUNC_0(VAR_0)) return 0xFFFF;
   if(FUNC_1(VAR_0, (VAR_0->SiS_DDC_DeviceAddr | 0x01))) {
      return 0xFFFF;
   }
   return 0;
}
