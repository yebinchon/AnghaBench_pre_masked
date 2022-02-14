
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_adapter {int vlans; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (struct net_device*,char*,int ,int) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 if (FUNC_3(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3, VAR_2, 1);
  if (VAR_4) {
   FUNC_0(VAR_0,
       "Cannot add VLAN filter for VLAN id %d, err=%d",
       VAR_2, VAR_4);
   return VAR_4;
  }
 }

 FUNC_4(VAR_2, VAR_3->vlans);
 return 0;
}
