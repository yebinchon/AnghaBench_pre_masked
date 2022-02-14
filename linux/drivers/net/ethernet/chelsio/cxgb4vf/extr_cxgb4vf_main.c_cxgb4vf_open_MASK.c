
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int port_id; int vlan_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int flags; scalar_t__ open_device_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct net_device*) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct port_info*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 int VAR_3;
 struct port_info *VAR_4 = FUNC_3(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;





 if (!(VAR_5->flags & VAR_0))
  return -VAR_1;





 if (VAR_5->open_device_map == 0) {
  VAR_3 = FUNC_1(VAR_5);
  if (VAR_3)
   return VAR_3;
 }




 VAR_3 = FUNC_7(VAR_4);
 if (VAR_3 < 0)
  return VAR_3;




 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto err_unwind;

 VAR_4->vlan_id = FUNC_6(VAR_5);

 FUNC_4(VAR_2);
 FUNC_5(VAR_4->port_id, &VAR_5->open_device_map);
 return 0;

err_unwind:
 if (VAR_5->open_device_map == 0)
  FUNC_0(VAR_5);
 return VAR_3;
}
