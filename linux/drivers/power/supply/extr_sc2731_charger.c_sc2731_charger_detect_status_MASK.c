
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc2731_charger_info {unsigned int limit; int work; TYPE_1__* usb_phy; } ;
struct TYPE_2__ {scalar_t__ chg_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct sc2731_charger_info *VAR_1)
{
 unsigned int VAR_2, VAR_3;






 if (VAR_1->usb_phy->chg_state != VAR_0)
  return;

 FUNC_1(VAR_1->usb_phy, &VAR_2, &VAR_3);
 VAR_1->limit = VAR_2;

 FUNC_0(&VAR_1->work);
}
