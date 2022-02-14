
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int driver_lock; int tx_pending_len; TYPE_1__* wdev; int iface_running; } ;
struct TYPE_2__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lbs_private*,int ,int ) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3)
{
 struct lbs_private *VAR_4 = VAR_3->ml_priv;
 int VAR_5 = 0;

 if (!VAR_4->iface_running) {
  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5)
   goto out;
 }

 FUNC_5(&VAR_4->driver_lock);

 if (VAR_4->wdev->iftype == VAR_2) {
  VAR_5 = -VAR_1;
  FUNC_6(&VAR_4->driver_lock);
  goto out;
 }

 FUNC_3(VAR_3);

 if (!VAR_4->tx_pending_len)
  FUNC_4(VAR_3);

 FUNC_6(&VAR_4->driver_lock);

 VAR_5 = FUNC_0(VAR_4, VAR_0,
  FUNC_1(VAR_4));

out:
 return VAR_5;
}
