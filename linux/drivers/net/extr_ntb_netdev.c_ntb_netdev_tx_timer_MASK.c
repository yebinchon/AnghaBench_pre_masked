
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ntb_netdev {int tx_timer; int qp; struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 struct ntb_netdev* VAR_0 ;
 struct ntb_netdev* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct ntb_netdev *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);
 struct net_device *VAR_7 = VAR_6->ndev;

 if (FUNC_4(VAR_6->qp) < VAR_2) {
  FUNC_1(&VAR_6->tx_timer, VAR_1 + FUNC_6(VAR_3));
 } else {



  FUNC_5();
  if (FUNC_2(VAR_7))
   FUNC_3(VAR_7);
 }
}
