
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {scalar_t__ open_device_map; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,struct port_info*,int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct port_info *VAR_1 = FUNC_2(VAR_0);
 struct adapter *VAR_2 = VAR_1->adapter;

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 FUNC_5(VAR_2, VAR_1, 0, 0);

 FUNC_1(VAR_1->port_id, &VAR_2->open_device_map);
 if (VAR_2->open_device_map == 0)
  FUNC_0(VAR_2);
 return 0;
}
