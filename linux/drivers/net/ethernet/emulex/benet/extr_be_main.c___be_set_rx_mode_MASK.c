
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct be_adapter {int rx_filter_lock; struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct be_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 FUNC_5(&VAR_1->rx_filter_lock);

 if (VAR_2->flags & VAR_0) {
  if (!FUNC_0(VAR_1))
   FUNC_1(VAR_1);
 } else if (FUNC_0(VAR_1)) {




  FUNC_4(VAR_1);
 }

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 FUNC_6(&VAR_1->rx_filter_lock);
}
