
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink_config {int dev; } ;
struct net_device {int dummy; } ;
struct mvpp2_port {scalar_t__ base; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (struct mvpp2_port*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mvpp2_port*) ;
 struct mvpp2_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 struct net_device* FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct phylink_config *VAR_6,
    unsigned int VAR_7, phy_interface_t VAR_8)
{
 struct net_device *VAR_9 = FUNC_8(VAR_6->dev);
 struct mvpp2_port *VAR_10 = FUNC_4(VAR_9);
 u32 VAR_11;

 if (!FUNC_6(VAR_7)) {
  if (FUNC_2(VAR_8)) {
   VAR_11 = FUNC_7(VAR_10->base + VAR_2);
   VAR_11 &= ~VAR_1;
   VAR_11 |= VAR_0;
   FUNC_9(VAR_11, VAR_10->base + VAR_2);
  } else {
   VAR_11 = FUNC_7(VAR_10->base + VAR_3);
   VAR_11 &= ~VAR_5;
   VAR_11 |= VAR_4;
   FUNC_9(VAR_11, VAR_10->base + VAR_3);
  }
 }

 FUNC_5(VAR_9);
 FUNC_0(VAR_10);
 FUNC_1(VAR_10);

 FUNC_3(VAR_10);
}
