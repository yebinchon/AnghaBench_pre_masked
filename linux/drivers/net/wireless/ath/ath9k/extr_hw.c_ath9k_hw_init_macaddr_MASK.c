
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_hw {TYPE_1__* eep_ops; } ;
struct ath_common {int* macaddr; } ;
struct TYPE_2__ {int (* get_eeprom ) (struct ath_hw*,int const) ;} ;





 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,char*,int*) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (struct ath_hw*,int const) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_0)
{
 struct ath_common *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;
 u16 VAR_3;
 static const u32 VAR_4[] = { 130, 129, 128 };


 if (FUNC_3(VAR_1->macaddr))
  return;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  VAR_3 = VAR_0->eep_ops->get_eeprom(VAR_0, VAR_4[VAR_2]);
  VAR_1->macaddr[2 * VAR_2] = VAR_3 >> 8;
  VAR_1->macaddr[2 * VAR_2 + 1] = VAR_3 & 0xff;
 }

 if (FUNC_3(VAR_1->macaddr))
  return;

 FUNC_1(VAR_1, "eeprom contains invalid mac address: %pM\n",
  VAR_1->macaddr);

 FUNC_2(VAR_1->macaddr);
 FUNC_1(VAR_1, "random mac address will be used: %pM\n",
  VAR_1->macaddr);

 return;
}
