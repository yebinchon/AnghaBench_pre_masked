
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;
struct bonding {int dummy; } ;


 struct net_device* FUNC_0 (struct bonding*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct bonding *VAR_0)
{
 const struct net_device *VAR_1;
 int VAR_2;

 FUNC_1();
 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = VAR_1 ? VAR_1->ifindex : 0;
 FUNC_2();
 return VAR_2;
}
