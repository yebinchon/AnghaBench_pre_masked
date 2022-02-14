
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_config {int dev; } ;
struct net_device {int dummy; } ;
struct mvneta_port {int eee_active; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvneta_port*) ;
 int FUNC_1 (struct mvneta_port*,int) ;
 int FUNC_2 (struct mvneta_port*,int ) ;
 int FUNC_3 (struct mvneta_port*,int ,int ) ;
 struct mvneta_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (unsigned int) ;
 struct net_device* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct phylink_config *VAR_3,
     unsigned int VAR_4, phy_interface_t VAR_5)
{
 struct net_device *VAR_6 = FUNC_6(VAR_3->dev);
 struct mvneta_port *VAR_7 = FUNC_4(VAR_6);
 u32 VAR_8;

 FUNC_0(VAR_7);

 if (!FUNC_5(VAR_4)) {
  VAR_8 = FUNC_2(VAR_7, VAR_0);
  VAR_8 &= ~VAR_2;
  VAR_8 |= VAR_1;
  FUNC_3(VAR_7, VAR_0, VAR_8);
 }

 VAR_7->eee_active = 0;
 FUNC_1(VAR_7, 0);
}
