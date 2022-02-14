
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int hw; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct skge_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct skge_port *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_1->hw))
  FUNC_0(VAR_0);
 else
  FUNC_3(VAR_0);

}
