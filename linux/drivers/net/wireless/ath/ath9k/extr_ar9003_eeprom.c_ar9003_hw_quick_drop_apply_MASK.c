
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int quick_drop_low; int quick_drop_high; } ;
struct TYPE_7__ {int quick_drop; } ;
struct TYPE_6__ {int quick_drop; } ;
struct ar9300_base_eep_hdr {int miscConfiguration; } ;
struct ar9300_eeprom {TYPE_4__ base_ext1; TYPE_3__ modalHeader5G; TYPE_2__ modalHeader2G; struct ar9300_base_eep_hdr baseEepHeader; } ;
struct TYPE_5__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ath_hw*,int ,int ,int) ;
 int FUNC_5 (int,int*,int*,int) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_2, u16 VAR_3)
{
 struct ar9300_eeprom *VAR_4 = &VAR_2->eeprom.ar9300_eep;
 struct ar9300_base_eep_hdr *VAR_5 = &VAR_4->baseEepHeader;
 int VAR_6;
 s32 VAR_7[3], VAR_8[3] = {5180, 5500, 5785};

 if (!(VAR_5->miscConfiguration & FUNC_3(4)))
  return;

 if (FUNC_0(VAR_2) || FUNC_2(VAR_2) || FUNC_1(VAR_2)) {
  if (VAR_3 < 4000) {
   VAR_6 = VAR_4->modalHeader2G.quick_drop;
  } else {
   VAR_7[0] = VAR_4->base_ext1.quick_drop_low;
   VAR_7[1] = VAR_4->modalHeader5G.quick_drop;
   VAR_7[2] = VAR_4->base_ext1.quick_drop_high;
   VAR_6 = FUNC_5(VAR_3, VAR_8, VAR_7, 3);
  }
  FUNC_4(VAR_2, VAR_0, VAR_1, VAR_6);
 }
}
