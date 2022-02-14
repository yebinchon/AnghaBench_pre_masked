
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtsx_chip {int max_lun; int* lun2card; scalar_t__ hw_bypass_sd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ,scalar_t__) ;

void FUNC_2(struct rtsx_chip *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_7, VAR_2);
 int VAR_9;

 for (VAR_9 = 0; VAR_9 <= VAR_7->max_lun; VAR_9++) {
  if (VAR_7->lun2card[VAR_9] & VAR_5)
   VAR_8 |= VAR_6;
  if (VAR_7->lun2card[VAR_9] & VAR_3)
   VAR_8 |= VAR_4;
  if (VAR_7->lun2card[VAR_9] & VAR_0)
   VAR_8 |= VAR_1;
 }
 if (VAR_7->hw_bypass_sd)
  VAR_8 &= ~((u32)VAR_4);

 FUNC_1(VAR_7, VAR_2, VAR_8);
}
