
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct port_info {int link_config; int phy; TYPE_2__* dev; struct cmac* mac; } ;
struct cmac {TYPE_1__* ops; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {int (* enable ) (struct cmac*,int) ;int (* macaddress_set ) (struct cmac*,int ) ;int (* reset ) (struct cmac*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmac*) ;
 int FUNC_1 (struct cmac*,int ) ;
 int FUNC_2 (struct cmac*,int) ;
 int FUNC_3 (int ,struct cmac*,int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct port_info *VAR_2)
{
 struct cmac *VAR_3 = VAR_2->mac;

 VAR_3->ops->reset(VAR_3);
 if (VAR_3->ops->macaddress_set)
  VAR_3->ops->macaddress_set(VAR_3, VAR_2->dev->dev_addr);
 FUNC_4(VAR_2->dev);
 FUNC_3(VAR_2->phy, VAR_3, &VAR_2->link_config);
 VAR_3->ops->enable(VAR_3, VAR_0 | VAR_1);
}
