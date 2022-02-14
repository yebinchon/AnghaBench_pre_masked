
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct odm_dm_struct {int BoardType; int SupportPlatform; int SupportInterface; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct odm_dm_struct odmpriv; } ;



__attribute__((used)) static bool FUNC_0(struct adapter *VAR_0, const u32 VAR_1)
{
 struct odm_dm_struct *VAR_2 = &VAR_0->HalData->odmpriv;
 u32 VAR_3 = VAR_2->BoardType;
 u32 VAR_4 = VAR_2->SupportPlatform;
 u32 VAR_5 = VAR_2->SupportInterface;
 u32 VAR_6 = VAR_1;

 if (VAR_1 == 0xCDCDCDCD)
  return 1;

 VAR_6 = VAR_1 & 0x000000FF;
 if ((VAR_3 == VAR_6) && VAR_6 != 0x00)
  return 0;

 VAR_6 = VAR_1 & 0x0000FF00;
 VAR_6 >>= 8;
 if ((VAR_5 & VAR_6) == 0 && VAR_6 != 0x07)
  return 0;

 VAR_6 = VAR_1 & 0x00FF0000;
 VAR_6 >>= 16;
 if ((VAR_4 & VAR_6) == 0 && VAR_6 != 0x0F)
  return 0;
 return 1;
}
