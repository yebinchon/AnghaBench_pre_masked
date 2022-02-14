
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct ath9k_eeprom_ctx {int complete; TYPE_1__* ah; } ;
struct TYPE_2__ {struct firmware const* eeprom_blob; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(const struct firmware *VAR_0,
        void *VAR_1)
{
 struct ath9k_eeprom_ctx *VAR_2 = VAR_1;

 if (VAR_0)
  VAR_2->ah->eeprom_blob = VAR_0;

 FUNC_0(&VAR_2->complete);
}
