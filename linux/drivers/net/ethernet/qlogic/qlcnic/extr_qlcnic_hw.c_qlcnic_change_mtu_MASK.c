
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct net_device {int mtu; } ;


 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*,int) ;

int FUNC_2(struct net_device *VAR_0, int VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1);

 if (!VAR_3)
  VAR_0->mtu = VAR_1;

 return VAR_3;
}
