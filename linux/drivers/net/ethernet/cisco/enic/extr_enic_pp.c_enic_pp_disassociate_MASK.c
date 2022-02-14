
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct enic_port_profile {int mac_addr; } ;
struct enic {struct net_device* netdev; } ;


 int FUNC_0 (int,int,struct enic*,int ,int ) ;
 int FUNC_1 (struct enic*,int,struct enic_port_profile*,int*) ;
 int VAR_0 ;
 int FUNC_2 (struct enic*,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct enic *VAR_2, int VAR_3,
 struct enic_port_profile *VAR_4, int *VAR_5)
{
 struct net_device *VAR_6 = VAR_2->netdev;
 struct enic_port_profile *VAR_7;
 int VAR_8;

 FUNC_1(VAR_2, VAR_3, VAR_7, &VAR_8);
 if (VAR_8)
  return VAR_8;


 if (!FUNC_3(VAR_7->mac_addr))
  FUNC_0(VAR_3, VAR_8, VAR_2, VAR_1,
   VAR_7->mac_addr);
 else if (VAR_3 == VAR_0 && !FUNC_3(VAR_6->dev_addr))
  FUNC_0(VAR_3, VAR_8, VAR_2, VAR_1,
   VAR_6->dev_addr);

 return FUNC_2(VAR_2, VAR_3);
}
