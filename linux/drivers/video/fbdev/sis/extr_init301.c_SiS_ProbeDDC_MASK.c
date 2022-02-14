
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_DeviceAddr; } ;


 int FUNC_0 (struct SiS_Private*) ;

__attribute__((used)) static
unsigned short
FUNC_1(struct SiS_Private *VAR_0)
{
   unsigned short VAR_1;

   VAR_1 = 0x180;
   VAR_0->SiS_DDC_DeviceAddr = 0xa0;
   if(!(FUNC_0(VAR_0))) VAR_1 |= 0x02;
   VAR_0->SiS_DDC_DeviceAddr = 0xa2;
   if(!(FUNC_0(VAR_0))) VAR_1 |= 0x08;
   VAR_0->SiS_DDC_DeviceAddr = 0xa6;
   if(!(FUNC_0(VAR_0))) VAR_1 |= 0x10;
   if(!(VAR_1 & 0x1a)) VAR_1 = 0;
   return VAR_1;
}
