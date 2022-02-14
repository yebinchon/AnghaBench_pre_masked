
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct lan743x_adapter {int dummy; } ;


 int FUNC_0 (struct lan743x_adapter*,int) ;
 struct lan743x_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1)
{
 struct lan743x_adapter *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_3)
  VAR_0->mtu = VAR_1;
 return VAR_3;
}
