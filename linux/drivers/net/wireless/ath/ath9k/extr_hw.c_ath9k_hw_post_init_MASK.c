
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int max; } ;
struct TYPE_7__ {int max; } ;
struct ath_hw {TYPE_4__ nf_5g; TYPE_3__ nf_2g; TYPE_2__* eep_ops; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct TYPE_6__ {int (* get_eeprom ) (struct ath_hw*,int ) ;int (* get_eeprom_rev ) (struct ath_hw*) ;int (* get_eeprom_ver ) (struct ath_hw*) ;} ;
struct TYPE_5__ {scalar_t__ ath_bus_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*,int ) ;

__attribute__((used)) static int FUNC_10(struct ath_hw *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;

 if (VAR_8->bus_ops->ath_bus_type != VAR_2) {
  if (!FUNC_3(VAR_7))
   return -VAR_6;
 }

 if (!FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9 != 0)
   return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 != 0)
  return VAR_9;

 FUNC_6(FUNC_4(VAR_7), VAR_3, "Eeprom VER: %d, REV: %d\n",
  VAR_7->eep_ops->get_eeprom_ver(VAR_7),
  VAR_7->eep_ops->get_eeprom_rev(VAR_7));

 FUNC_2(VAR_7);





 if (FUNC_0(VAR_7)) {
  u16 VAR_10 = VAR_7->eep_ops->get_eeprom(VAR_7, VAR_5);
  if ((VAR_10 & 0xF0) == VAR_4) {
   VAR_7->nf_2g.max = VAR_0;
   VAR_7->nf_5g.max = VAR_1;
  }
 }

 return 0;
}
