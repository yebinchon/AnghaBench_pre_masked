
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int name; int irq; } ;
struct corkscrew_private {unsigned int dirty_tx; unsigned int cur_tx; int lock; int * tx_skb; scalar_t__ tx_full; int ** tx_skbuff; int * tx_ring; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_23 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,struct net_device*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_24 ;
 struct corkscrew_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,int,int,int) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int,struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_21(int VAR_25, void *VAR_26)
{

 struct net_device *VAR_27 = VAR_26;
 struct corkscrew_private *VAR_28 = FUNC_9(VAR_27);
 int VAR_29, VAR_30;
 int VAR_31;
 int VAR_32 = VAR_24;

 VAR_29 = VAR_27->base_addr;
 VAR_31 = FUNC_5(VAR_29 + VAR_18);

 FUNC_18(&VAR_28->lock);

 VAR_30 = FUNC_7(VAR_29 + VAR_6);

 if (VAR_23 > 4)
  FUNC_14("%s: interrupt, status %4.4x, timer %d.\n",
   VAR_27->name, VAR_30, VAR_31);
 if ((VAR_30 & 0xE000) != 0xE000) {
  static int VAR_33;



  if (VAR_33++ > 100) {
   FUNC_15("%s: Bogus interrupt, bailing. Status %4.4x, start=%d.\n",
       VAR_27->name, VAR_30, FUNC_10(VAR_27));
   FUNC_4(VAR_27->irq, VAR_27);
   VAR_27->irq = -1;
  }
 }

 do {
  if (VAR_23 > 5)
   FUNC_14("%s: In interrupt loop, status %4.4x.\n",
          VAR_27->name, VAR_30);
  if (VAR_30 & VAR_10)
   FUNC_2(VAR_27);

  if (VAR_30 & VAR_19) {
   if (VAR_23 > 5)
    FUNC_14("	TX room bit was handled.\n");

   FUNC_12(VAR_0 | VAR_19, VAR_29 + VAR_5);
   FUNC_11(VAR_27);
  }
  if (VAR_30 & VAR_3) {
   unsigned int VAR_34 = VAR_28->dirty_tx;

   while (VAR_28->cur_tx - VAR_34 > 0) {
    int VAR_35 = VAR_34 % VAR_17;
    if (FUNC_6(VAR_29 + VAR_4) == FUNC_8(&VAR_28->tx_ring[VAR_35]))
     break;
    if (VAR_28->tx_skbuff[VAR_35]) {
     FUNC_3(VAR_28->tx_skbuff[VAR_35]);
     VAR_28->tx_skbuff[VAR_35] = ((void*)0);
    }
    VAR_34++;
   }
   VAR_28->dirty_tx = VAR_34;
   FUNC_12(VAR_0 | VAR_3, VAR_29 + VAR_5);
   if (VAR_28->tx_full && (VAR_28->cur_tx - VAR_34 <= VAR_17 - 1)) {
    VAR_28->tx_full = 0;
    FUNC_11(VAR_27);
   }
  }







  if (VAR_30 & VAR_21) {
   FUNC_1(VAR_27);
   FUNC_12(VAR_0 | VAR_21, VAR_29 + VAR_5);
  }
  if (VAR_30 & (VAR_1 | VAR_11 | VAR_16)) {

   if (VAR_30 & VAR_11) {
    FUNC_2(VAR_27);
    FUNC_12(VAR_0 | VAR_11, VAR_29 + VAR_5);
   }
   if (VAR_30 & VAR_16) {
    static int VAR_36;
    if (VAR_23 > 4)
     FUNC_14("%s: Updating stats.\n", VAR_27->name);
    FUNC_20(VAR_29, VAR_27);


    if (VAR_36 == 0 && FUNC_7(VAR_29 + VAR_6) & VAR_16) {
     int VAR_37, VAR_38;
     FUNC_16("%s: Updating stats failed, disabling stats as an interrupt source.\n",
      VAR_27->name);
     for (VAR_37 = 0; VAR_37 < 8; VAR_37++) {
      FUNC_0(VAR_37);
      FUNC_16("Vortex window %d:", VAR_37);
      for (VAR_38 = 0; VAR_38 < 16; VAR_38++)
       FUNC_13(" %2.2x", FUNC_5(VAR_29 + VAR_38));
      FUNC_13("\n");
     }
     FUNC_0(7);
     FUNC_12(VAR_14 | VAR_19 |
          VAR_10 | VAR_1 |
          VAR_21 | VAR_3 |
          VAR_20, VAR_29 + VAR_5);
     VAR_36++;
    }
   }
   if (VAR_30 & VAR_1) {

    FUNC_12(VAR_13, VAR_29 + VAR_5);

    FUNC_17(VAR_27);
    FUNC_12(VAR_12, VAR_29 + VAR_5);
    FUNC_12(VAR_0 | VAR_1,
         VAR_29 + VAR_5);
   }
  }

  if (--VAR_32 < 0) {
   FUNC_15("%s: Too much work in interrupt, status %4.4x. Disabling functions (%4.4x).\n",
    VAR_27->name, VAR_30, VAR_15 | ((~VAR_30) & 0x7FE));

   FUNC_12(VAR_15 | ((~VAR_30) & 0x7FE), VAR_29 + VAR_5);
   FUNC_12(VAR_0 | 0x7FF, VAR_29 + VAR_5);
   break;
  }

  FUNC_12(VAR_0 | VAR_9 | VAR_8, VAR_29 + VAR_5);

 } while ((VAR_30 = FUNC_7(VAR_29 + VAR_6)) & (VAR_8 | VAR_10));

 FUNC_19(&VAR_28->lock);

 if (VAR_23 > 4)
  FUNC_14("%s: exiting interrupt, status %4.4x.\n", VAR_27->name, VAR_30);
 return VAR_7;
}
