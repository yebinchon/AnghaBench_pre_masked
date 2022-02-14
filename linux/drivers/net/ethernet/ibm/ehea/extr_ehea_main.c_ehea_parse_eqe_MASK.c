
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct ehea_port {int full_duplex; int phy_link; int port_speed; struct net_device* netdev; } ;
struct ehea_adapter {int dummy; } ;


 int FUNC_0 (int ,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ehea_port* FUNC_1 (struct ehea_adapter*,int) ;
 int FUNC_2 (struct ehea_port*) ;
 int VAR_7 ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ehea_port*,int ,struct net_device*,char*,...) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_11(struct ehea_adapter *VAR_9, u64 VAR_10)
{
 int VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 struct ehea_port *VAR_14;
 struct net_device *VAR_15;

 VAR_12 = FUNC_0(VAR_2, VAR_10);
 VAR_13 = FUNC_0(VAR_5, VAR_10);
 VAR_14 = FUNC_1(VAR_9, VAR_13);
 if (!VAR_14) {
  FUNC_3(((void*)0), "unknown portnum %x\n", VAR_13);
  return;
 }
 VAR_15 = VAR_14->netdev;

 switch (VAR_12) {
 case 129:

  if (FUNC_0(VAR_6, VAR_10)) {
   if (!FUNC_6(VAR_15)) {
    VAR_11 = FUNC_2(VAR_14);
    if (VAR_11) {
     FUNC_3(VAR_15, "failed resensing port attributes\n");
     break;
    }

    FUNC_8(VAR_14, VAR_7, VAR_15,
        "Logical port up: %dMbps %s Duplex\n",
        VAR_14->port_speed,
        VAR_14->full_duplex == 1 ?
        "Full" : "Half");

    FUNC_7(VAR_15);
    FUNC_10(VAR_15);
   }
  } else
   if (FUNC_6(VAR_15)) {
    FUNC_8(VAR_14, VAR_7, VAR_15,
        "Logical port down\n");
    FUNC_5(VAR_15);
    FUNC_9(VAR_15);
   }

  if (FUNC_0(VAR_3, VAR_10)) {
   VAR_14->phy_link = VAR_1;
   FUNC_8(VAR_14, VAR_7, VAR_15,
       "Physical port up\n");
   if (VAR_8)
    FUNC_7(VAR_15);
  } else {
   VAR_14->phy_link = VAR_0;
   FUNC_8(VAR_14, VAR_7, VAR_15,
       "Physical port down\n");
   if (VAR_8)
    FUNC_5(VAR_15);
  }

  if (FUNC_0(VAR_4, VAR_10))
   FUNC_4(VAR_15,
        "External switch port is primary port\n");
  else
   FUNC_4(VAR_15,
        "External switch port is backup port\n");

  break;
 case 130:
  FUNC_3(VAR_15, "Adapter malfunction\n");
  break;
 case 128:
  FUNC_4(VAR_15, "Port malfunction\n");
  FUNC_5(VAR_15);
  FUNC_9(VAR_15);
  break;
 default:
  FUNC_3(VAR_15, "unknown event code %x, eqe=0x%llX\n", VAR_12, VAR_10);
  break;
 }
}
