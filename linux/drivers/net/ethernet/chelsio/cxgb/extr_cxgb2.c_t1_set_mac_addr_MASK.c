
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {size_t if_port; int dev_addr; int addr_len; struct adapter* ml_priv; } ;
struct cmac {TYPE_2__* ops; } ;
struct adapter {TYPE_1__* port; } ;
struct TYPE_4__ {int (* macaddress_set ) (struct cmac*,int ) ;} ;
struct TYPE_3__ {struct cmac* mac; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct cmac*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, void *VAR_2)
{
 struct adapter *VAR_3 = VAR_1->ml_priv;
 struct cmac *VAR_4 = VAR_3->port[VAR_1->if_port].mac;
 struct sockaddr *VAR_5 = VAR_2;

 if (!VAR_4->ops->macaddress_set)
  return -VAR_0;

 FUNC_0(VAR_1->dev_addr, VAR_5->sa_data, VAR_1->addr_len);
 VAR_4->ops->macaddress_set(VAR_4, VAR_1->dev_addr);
 return 0;
}
