
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dev; } ;
struct inet6_dev {int addr_list; } ;
struct in_device {int ifa_list; } ;




 struct inet6_dev* FUNC_0 (struct net_device*) ;
 struct in_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static bool
FUNC_5(struct mlxsw_sp_rif *VAR_0, struct net_device *VAR_1,
      unsigned long VAR_2)
{
 struct inet6_dev *VAR_3;
 bool VAR_4 = 1;
 struct in_device *VAR_5;

 switch (VAR_2) {
 case 128:
  return VAR_0 == ((void*)0);
 case 129:
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5 && VAR_5->ifa_list)
   VAR_4 = 0;

  VAR_3 = FUNC_0(VAR_1);
  if (VAR_4 && VAR_3 &&
      !FUNC_2(&VAR_3->addr_list))
   VAR_4 = 0;




  if (FUNC_4(VAR_1) && VAR_4)
   return 1;

  if (VAR_0 && VAR_4 &&
      !FUNC_3(VAR_0->dev))
   return 1;




  return 0;
 }

 return 0;
}
