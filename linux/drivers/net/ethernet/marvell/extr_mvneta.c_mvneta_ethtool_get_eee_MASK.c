
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mvneta_port {int phylink; int tx_lpi_enabled; int eee_active; int eee_enabled; } ;
struct ethtool_eee {int tx_lpi_timer; int tx_lpi_enabled; int eee_active; int eee_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvneta_port*,int ) ;
 struct mvneta_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ethtool_eee*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
      struct ethtool_eee *VAR_2)
{
 struct mvneta_port *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);

 VAR_2->eee_enabled = VAR_3->eee_enabled;
 VAR_2->eee_active = VAR_3->eee_active;
 VAR_2->tx_lpi_enabled = VAR_3->tx_lpi_enabled;
 VAR_2->tx_lpi_timer = (VAR_4) >> 8;

 return FUNC_2(VAR_3->phylink, VAR_2);
}
