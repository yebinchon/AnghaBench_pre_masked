
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int charger_connected; } ;
struct pm2xxx_charger {int ac_conn; int ac_work; int charger_wq; TYPE_1__ ac; } ;


 int FUNC_0 (struct pm2xxx_charger*,scalar_t__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct pm2xxx_charger *VAR_0, int VAR_1)
{

 int VAR_2;
 u8 VAR_3;






 VAR_2 = FUNC_0(VAR_0, &VAR_3);

 if ((VAR_2 == 0) && VAR_3) {
  VAR_0->ac.charger_connected = 1;
  VAR_0->ac_conn = 1;
  FUNC_1(VAR_0->charger_wq, &VAR_0->ac_work);
 }


 return VAR_2;
}
