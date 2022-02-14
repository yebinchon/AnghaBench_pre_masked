
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_port_vlan_cmd {int vlan_id; int func_idx; } ;
struct hinic_hwdev {int hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int port_vlan_cmd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hinic_hwdev*,int ,struct hinic_port_vlan_cmd*,int,int *,int *) ;

int FUNC_2(struct hinic_dev *VAR_1, u16 VAR_2)
{
 struct hinic_hwdev *VAR_3 = VAR_1->hwdev;
 struct hinic_port_vlan_cmd VAR_4;

 VAR_4.func_idx = FUNC_0(VAR_3->hwif);
 VAR_4.vlan_id = VAR_2;

 return FUNC_1(VAR_3, VAR_0,
     &VAR_4, sizeof(VAR_4),
     ((void*)0), ((void*)0));
}
