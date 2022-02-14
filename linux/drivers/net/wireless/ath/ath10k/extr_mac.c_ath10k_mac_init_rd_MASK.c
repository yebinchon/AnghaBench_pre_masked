
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int current_rd; } ;
struct TYPE_4__ {TYPE_1__ regulatory; } ;
struct ath10k {TYPE_2__ ath_common; int hw_eeprom_rd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,int *) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 VAR_2 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_2) {
  FUNC_0(VAR_1, VAR_0,
      "fallback to eeprom programmed regulatory settings\n");
  VAR_3 = VAR_1->hw_eeprom_rd;
 }

 VAR_1->ath_common.regulatory.current_rd = VAR_3;
 return 0;
}
