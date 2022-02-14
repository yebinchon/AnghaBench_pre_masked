
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct net_device {scalar_t__ ml_priv; int * netdev_ops; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct qeth_card *FUNC_2(struct net_device *VAR_2)
{
 if (FUNC_0(VAR_2))
  VAR_2 = FUNC_1(VAR_2);
 if (VAR_2->netdev_ops == &VAR_1 ||
     VAR_2->netdev_ops == &VAR_0)
  return (struct qeth_card *) VAR_2->ml_priv;
 return ((void*)0);
}
