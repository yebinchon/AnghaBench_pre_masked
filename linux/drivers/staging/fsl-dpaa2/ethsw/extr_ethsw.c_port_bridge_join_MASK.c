
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethsw_port_priv {struct net_device* bridge_dev; struct ethsw_core* ethsw_data; } ;
struct TYPE_4__ {int num_ifs; } ;
struct ethsw_core {TYPE_1__** ports; TYPE_2__ sw_attr; } ;
struct TYPE_3__ {struct net_device* bridge_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethsw_port_priv*,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ethsw_port_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
       struct net_device *VAR_2)
{
 struct ethsw_port_priv *VAR_3 = FUNC_2(VAR_1);
 struct ethsw_core *VAR_4 = VAR_3->ethsw_data;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->sw_attr.num_ifs; VAR_5++)
  if (VAR_4->ports[VAR_5]->bridge_dev &&
      (VAR_4->ports[VAR_5]->bridge_dev != VAR_2)) {
   FUNC_1(VAR_1,
       "Only one bridge supported per DPSW object!\n");
   return -VAR_0;
  }


 VAR_6 = FUNC_0(VAR_3, 1);
 if (!VAR_6)
  VAR_3->bridge_dev = VAR_2;

 return VAR_6;
}
