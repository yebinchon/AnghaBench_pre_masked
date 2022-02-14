
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {scalar_t__ duplex; int flow_status; int speed; int netdev; int port; int hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct skge_port*,int ,int ,char*,int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct skge_port *VAR_6)
{
 FUNC_5(VAR_6->hw, FUNC_0(VAR_6->port, VAR_4),
      VAR_1|VAR_3|VAR_2);

 FUNC_1(VAR_6->netdev);
 FUNC_3(VAR_6->netdev);

 FUNC_2(VAR_6, VAR_5, VAR_6->netdev,
     "Link is up at %d Mbps, %s duplex, flow control %s\n",
     VAR_6->speed,
     VAR_6->duplex == VAR_0 ? "full" : "half",
     FUNC_4(VAR_6->flow_status));
}
