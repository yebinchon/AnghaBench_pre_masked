
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int link_speed; struct net_device* netdev; int state; int last_rx_ptp_check; int flags2; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;






 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct ixgbe_adapter *VAR_12)
{
 struct net_device *VAR_13 = VAR_12->netdev;
 struct ixgbe_hw *VAR_14 = &VAR_12->hw;
 u32 VAR_15 = VAR_12->link_speed;
 const char *VAR_16;
 bool VAR_17, VAR_18;


 if (FUNC_6(VAR_13))
  return;

 VAR_12->flags2 &= ~VAR_4;

 switch (VAR_14->mac.type) {
 case 133: {
  u32 VAR_19 = FUNC_0(VAR_14, VAR_2);
  u32 VAR_20 = FUNC_0(VAR_14, VAR_7);
  VAR_17 = !!(VAR_19 & VAR_3);
  VAR_18 = !!(VAR_20 & VAR_8);
 }
  break;
 case 131:
 case 130:
 case 129:
 case 128:
 case 132: {
  u32 VAR_21 = FUNC_0(VAR_14, VAR_5);
  u32 VAR_22 = FUNC_0(VAR_14, VAR_0);
  VAR_17 = !!(VAR_21 & VAR_6);
  VAR_18 = !!(VAR_22 & VAR_1);
 }
  break;
 default:
  VAR_18 = 0;
  VAR_17 = 0;
  break;
 }

 VAR_12->last_rx_ptp_check = VAR_11;

 if (FUNC_9(VAR_9, &VAR_12->state))
  FUNC_4(VAR_12);

 switch (VAR_15) {
 case 138:
  VAR_16 = "10 Gbps";
  break;
 case 134:
  VAR_16 = "5 Gbps";
  break;
 case 135:
  VAR_16 = "2.5 Gbps";
  break;
 case 136:
  VAR_16 = "1 Gbps";
  break;
 case 139:
  VAR_16 = "100 Mbps";
  break;
 case 137:
  VAR_16 = "10 Mbps";
  break;
 default:
  VAR_16 = "unknown speed";
  break;
 }
 FUNC_1(VAR_10, "NIC Link is Up %s, Flow Control: %s\n", VAR_16,
        ((VAR_17 && VAR_18) ? "RX/TX" :
        (VAR_17 ? "RX" :
        (VAR_18 ? "TX" : "None"))));

 FUNC_7(VAR_13);
 FUNC_2(VAR_12);


 FUNC_8(VAR_12->netdev);


 FUNC_5(VAR_12);


 FUNC_3(VAR_12);
}
