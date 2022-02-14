
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {int port; scalar_t__ autoneg; scalar_t__ flow_control; int speed; int flow_status; int duplex; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct skge_port*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct skge_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct skge_hw*,int) ;
 int FUNC_5 (struct skge_hw*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_21)
{
 struct skge_port *VAR_22 = FUNC_2(VAR_21);
 struct skge_hw *VAR_23 = VAR_22->hw;
 int VAR_24 = VAR_22->port;
 u16 VAR_25;


 FUNC_5(VAR_23, VAR_24, VAR_15);
 VAR_25 = FUNC_5(VAR_23, VAR_24, VAR_15);

 if ((VAR_25 & VAR_12) == 0) {
  FUNC_4(VAR_23, VAR_24);
  return 0;
 }

 if (VAR_22->autoneg == VAR_0) {
  u16 VAR_26, VAR_27;

  if (!(VAR_25 & VAR_11))
   return 0;

  VAR_26 = FUNC_5(VAR_23, VAR_24, VAR_13);
  if (VAR_26 & VAR_10) {
   FUNC_1(VAR_21, "remote fault\n");
   return 0;
  }

  VAR_27 = FUNC_5(VAR_23, VAR_24, VAR_14);


  switch (VAR_27 & (128 | 129)) {
  case 129:
   VAR_22->duplex = VAR_1;
   break;
  case 128:
   VAR_22->duplex = VAR_2;
   break;
  default:
   FUNC_1(VAR_21, "duplex mismatch\n");
   return 0;
  }


  if ((VAR_22->flow_control == VAR_4 ||
       VAR_22->flow_control == VAR_5) &&
      (VAR_26 & VAR_18))
   VAR_22->flow_status = VAR_9;
  else if (VAR_22->flow_control == VAR_5 &&
    (VAR_26 & VAR_19) == VAR_16)

   VAR_22->flow_status = VAR_8;
  else if (VAR_22->flow_control == VAR_3 &&
    (VAR_26 & VAR_19) == VAR_17)

   VAR_22->flow_status = VAR_6;
  else
   VAR_22->flow_status = VAR_7;

  VAR_22->speed = VAR_20;
 }

 if (!FUNC_3(VAR_21))
  FUNC_0(VAR_22);
 return 1;
}
