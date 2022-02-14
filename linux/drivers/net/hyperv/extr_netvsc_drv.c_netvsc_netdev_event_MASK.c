
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; int priv_flags; int flags; int * netdev_ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (void*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_5,
          unsigned long VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = FUNC_1(VAR_7);


 if (VAR_8->netdev_ops == &VAR_4)
  return VAR_3;


 if (VAR_8->type != VAR_0)
  return VAR_3;


 if (FUNC_0(VAR_8))
  return VAR_3;


 if ((VAR_8->priv_flags & VAR_1) &&
     (VAR_8->flags & VAR_2))
  return VAR_3;

 switch (VAR_6) {
 case 130:
  return FUNC_2(VAR_8);
 case 129:
  return FUNC_3(VAR_8);
 case 128:
 case 131:
  return FUNC_4(VAR_8);
 default:
  return VAR_3;
 }
}
