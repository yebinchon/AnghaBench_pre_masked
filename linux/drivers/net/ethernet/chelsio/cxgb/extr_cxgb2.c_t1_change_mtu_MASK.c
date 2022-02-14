
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {size_t if_port; int mtu; struct adapter* ml_priv; } ;
struct cmac {TYPE_2__* ops; } ;
struct adapter {TYPE_1__* port; } ;
struct TYPE_4__ {int (* set_mtu ) (struct cmac*,int) ;} ;
struct TYPE_3__ {struct cmac* mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct cmac*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2)
{
 int VAR_3;
 struct adapter *VAR_4 = VAR_1->ml_priv;
 struct cmac *VAR_5 = VAR_4->port[VAR_1->if_port].mac;

 if (!VAR_5->ops->set_mtu)
  return -VAR_0;
 if ((VAR_3 = VAR_5->ops->set_mtu(VAR_5, VAR_2)))
  return VAR_3;
 VAR_1->mtu = VAR_2;
 return 0;
}
