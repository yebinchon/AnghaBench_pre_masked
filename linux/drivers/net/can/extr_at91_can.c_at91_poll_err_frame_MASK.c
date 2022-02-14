
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tx_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct can_frame {int can_id; int * data; } ;
struct TYPE_5__ {int bus_error; } ;
struct TYPE_6__ {TYPE_2__ can_stats; } ;
struct at91_priv {TYPE_3__ can; } ;


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
 int FUNC_0 (struct net_device*,char*) ;
 struct at91_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_11,
  struct can_frame *VAR_12, u32 VAR_13)
{
 struct at91_priv *VAR_14 = FUNC_1(VAR_11);


 if (VAR_13 & VAR_2) {
  FUNC_0(VAR_11, "CERR irq\n");
  VAR_11->stats.rx_errors++;
  VAR_14->can.can_stats.bus_error++;
  VAR_12->can_id |= VAR_7 | VAR_6;
 }


 if (VAR_13 & VAR_4) {
  FUNC_0(VAR_11, "SERR irq\n");
  VAR_11->stats.rx_errors++;
  VAR_14->can.can_stats.bus_error++;
  VAR_12->can_id |= VAR_7 | VAR_6;
  VAR_12->data[2] |= VAR_10;
 }


 if (VAR_13 & VAR_0) {
  FUNC_0(VAR_11, "AERR irq\n");
  VAR_11->stats.tx_errors++;
  VAR_12->can_id |= VAR_5;
 }


 if (VAR_13 & VAR_3) {
  FUNC_0(VAR_11, "FERR irq\n");
  VAR_11->stats.rx_errors++;
  VAR_14->can.can_stats.bus_error++;
  VAR_12->can_id |= VAR_7 | VAR_6;
  VAR_12->data[2] |= VAR_9;
 }


 if (VAR_13 & VAR_1) {
  FUNC_0(VAR_11, "BERR irq\n");
  VAR_11->stats.tx_errors++;
  VAR_14->can.can_stats.bus_error++;
  VAR_12->can_id |= VAR_7 | VAR_6;
  VAR_12->data[2] |= VAR_8;
 }
}
