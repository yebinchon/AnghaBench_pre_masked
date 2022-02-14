
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macvlan_dev {int dummy; } ;


 size_t FUNC_0 (struct macvlan_dev*) ;
 struct macvlan_dev* FUNC_1 (struct net_device const*) ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static size_t FUNC_3(const struct net_device *VAR_0)
{
 struct macvlan_dev *VAR_1 = FUNC_1(VAR_0);

 return (0
  + FUNC_2(4)
  + FUNC_2(2)
  + FUNC_2(4)
  + FUNC_0(VAR_1)
  );
}
