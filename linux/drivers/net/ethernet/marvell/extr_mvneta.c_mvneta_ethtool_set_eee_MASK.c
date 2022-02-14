
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mvneta_port {int phylink; scalar_t__ tx_lpi_enabled; scalar_t__ eee_enabled; } ;
struct ethtool_eee {int tx_lpi_timer; scalar_t__ eee_enabled; scalar_t__ tx_lpi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,int) ;
 int FUNC_1 (struct mvneta_port*,int ) ;
 int FUNC_2 (struct mvneta_port*,int ,int) ;
 struct mvneta_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct ethtool_eee*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
      struct ethtool_eee *VAR_3)
{
 struct mvneta_port *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5;



 if (VAR_3->tx_lpi_enabled && VAR_3->tx_lpi_timer > 255)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4, VAR_1);
 VAR_5 &= ~(0xff << 8);
 VAR_5 |= VAR_3->tx_lpi_timer << 8;
 FUNC_2(VAR_4, VAR_1, VAR_5);

 VAR_4->eee_enabled = VAR_3->eee_enabled;
 VAR_4->tx_lpi_enabled = VAR_3->tx_lpi_enabled;

 FUNC_0(VAR_4, VAR_3->tx_lpi_enabled && VAR_3->eee_enabled);

 return FUNC_4(VAR_4->phylink, VAR_3);
}
