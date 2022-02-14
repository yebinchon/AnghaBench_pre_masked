
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct igb_adapter {int ptp_flags; TYPE_2__* netdev; TYPE_1__* pdev; scalar_t__ ptp_clock; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct igb_adapter *VAR_1)
{
 FUNC_1(VAR_1);

 if (VAR_1->ptp_clock) {
  FUNC_2(VAR_1->ptp_clock);
  FUNC_0(&VAR_1->pdev->dev, "removed PHC on %s\n",
    VAR_1->netdev->name);
  VAR_1->ptp_flags &= ~VAR_0;
 }
}
