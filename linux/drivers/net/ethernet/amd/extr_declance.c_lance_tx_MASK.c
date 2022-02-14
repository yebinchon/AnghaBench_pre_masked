
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int tx_packets; scalar_t__ collisions; int tx_fifo_errors; int tx_carrier_errors; int tx_window_errors; int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; int name; scalar_t__ mem_start; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {int tx_old; int tx_new; int lock; int type; struct lance_regs* ll; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_0 (struct lance_private*) ;
 int FUNC_1 (struct net_device*) ;
 int * FUNC_2 (int volatile*,int ,int ) ;
 int FUNC_3 (struct lance_private*) ;
 int VAR_15 ;
 struct lance_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int* FUNC_10 (int volatile*,int ,int ) ;
 int VAR_16 ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_17)
{
 struct lance_private *VAR_18 = FUNC_4(VAR_17);
 volatile u16 *VAR_19 = (volatile u16 *)VAR_17->mem_start;
 volatile struct lance_regs *VAR_20 = VAR_18->ll;
 volatile u16 *VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;

 VAR_23 = VAR_18->tx_old;

 FUNC_8(&VAR_18->lock);

 for (VAR_22 = VAR_23; VAR_22 != VAR_18->tx_new; VAR_22 = VAR_23) {
  VAR_21 = FUNC_2(VAR_19, VAR_14[VAR_22], VAR_18->type);

  if (*FUNC_10(VAR_21, VAR_16, VAR_18->type) & VAR_5)
   break;

  if (*FUNC_10(VAR_21, VAR_16, VAR_18->type) & VAR_4) {
   VAR_24 = *FUNC_10(VAR_21, VAR_15, VAR_18->type);

   VAR_17->stats.tx_errors++;
   if (VAR_24 & VAR_10)
    VAR_17->stats.tx_aborted_errors++;
   if (VAR_24 & VAR_9)
    VAR_17->stats.tx_window_errors++;

   if (VAR_24 & VAR_8) {
    VAR_17->stats.tx_carrier_errors++;
    FUNC_7("%s: Carrier Lost\n", VAR_17->name);

    FUNC_11(&VAR_20->rap, VAR_1);
    FUNC_11(&VAR_20->rdp, VAR_0);
    FUNC_1(VAR_17);
    FUNC_3(VAR_18);
    FUNC_0(VAR_18);
    goto out;
   }



   if (VAR_24 & (VAR_7 | VAR_11)) {
    VAR_17->stats.tx_fifo_errors++;

    FUNC_7("%s: Tx: ERR_BUF|ERR_UFL, restarting\n",
           VAR_17->name);

    FUNC_11(&VAR_20->rap, VAR_1);
    FUNC_11(&VAR_20->rdp, VAR_0);
    FUNC_1(VAR_17);
    FUNC_3(VAR_18);
    FUNC_0(VAR_18);
    goto out;
   }
  } else if ((*FUNC_10(VAR_21, VAR_16, VAR_18->type) & VAR_6) ==
      VAR_6) {



   *FUNC_10(VAR_21, VAR_16, VAR_18->type) &= ~(VAR_6);


   if (*FUNC_10(VAR_21, VAR_16, VAR_18->type) & VAR_3)
    VAR_17->stats.collisions++;


   if (*FUNC_10(VAR_21, VAR_16, VAR_18->type) & VAR_2)
    VAR_17->stats.collisions += 2;

   VAR_17->stats.tx_packets++;
  }
  VAR_23 = (VAR_23 + 1) & VAR_13;
 }
 VAR_18->tx_old = VAR_23;
out:
 if (FUNC_5(VAR_17) &&
     VAR_12 > 0)
  FUNC_6(VAR_17);

 FUNC_9(&VAR_18->lock);
}
