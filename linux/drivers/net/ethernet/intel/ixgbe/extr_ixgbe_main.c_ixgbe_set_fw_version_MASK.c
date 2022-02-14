
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_nvm_version {int oem_major; int oem_minor; int oem_release; int etk_id; int or_major; int or_build; int or_patch; scalar_t__ or_valid; scalar_t__ oem_valid; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int eeprom_id; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,struct ixgbe_nvm_version*) ;
 int FUNC_1 (struct ixgbe_hw*,struct ixgbe_nvm_version*) ;
 int FUNC_2 (struct ixgbe_hw*,struct ixgbe_nvm_version*) ;
 int FUNC_3 (int ,int,char*,int,...) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;
 struct ixgbe_nvm_version VAR_2;

 FUNC_1(VAR_1, &VAR_2);
 if (VAR_2.oem_valid) {
  FUNC_3(VAR_0->eeprom_id, sizeof(VAR_0->eeprom_id),
    "%x.%x.%x", VAR_2.oem_major, VAR_2.oem_minor,
    VAR_2.oem_release);
  return;
 }

 FUNC_0(VAR_1, &VAR_2);
 FUNC_2(VAR_1, &VAR_2);

 if (VAR_2.or_valid) {
  FUNC_3(VAR_0->eeprom_id, sizeof(VAR_0->eeprom_id),
    "0x%08x, %d.%d.%d", VAR_2.etk_id, VAR_2.or_major,
    VAR_2.or_build, VAR_2.or_patch);
  return;
 }


 FUNC_3(VAR_0->eeprom_id, sizeof(VAR_0->eeprom_id),
   "0x%08x", VAR_2.etk_id);
}
