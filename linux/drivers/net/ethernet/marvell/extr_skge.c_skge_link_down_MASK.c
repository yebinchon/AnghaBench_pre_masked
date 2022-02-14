
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int netdev; int port; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct skge_port*,int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct skge_port *VAR_3)
{
 FUNC_4(VAR_3->hw, FUNC_0(VAR_3->port, VAR_1), VAR_0);
 FUNC_1(VAR_3->netdev);
 FUNC_3(VAR_3->netdev);

 FUNC_2(VAR_3, VAR_2, VAR_3->netdev, "Link is down\n");
}
