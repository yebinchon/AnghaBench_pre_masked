
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int charger_connected; } ;
struct pm2xxx_charger {int lpn_pin; TYPE_1__ ac; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pm2xxx_charger *VAR_2)
{
 if (!VAR_2->ac.charger_connected && FUNC_0(VAR_2->lpn_pin)) {
  FUNC_1(VAR_2->lpn_pin, 1);
  FUNC_2(VAR_1, VAR_0);
 }
}
