
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct port_info {scalar_t__ adapter; } ;
struct net_device {int dummy; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

struct t3cdev *FUNC_1(struct net_device *VAR_0)
{
 const struct port_info *VAR_1 = FUNC_0(VAR_0);

 return (struct t3cdev *)VAR_1->adapter;
}
