
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct phy_device {int link; } ;
struct et131x_adapter {int boot_coma; int error_timer; TYPE_1__* netdev; } ;
struct TYPE_2__ {struct phy_device* phydev; } ;


 int VAR_0 ;
 struct et131x_adapter* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 scalar_t__ FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct et131x_adapter*) ;
 struct et131x_adapter* FUNC_5 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_4)
{
 struct et131x_adapter *VAR_5 = FUNC_5(VAR_5, VAR_4, VAR_2);
 struct phy_device *VAR_6 = VAR_5->netdev->phydev;

 if (FUNC_2(VAR_5)) {




  FUNC_0(VAR_5);
  VAR_5->boot_coma = 20;
 } else {
  FUNC_3(VAR_5);
 }

 if (!VAR_6->link && VAR_5->boot_coma < 11)
  VAR_5->boot_coma++;

 if (VAR_5->boot_coma == 10) {
  if (!VAR_6->link) {
   if (!FUNC_2(VAR_5)) {



    FUNC_4(VAR_5);
    FUNC_1(VAR_5);
   }
  }
 }


 FUNC_6(&VAR_5->error_timer, VAR_3 +
    FUNC_7(VAR_0));
}
