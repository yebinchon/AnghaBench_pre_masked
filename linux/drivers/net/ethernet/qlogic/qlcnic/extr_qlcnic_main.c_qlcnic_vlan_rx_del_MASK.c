
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_adapter {int vlans; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,char*,int ,int) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if (FUNC_5(VAR_4)) {
  VAR_5 = FUNC_4(VAR_4, VAR_3, 0);
  if (VAR_5) {
   FUNC_1(VAR_1,
       "Cannot delete VLAN filter for VLAN id %d, err=%d",
       VAR_3, VAR_5);
   return VAR_5;
  }
 }

 FUNC_3(VAR_1, VAR_0);
 FUNC_0(VAR_3, VAR_4->vlans);
 return 0;
}
