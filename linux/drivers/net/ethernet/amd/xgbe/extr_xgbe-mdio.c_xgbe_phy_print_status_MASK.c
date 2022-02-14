
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ duplex; int speed; scalar_t__ link; } ;
struct xgbe_prv_data {int netdev; TYPE_1__ phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_1)
{
 if (VAR_1->phy.link)
  FUNC_0(VAR_1->netdev,
       "Link is Up - %s/%s - flow control %s\n",
       FUNC_2(VAR_1->phy.speed),
       VAR_1->phy.duplex == VAR_0 ? "Full" : "Half",
       FUNC_1(VAR_1));
 else
  FUNC_0(VAR_1->netdev, "Link is Down\n");
}
