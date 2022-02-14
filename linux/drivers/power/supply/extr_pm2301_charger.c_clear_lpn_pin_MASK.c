
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int charger_connected; } ;
struct pm2xxx_charger {int lpn_pin; TYPE_1__ ac; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pm2xxx_charger *VAR_0)
{
 if (!VAR_0->ac.charger_connected && FUNC_0(VAR_0->lpn_pin))
  FUNC_1(VAR_0->lpn_pin, 0);
}
