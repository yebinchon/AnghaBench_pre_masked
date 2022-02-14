
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {int dummy; } ;
struct net_device {int rx_handler_data; } ;


 scalar_t__ FUNC_0 (struct net_device const*) ;
 struct team_port* FUNC_1 (int ) ;

__attribute__((used)) static struct team_port *FUNC_2(const struct net_device *VAR_0)
{
 struct team_port *VAR_1 = FUNC_1(VAR_0->rx_handler_data);

 return FUNC_0(VAR_0) ? VAR_1 : ((void*)0);
}
