
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_port {scalar_t__ nr_rmnet_devs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rmnet_port*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
     struct rmnet_port *VAR_2)
{
 if (VAR_2->nr_rmnet_devs)
  return -VAR_0;

 FUNC_3(VAR_1);

 FUNC_1(VAR_2);


 FUNC_0(VAR_1);

 FUNC_2(VAR_1, "Removed from rmnet\n");
 return 0;
}
