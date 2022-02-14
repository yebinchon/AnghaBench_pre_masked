
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int bb_watchdog_last_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;

bool FUNC_7(struct ath_hw *VAR_3)
{
 u32 VAR_4;

 switch(VAR_3->bb_watchdog_last_status) {
 case 0x04000539:
  VAR_4 = FUNC_3(VAR_3, VAR_1);
  VAR_4 &= (~VAR_2);
  VAR_4 |= FUNC_5(0x7f, VAR_2);
  FUNC_4(VAR_3, VAR_1, VAR_4);
  FUNC_6(1);
  VAR_4 = FUNC_3(VAR_3, VAR_1);
  VAR_4 &= ~VAR_2;
  VAR_4 |= FUNC_5(VAR_0, VAR_2);
  FUNC_4(VAR_3, VAR_1, VAR_4);

  return 0;
 case 0x1300000a:
  return 0;
 case 0x0400000a:
 case 0x04000b09:
  return 1;
 case 0x04000409:
  if (FUNC_0(VAR_3) || FUNC_1(VAR_3) || FUNC_2(VAR_3))
   return 0;
  else
   return 1;
 default:




  return 1;
 }
}
