
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {scalar_t__ initPDADC; TYPE_1__* eep_ops; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_6)
{
 u32 VAR_7;
 int32_t VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 VAR_9 = FUNC_0(VAR_7, VAR_4);

 if (VAR_6->initPDADC == 0 || VAR_9 == 0) {





  return;
 } else {
  VAR_10 = VAR_6->eep_ops->get_eeprom(VAR_6, VAR_5);

  if (VAR_10 == 0) {
   VAR_8 = 0;
  } else {
   VAR_8 = ((VAR_9 - VAR_6->initPDADC)*4) / VAR_10;
  }
  FUNC_2(VAR_6, VAR_0,
         VAR_3, VAR_8);
  FUNC_2(VAR_6, VAR_1,
         VAR_3, VAR_8);
 }
}
