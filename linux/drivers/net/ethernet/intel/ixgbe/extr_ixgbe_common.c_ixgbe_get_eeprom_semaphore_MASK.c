
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_3)
{
 u32 VAR_4 = 2000;
 u32 VAR_5;
 u32 VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {




  VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_3));
  if (!(VAR_6 & VAR_1))
   break;
  FUNC_5(50, 100);
 }

 if (VAR_5 == VAR_4) {
  FUNC_3(VAR_3, "Driver can't access the Eeprom - SMBI Semaphore not granted.\n");





  FUNC_4(VAR_3);

  FUNC_5(50, 100);




  VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_3));
  if (VAR_6 & VAR_1) {
   FUNC_3(VAR_3, "Software semaphore SMBI between device drivers not granted.\n");
   return VAR_0;
  }
 }


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_3));


  VAR_6 |= VAR_2;
  FUNC_2(VAR_3, FUNC_1(VAR_3), VAR_6);




  VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_3));
  if (VAR_6 & VAR_2)
   break;

  FUNC_5(50, 100);
 }




 if (VAR_5 >= VAR_4) {
  FUNC_3(VAR_3, "SWESMBI Software EEPROM semaphore not granted.\n");
  FUNC_4(VAR_3);
  return VAR_0;
 }

 return 0;
}
