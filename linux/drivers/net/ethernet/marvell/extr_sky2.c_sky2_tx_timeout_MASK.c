
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {size_t port; int tx_prod; int tx_cons; struct sky2_hw* hw; } ;
struct sky2_hw {int restart_work; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct net_device*,char*,int ,int ,int ,int ) ;
 struct sky2_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sky2_port*,int ,struct net_device*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sky2_hw*,int ) ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct sky2_port *VAR_7 = FUNC_2(VAR_6);
 struct sky2_hw *VAR_8 = VAR_7->hw;

 FUNC_3(VAR_7, VAR_4, VAR_6, "tx timeout\n");

 FUNC_1(VAR_0, VAR_6, "transmit ring %u .. %u report=%u done=%u\n",
        VAR_7->tx_cons, VAR_7->tx_prod,
        FUNC_5(VAR_8, VAR_7->port == 0 ? VAR_2 : VAR_3),
        FUNC_5(VAR_8, FUNC_0(VAR_5[VAR_7->port], VAR_1)));


 FUNC_4(&VAR_8->restart_work);
}
