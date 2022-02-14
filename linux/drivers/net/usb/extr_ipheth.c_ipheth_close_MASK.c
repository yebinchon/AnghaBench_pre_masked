
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipheth_device {int carrier_work; } ;


 int FUNC_0 (int *) ;
 struct ipheth_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct ipheth_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->carrier_work);
 FUNC_2(VAR_0);
 return 0;
}
