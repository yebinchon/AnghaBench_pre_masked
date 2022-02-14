
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mvpp2_port {int phylink; } ;


 int VAR_0 ;
 struct mvpp2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct mvpp2_port *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->phylink)
  return -VAR_0;

 return FUNC_1(VAR_2->phylink);
}
