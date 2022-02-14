
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ibmvnic_adapter {int priv_flags; } ;


 int VAR_0 ;
 struct ibmvnic_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, u32 VAR_2)
{
 struct ibmvnic_adapter *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4 = !!(VAR_2 & VAR_0);

 if (VAR_4)
  VAR_3->priv_flags |= VAR_0;
 else
  VAR_3->priv_flags &= ~VAR_0;

 return 0;
}
