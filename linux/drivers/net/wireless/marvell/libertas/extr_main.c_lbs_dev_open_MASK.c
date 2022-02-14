
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int driver_lock; int tx_pending_len; int iface_running; } ;


 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct lbs_private *VAR_1 = VAR_0->ml_priv;
 int VAR_2 = 0;

 if (!VAR_1->iface_running) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   goto out;
 }

 FUNC_3(&VAR_1->driver_lock);

 FUNC_1(VAR_0);

 if (!VAR_1->tx_pending_len)
  FUNC_2(VAR_0);

 FUNC_4(&VAR_1->driver_lock);

out:
 return VAR_2;
}
