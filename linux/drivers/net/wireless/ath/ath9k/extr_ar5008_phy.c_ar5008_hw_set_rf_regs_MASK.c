
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int ia_rows; } ;
struct ath_hw {int * analogBank6Data; TYPE_1__* eep_ops; TYPE_2__ iniBank6; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_3__ {int (* get_eeprom_rev ) (struct ath_hw*) ;int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int,int,int ) ;
 int FUNC_5 (struct ath_hw*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,int ) ;
 int FUNC_8 (struct ath_hw*,int ) ;
 int FUNC_9 (struct ath_hw*,int ) ;
 int FUNC_10 (struct ath_hw*,int ) ;

__attribute__((used)) static bool FUNC_11(struct ath_hw *VAR_9,
      struct ath9k_channel *VAR_10,
      u16 VAR_11)
{
 u32 VAR_12;
 u32 VAR_13 = 0, VAR_14 = 0;
 u32 VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18;






 if (FUNC_0(VAR_9))
  return 1;


 VAR_12 = VAR_9->eep_ops->get_eeprom_rev(VAR_9);

 for (VAR_18 = 0; VAR_18 < VAR_9->iniBank6.ia_rows; VAR_18++)
  VAR_9->analogBank6Data[VAR_18] = FUNC_1(&VAR_9->iniBank6, VAR_18, VAR_11);


 if (VAR_12 >= 2) {
  if (FUNC_2(VAR_10)) {
   VAR_15 = VAR_9->eep_ops->get_eeprom(VAR_9, VAR_2);
   VAR_16 = VAR_9->eep_ops->get_eeprom(VAR_9, VAR_0);
   FUNC_4(VAR_9->analogBank6Data,
             VAR_15, 3, 197, 0);
   FUNC_4(VAR_9->analogBank6Data,
             VAR_16, 3, 194, 0);
  } else {
   VAR_13 = VAR_9->eep_ops->get_eeprom(VAR_9, VAR_3);
   VAR_14 = VAR_9->eep_ops->get_eeprom(VAR_9, VAR_1);
   FUNC_4(VAR_9->analogBank6Data,
             VAR_13, 3, 203, 0);
   FUNC_4(VAR_9->analogBank6Data,
             VAR_14, 3, 200, 0);
  }
 }


 FUNC_3(&VAR_4, 1, VAR_17);
 FUNC_3(&VAR_5, 1, VAR_17);
 FUNC_3(&VAR_6, 1, VAR_17);
 FUNC_3(&VAR_7, VAR_11, VAR_17);
 FUNC_5(VAR_9, &VAR_17);
 FUNC_3(&VAR_8, 1, VAR_17);

 return 1;
}
