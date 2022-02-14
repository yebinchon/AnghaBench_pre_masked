
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_config {int dev; } ;
struct net_device {int dummy; } ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,int ) ;
 int FUNC_1 (struct mvneta_port*,int ,int) ;
 struct mvneta_port* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct phylink_config *VAR_2)
{
 struct net_device *VAR_3 = FUNC_3(VAR_2->dev);
 struct mvneta_port *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5 = FUNC_0(VAR_4, VAR_0);

 FUNC_1(VAR_4, VAR_0,
      VAR_5 | VAR_1);
 FUNC_1(VAR_4, VAR_0,
      VAR_5 & ~VAR_1);
}
