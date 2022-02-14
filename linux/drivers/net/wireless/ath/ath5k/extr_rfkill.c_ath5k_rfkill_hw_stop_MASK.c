
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int toggleq; } ;
struct TYPE_4__ {int ee_header; } ;
struct TYPE_5__ {TYPE_1__ cap_eeprom; } ;
struct ath5k_hw {TYPE_3__ rf_kill; TYPE_2__ ah_capabilities; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct ath5k_hw *VAR_0)
{

 if (FUNC_0(VAR_0->ah_capabilities.cap_eeprom.ee_header))
  FUNC_2(VAR_0, 0);

 FUNC_3(&VAR_0->rf_kill.toggleq);


 FUNC_1(VAR_0);
}
