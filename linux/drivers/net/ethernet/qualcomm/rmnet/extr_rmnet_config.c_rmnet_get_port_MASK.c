
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_port {int dummy; } ;
struct net_device {int rx_handler_data; } ;


 struct rmnet_port* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

struct rmnet_port *FUNC_2(struct net_device *VAR_0)
{
 if (FUNC_1(VAR_0))
  return FUNC_0(VAR_0->rx_handler_data);
 else
  return ((void*)0);
}
