
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {size_t port; int hw; int netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_port*,int ,int ,int ,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct skge_port *VAR_6 = FUNC_1(VAR_5);

 FUNC_2(VAR_6, VAR_3, VAR_1, VAR_6->netdev, "tx timeout\n");

 FUNC_5(VAR_6->hw, FUNC_0(VAR_4[VAR_6->port], VAR_2), VAR_0);
 FUNC_4(VAR_5);
 FUNC_3(VAR_5);
}
