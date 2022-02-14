
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int RamAmountKBytes; int CrystalFreqKHz; int MinVClockFreqKHz; int MaxVClockFreqKHz; int * PRAMIN; int * CURSOR; int PEXTDEV; int PFB; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct nvidia_par *VAR_0)
{
 if (FUNC_0(VAR_0->PFB, 0x0000) & 0x00000100) {
  VAR_0->RamAmountKBytes =
      ((FUNC_0(VAR_0->PFB, 0x0000) >> 12) & 0x0F) * 1024 * 2 +
      1024 * 2;
 } else {
  switch (FUNC_0(VAR_0->PFB, 0x0000) & 0x00000003) {
  case 0:
   VAR_0->RamAmountKBytes = 1024 * 32;
   break;
  case 1:
   VAR_0->RamAmountKBytes = 1024 * 4;
   break;
  case 2:
   VAR_0->RamAmountKBytes = 1024 * 8;
   break;
  case 3:
  default:
   VAR_0->RamAmountKBytes = 1024 * 16;
   break;
  }
 }
 VAR_0->CrystalFreqKHz = (FUNC_0(VAR_0->PEXTDEV, 0x0000) & 0x00000040) ?
     14318 : 13500;
 VAR_0->CURSOR = &VAR_0->PRAMIN[0x1E00];
 VAR_0->MinVClockFreqKHz = 12000;
 VAR_0->MaxVClockFreqKHz = 350000;
}
