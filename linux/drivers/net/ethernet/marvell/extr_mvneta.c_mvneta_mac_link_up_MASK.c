
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_config {int dev; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct mvneta_port {int eee_active; scalar_t__ tx_lpi_enabled; scalar_t__ eee_enabled; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvneta_port*) ;
 int FUNC_1 (struct mvneta_port*,int) ;
 int FUNC_2 (struct mvneta_port*,int ) ;
 int FUNC_3 (struct mvneta_port*,int ,int ) ;
 struct mvneta_port* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct phy_device*,int ) ;
 int FUNC_6 (unsigned int) ;
 struct net_device* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct phylink_config *VAR_3, unsigned int VAR_4,
          phy_interface_t VAR_5,
          struct phy_device *VAR_6)
{
 struct net_device *VAR_7 = FUNC_7(VAR_3->dev);
 struct mvneta_port *VAR_8 = FUNC_4(VAR_7);
 u32 VAR_9;

 if (!FUNC_6(VAR_4)) {
  VAR_9 = FUNC_2(VAR_8, VAR_0);
  VAR_9 &= ~VAR_1;
  VAR_9 |= VAR_2;
  FUNC_3(VAR_8, VAR_0, VAR_9);
 }

 FUNC_0(VAR_8);

 if (VAR_6 && VAR_8->eee_enabled) {
  VAR_8->eee_active = FUNC_5(VAR_6, 0) >= 0;
  FUNC_1(VAR_8, VAR_8->eee_active && VAR_8->tx_lpi_enabled);
 }
}
