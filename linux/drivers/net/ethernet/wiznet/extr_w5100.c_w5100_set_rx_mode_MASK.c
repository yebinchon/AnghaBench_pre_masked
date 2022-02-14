
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w5100_priv {int promisc; int setrx_work; TYPE_1__* ops; } ;
struct net_device {int flags; } ;
struct TYPE_2__ {scalar_t__ may_sleep; } ;


 int VAR_0 ;
 struct w5100_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct w5100_priv*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct w5100_priv *VAR_2 = FUNC_0(VAR_1);
 bool VAR_3 = (VAR_1->flags & VAR_0) != 0;

 if (VAR_2->promisc != VAR_3) {
  VAR_2->promisc = VAR_3;

  if (VAR_2->ops->may_sleep)
   FUNC_1(&VAR_2->setrx_work);
  else
   FUNC_2(VAR_2);
 }
}
