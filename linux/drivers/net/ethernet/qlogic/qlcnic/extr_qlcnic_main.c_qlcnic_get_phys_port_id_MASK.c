
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_hardware_context {int phys_port_id; } ;
struct qlcnic_adapter {int flags; struct qlcnic_hardware_context* ahw; } ;
struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
       struct netdev_phys_item_id *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_1(VAR_2);
 struct qlcnic_hardware_context *VAR_5 = VAR_4->ahw;

 if (!(VAR_4->flags & VAR_1))
  return -VAR_0;

 VAR_3->id_len = sizeof(VAR_5->phys_port_id);
 FUNC_0(VAR_3->id, VAR_5->phys_port_id, VAR_3->id_len);

 return 0;
}
