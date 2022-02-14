
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_vport {int vlan_mode; int pvid; } ;
struct qlcnic_adapter {int netdev; } ;
typedef int __u32 ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static __u32 FUNC_1(struct qlcnic_adapter *VAR_1,
          struct qlcnic_vport *VAR_2, int VAR_3)
{
 __u32 VAR_4 = 0;

 switch (VAR_2->vlan_mode) {
 case 128:
  VAR_4 = VAR_2->pvid;
  break;
 case 130:
  VAR_4 = VAR_0;
  break;
 case 129:
  VAR_4 = 0;
  break;
 default:
  FUNC_0(VAR_1->netdev, "Invalid VLAN mode = %d for VF %d\n",
       VAR_2->vlan_mode, VAR_3);
 }

 return VAR_4;
}
