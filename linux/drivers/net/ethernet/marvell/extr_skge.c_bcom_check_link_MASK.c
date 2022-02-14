
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {scalar_t__ autoneg; int speed; int flow_status; int duplex; } ;
struct skge_hw {struct net_device** dev; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;





 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct skge_port*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct skge_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct skge_hw*,int) ;
 int FUNC_5 (struct skge_hw*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct skge_hw *VAR_15, int VAR_16)
{
 struct net_device *VAR_17 = VAR_15->dev[VAR_16];
 struct skge_port *VAR_18 = FUNC_2(VAR_17);
 u16 VAR_19;


 FUNC_5(VAR_15, VAR_16, VAR_8);
 VAR_19 = FUNC_5(VAR_15, VAR_16, VAR_8);

 if ((VAR_19 & VAR_12) == 0) {
  FUNC_4(VAR_15, VAR_16);
  return;
 }

 if (VAR_18->autoneg == VAR_0) {
  u16 VAR_20, VAR_21;

  if (!(VAR_19 & VAR_11))
   return;

  VAR_20 = FUNC_5(VAR_15, VAR_16, VAR_13);
  if (VAR_20 & VAR_9) {
   FUNC_1(VAR_17, "remote fault\n");
   return;
  }

  VAR_21 = FUNC_5(VAR_15, VAR_16, VAR_7);


  switch (VAR_21 & VAR_10) {
  case 129:
   VAR_18->duplex = VAR_1;
   break;
  case 128:
   VAR_18->duplex = VAR_2;
   break;
  default:
   FUNC_1(VAR_17, "duplex mismatch\n");
   return;
  }


  switch (VAR_21 & 132) {
  case 132:
   VAR_18->flow_status = VAR_6;
   break;
  case 131:
   VAR_18->flow_status = VAR_5;
   break;
  case 130:
   VAR_18->flow_status = VAR_3;
   break;
  default:
   VAR_18->flow_status = VAR_4;
  }
  VAR_18->speed = VAR_14;
 }

 if (!FUNC_3(VAR_17))
  FUNC_0(VAR_18);
}
