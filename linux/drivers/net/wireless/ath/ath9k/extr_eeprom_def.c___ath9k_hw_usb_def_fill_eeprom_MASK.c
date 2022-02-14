
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int def; } ;
struct ath_hw {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*,int *,int,int ) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_1)
{
 u16 *VAR_2 = (u16 *)&VAR_1->eeprom.def;

 FUNC_0(VAR_1, VAR_2,
         0x100, VAR_0);
 return 1;
}
