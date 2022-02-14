
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipvl_dev {int port; } ;


 struct ipvl_dev* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct net_device const*) ;

__attribute__((used)) static bool FUNC_2(const struct net_device *VAR_0)
{
 struct ipvl_dev *VAR_1 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_0))
  return 0;

 if (!VAR_1 || !VAR_1->port)
  return 0;

 return 1;
}
