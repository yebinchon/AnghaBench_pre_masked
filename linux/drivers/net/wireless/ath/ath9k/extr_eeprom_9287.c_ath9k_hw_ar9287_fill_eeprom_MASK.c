
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct TYPE_2__ {scalar_t__ ath_bus_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

__attribute__((used)) static bool FUNC_5(struct ath_hw *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_2(VAR_2);

 if (!FUNC_3(VAR_2)) {
  FUNC_4(VAR_3, VAR_1, "Reading from EEPROM, not flash\n");
 }

 if (VAR_3->bus_ops->ath_bus_type == VAR_0)
  return FUNC_1(VAR_2);
 else
  return FUNC_0(VAR_2);
}
