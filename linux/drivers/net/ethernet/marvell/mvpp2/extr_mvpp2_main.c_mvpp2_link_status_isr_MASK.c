
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mvpp2_port {scalar_t__ gop_id; scalar_t__ phy_interface; scalar_t__ phylink; scalar_t__ base; struct net_device* dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (struct mvpp2_port*) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (struct mvpp2_port*) ;
 int FUNC_5 (struct mvpp2_port*) ;
 int FUNC_6 (struct mvpp2_port*) ;
 int FUNC_7 (struct mvpp2_port*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_18(int VAR_10, void *VAR_11)
{
 struct mvpp2_port *VAR_12 = (struct mvpp2_port *)VAR_11;
 struct net_device *VAR_13 = VAR_12->dev;
 bool VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16;

 FUNC_0(VAR_12);

 if (VAR_12->gop_id == 0 && FUNC_8(VAR_12->phy_interface)) {
  VAR_16 = FUNC_17(VAR_12->base + VAR_3);
  if (VAR_16 & VAR_4) {
   VAR_14 = 1;
   VAR_16 = FUNC_17(VAR_12->base + VAR_5);
   if (VAR_16 & VAR_6)
    VAR_15 = 1;
  }
 } else if (FUNC_15(VAR_12->phy_interface) ||
     FUNC_14(VAR_12->phy_interface) ||
     VAR_12->phy_interface == VAR_9) {
  VAR_16 = FUNC_17(VAR_12->base + VAR_1);
  if (VAR_16 & VAR_2) {
   VAR_14 = 1;
   VAR_16 = FUNC_17(VAR_12->base + VAR_7);
   if (VAR_16 & VAR_8)
    VAR_15 = 1;
  }
 }

 if (VAR_12->phylink) {
  FUNC_16(VAR_12->phylink, VAR_15);
  goto handled;
 }

 if (!FUNC_11(VAR_13) || !VAR_14)
  goto handled;

 if (VAR_15) {
  FUNC_7(VAR_12);

  FUNC_3(VAR_12);
  FUNC_5(VAR_12);
  FUNC_10(VAR_13);
  FUNC_13(VAR_13);
 } else {
  FUNC_12(VAR_13);
  FUNC_9(VAR_13);
  FUNC_4(VAR_12);
  FUNC_2(VAR_12);

  FUNC_6(VAR_12);
 }

handled:
 FUNC_1(VAR_12);
 return VAR_0;
}
