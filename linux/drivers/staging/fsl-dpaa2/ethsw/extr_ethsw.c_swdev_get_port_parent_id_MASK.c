
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_phys_item_id {int id_len; int * id; } ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {TYPE_1__* ethsw_data; } ;
struct TYPE_2__ {int dev_id; } ;


 struct ethsw_port_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
        struct netdev_phys_item_id *VAR_1)
{
 struct ethsw_port_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->id_len = 1;
 VAR_1->id[0] = VAR_2->ethsw_data->dev_id;

 return 0;
}
