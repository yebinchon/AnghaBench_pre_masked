
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct TYPE_2__ {int rx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ksz_port {int dummy; } ;
struct ksz_hw {int intr_mask; scalar_t__ io; int features; } ;
struct dev_priv {struct ksz_port port; struct dev_info* adapter; } ;
struct dev_info {int hwlock; int rx_tasklet; int tx_tasklet; struct ksz_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ksz_hw*) ;
 int FUNC_1 (struct ksz_hw*,int) ;
 int FUNC_2 (struct ksz_hw*,int) ;
 int FUNC_3 (struct ksz_hw*) ;
 int FUNC_4 (struct ksz_hw*,int*) ;
 int FUNC_5 (struct ksz_hw*) ;
 scalar_t__ FUNC_6 (int) ;
 struct dev_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ksz_port*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_11, void *VAR_12)
{
 uint VAR_13 = 0;
 struct net_device *VAR_14 = (struct net_device *) VAR_12;
 struct dev_priv *VAR_15 = FUNC_7(VAR_14);
 struct dev_info *VAR_16 = VAR_15->adapter;
 struct ksz_hw *VAR_17 = &VAR_16->hw;

 FUNC_11(&VAR_16->hwlock);

 FUNC_4(VAR_17, &VAR_13);


 if (!VAR_13) {
  FUNC_12(&VAR_16->hwlock);
  return VAR_2;
 }

 do {
  FUNC_1(VAR_17, VAR_13);
  VAR_13 &= VAR_17->intr_mask;

  if (FUNC_14(VAR_13 & VAR_7)) {
   FUNC_2(VAR_17, VAR_7);
   FUNC_13(&VAR_16->tx_tasklet);
  }

  if (FUNC_6(VAR_13 & VAR_4)) {
   FUNC_2(VAR_17, VAR_4);
   FUNC_13(&VAR_16->rx_tasklet);
  }

  if (FUNC_14(VAR_13 & VAR_5)) {
   VAR_14->stats.rx_fifo_errors++;
   FUNC_5(VAR_17);
  }

  if (FUNC_14(VAR_13 & VAR_3)) {
   struct ksz_port *VAR_18 = &VAR_15->port;

   VAR_17->features |= VAR_10;
   FUNC_8(VAR_18);
  }

  if (FUNC_14(VAR_13 & VAR_6)) {
   FUNC_0(VAR_17);
   break;
  }

  if (FUNC_14(VAR_13 & VAR_8)) {
   u32 VAR_19;

   VAR_17->intr_mask &= ~VAR_8;
   FUNC_9("Tx stopped\n");
   VAR_19 = FUNC_10(VAR_17->io + VAR_9);
   if (!(VAR_19 & VAR_0))
    FUNC_9("Tx disabled\n");
   break;
  }
 } while (0);

 FUNC_3(VAR_17);

 FUNC_12(&VAR_16->hwlock);

 return VAR_1;
}
