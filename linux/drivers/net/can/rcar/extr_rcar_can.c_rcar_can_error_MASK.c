
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int bus_off; int error_passive; int error_warning; int bus_error; } ;
struct TYPE_5__ {TYPE_1__ can_stats; int state; } ;
struct rcar_can_priv {int ier; TYPE_3__* regs; int ndev; TYPE_2__ can; } ;
struct net_device_stats {int tx_errors; int rx_bytes; int rx_packets; scalar_t__ rx_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_id; int* data; scalar_t__ can_dlc; } ;
struct TYPE_6__ {int eifr; int ier; int ecsr; int recr; int tecr; } ;


 int VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*) ;
 struct rcar_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_35)
{
 struct rcar_can_priv *VAR_36 = FUNC_3(VAR_35);
 struct net_device_stats *VAR_37 = &VAR_35->stats;
 struct can_frame *VAR_38;
 struct sk_buff *VAR_39;
 u8 VAR_40, VAR_41 = 0, VAR_42 = 0;


 VAR_39 = FUNC_0(VAR_35, &VAR_38);

 VAR_40 = FUNC_5(&VAR_36->regs->eifr);
 if (VAR_40 & (VAR_31 | VAR_30)) {
  VAR_41 = FUNC_5(&VAR_36->regs->tecr);
  VAR_42 = FUNC_5(&VAR_36->regs->recr);
  if (VAR_39) {
   VAR_38->can_id |= VAR_3;
   VAR_38->data[6] = VAR_41;
   VAR_38->data[7] = VAR_42;
  }
 }
 if (VAR_40 & VAR_28) {
  int VAR_43 = 0, VAR_44 = 0;
  u8 VAR_45;

  FUNC_2(VAR_36->ndev, "Bus error interrupt:\n");
  if (VAR_39)
   VAR_38->can_id |= VAR_1 | VAR_9;

  VAR_45 = FUNC_5(&VAR_36->regs->ecsr);
  if (VAR_45 & VAR_21) {
   FUNC_2(VAR_36->ndev, "ACK Delimiter Error\n");
   VAR_44++;
   FUNC_7(~VAR_21, &VAR_36->regs->ecsr);
   if (VAR_39)
    VAR_38->data[3] = VAR_14;
  }
  if (VAR_45 & VAR_23) {
   FUNC_2(VAR_36->ndev, "Bit Error (dominant)\n");
   VAR_44++;
   FUNC_7(~VAR_23, &VAR_36->regs->ecsr);
   if (VAR_39)
    VAR_38->data[2] |= VAR_10;
  }
  if (VAR_45 & VAR_24) {
   FUNC_2(VAR_36->ndev, "Bit Error (recessive)\n");
   VAR_44++;
   FUNC_7(~VAR_24, &VAR_36->regs->ecsr);
   if (VAR_39)
    VAR_38->data[2] |= VAR_11;
  }
  if (VAR_45 & VAR_25) {
   FUNC_2(VAR_36->ndev, "CRC Error\n");
   VAR_43++;
   FUNC_7(~VAR_25, &VAR_36->regs->ecsr);
   if (VAR_39)
    VAR_38->data[3] = VAR_15;
  }
  if (VAR_45 & VAR_22) {
   FUNC_2(VAR_36->ndev, "ACK Error\n");
   VAR_44++;
   FUNC_7(~VAR_22, &VAR_36->regs->ecsr);
   if (VAR_39) {
    VAR_38->can_id |= VAR_0;
    VAR_38->data[3] = VAR_13;
   }
  }
  if (VAR_45 & VAR_26) {
   FUNC_2(VAR_36->ndev, "Form Error\n");
   VAR_43++;
   FUNC_7(~VAR_26, &VAR_36->regs->ecsr);
   if (VAR_39)
    VAR_38->data[2] |= VAR_12;
  }
  if (VAR_45 & VAR_27) {
   FUNC_2(VAR_36->ndev, "Stuff Error\n");
   VAR_43++;
   FUNC_7(~VAR_27, &VAR_36->regs->ecsr);
   if (VAR_39)
    VAR_38->data[2] |= VAR_17;
  }

  VAR_36->can.can_stats.bus_error++;
  VAR_35->stats.rx_errors += VAR_43;
  VAR_35->stats.tx_errors += VAR_44;
  FUNC_7(~VAR_28, &VAR_36->regs->eifr);
 }
 if (VAR_40 & VAR_31) {
  FUNC_2(VAR_36->ndev, "Error warning interrupt\n");
  VAR_36->can.state = VAR_20;
  VAR_36->can.can_stats.error_warning++;

  FUNC_7(~VAR_31, &VAR_36->regs->eifr);
  if (VAR_39)
   VAR_38->data[1] = VAR_41 > VAR_42 ? VAR_8 :
           VAR_6;
 }
 if (VAR_40 & VAR_30) {
  FUNC_2(VAR_36->ndev, "Error passive interrupt\n");
  VAR_36->can.state = VAR_19;
  VAR_36->can.can_stats.error_passive++;

  FUNC_7(~VAR_30, &VAR_36->regs->eifr);
  if (VAR_39)
   VAR_38->data[1] = VAR_41 > VAR_42 ? VAR_7 :
           VAR_5;
 }
 if (VAR_40 & VAR_29) {
  FUNC_2(VAR_36->ndev, "Bus-off entry interrupt\n");
  FUNC_6(VAR_35);
  VAR_36->ier = VAR_34;
  FUNC_7(VAR_36->ier, &VAR_36->regs->ier);
  VAR_36->can.state = VAR_18;

  FUNC_7(~VAR_29, &VAR_36->regs->eifr);
  VAR_36->can.can_stats.bus_off++;
  FUNC_1(VAR_35);
  if (VAR_39)
   VAR_38->can_id |= VAR_2;
 }
 if (VAR_40 & VAR_33) {
  FUNC_2(VAR_36->ndev, "Receive overrun error interrupt\n");
  VAR_35->stats.rx_over_errors++;
  VAR_35->stats.rx_errors++;
  FUNC_7(~VAR_33, &VAR_36->regs->eifr);
  if (VAR_39) {
   VAR_38->can_id |= VAR_3;
   VAR_38->data[1] = VAR_4;
  }
 }
 if (VAR_40 & VAR_32) {
  FUNC_2(VAR_36->ndev,
      "Overload Frame Transmission error interrupt\n");
  VAR_35->stats.rx_over_errors++;
  VAR_35->stats.rx_errors++;
  FUNC_7(~VAR_32, &VAR_36->regs->eifr);
  if (VAR_39) {
   VAR_38->can_id |= VAR_9;
   VAR_38->data[2] |= VAR_16;
  }
 }

 if (VAR_39) {
  VAR_37->rx_packets++;
  VAR_37->rx_bytes += VAR_38->can_dlc;
  FUNC_4(VAR_39);
 }
}
