
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cntinfo; } ;
struct sgiseeq_tx_desc {int * skb; TYPE_2__ tdma; } ;
struct sgiseeq_regs {int dummy; } ;
struct sgiseeq_private {int tx_old; int tx_new; struct sgiseeq_tx_desc* tx_desc; } ;
struct TYPE_3__ {int tx_packets; int collisions; int tx_fifo_errors; int tx_aborted_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct hpc3_ethregs {unsigned long tx_ctrl; int tx_ndptr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (struct sgiseeq_private*,struct sgiseeq_tx_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,struct sgiseeq_tx_desc*) ;
 int FUNC_4 (struct net_device*,struct sgiseeq_tx_desc*) ;
 int FUNC_5 (struct sgiseeq_private*,struct sgiseeq_regs*) ;

__attribute__((used)) static inline void FUNC_6(struct net_device *VAR_9, struct sgiseeq_private *VAR_10,
         struct hpc3_ethregs *VAR_11,
         struct sgiseeq_regs *VAR_12)
{
 struct sgiseeq_tx_desc *VAR_13;
 unsigned long VAR_14 = VAR_11->tx_ctrl;
 int VAR_15;

 FUNC_5(VAR_10, VAR_12);

 if (!(VAR_14 & (VAR_0 | VAR_6))) {

  if (VAR_14 & VAR_7)
   VAR_9->stats.tx_aborted_errors++;
  if (VAR_14 & VAR_8)
   VAR_9->stats.tx_fifo_errors++;
  if (VAR_14 & VAR_5)
   VAR_9->stats.collisions++;
 }


 for (VAR_15 = VAR_10->tx_old; VAR_15 != VAR_10->tx_new; VAR_15 = FUNC_0(VAR_15)) {
  VAR_13 = &VAR_10->tx_desc[VAR_15];

  FUNC_3(VAR_9, VAR_13);
  if (!(VAR_13->tdma.cntinfo & (VAR_4)))
   break;
  if (!(VAR_13->tdma.cntinfo & (VAR_2))) {
   if (!(VAR_14 & VAR_0)) {
    VAR_11->tx_ndptr = FUNC_1(VAR_10, VAR_13);
    VAR_11->tx_ctrl = VAR_0;
   }
   break;
  }
  VAR_9->stats.tx_packets++;
  VAR_10->tx_old = FUNC_0(VAR_10->tx_old);
  VAR_13->tdma.cntinfo &= ~(VAR_4 | VAR_3);
  VAR_13->tdma.cntinfo |= VAR_1;
  if (VAR_13->skb) {
   FUNC_2(VAR_13->skb);
   VAR_13->skb = ((void*)0);
  }
  FUNC_4(VAR_9, VAR_13);
 }
}
