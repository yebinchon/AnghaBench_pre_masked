
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_errors; int tx_errors; int tx_packets; int collisions; int tx_fifo_errors; int tx_window_errors; int tx_carrier_errors; int tx_aborted_errors; } ;
struct net_device {TYPE_2__ stats; scalar_t__ base_addr; } ;
struct ariadne_private {int dirty_tx; int cur_tx; int tx_full; TYPE_1__** tx_ring; } ;
struct Am79C960 {int RAP; int RDP; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int TMD1; int TMD3; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
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
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,char*,int,int) ;
 int FUNC_4 (struct net_device*,char*,int,...) ;
 struct ariadne_private* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_28, void *VAR_29)
{
 struct net_device *VAR_30 = (struct net_device *)VAR_29;
 volatile struct Am79C960 *VAR_31 = (struct Am79C960 *)VAR_30->base_addr;
 struct ariadne_private *VAR_32;
 int VAR_33, VAR_34;
 int VAR_35 = 0;

 VAR_31->RAP = VAR_2;

 if (!(VAR_31->RDP & VAR_11))
  return VAR_12;

 VAR_32 = FUNC_5(VAR_30);

 VAR_34 = 10;
 while ((VAR_33 = VAR_31->RDP) & (VAR_7 | VAR_15 | VAR_24) && --VAR_34 >= 0) {

  VAR_31->RDP = VAR_33 & ~(VAR_9 | VAR_19 | VAR_17 | VAR_18 | VAR_10);
  if (VAR_33 & VAR_15) {
   VAR_35 = 1;
   FUNC_1(VAR_30);
  }

  if (VAR_33 & VAR_24) {
   int VAR_36 = VAR_32->dirty_tx;

   VAR_35 = 1;
   while (VAR_36 < VAR_32->cur_tx) {
    int VAR_37 = VAR_36 % VAR_26;
    int VAR_38 = FUNC_2(VAR_32->tx_ring[VAR_37]->TMD1);

    if (VAR_38 & VAR_23)
     break;

    VAR_32->tx_ring[VAR_37]->TMD1 &= 0xff00;

    if (VAR_38 & VAR_20) {

     int VAR_39 = VAR_32->tx_ring[VAR_37]->TMD3;
     VAR_30->stats.tx_errors++;
     if (VAR_39 & VAR_5)
      VAR_30->stats.tx_aborted_errors++;
     if (VAR_39 & VAR_3)
      VAR_30->stats.tx_carrier_errors++;
     if (VAR_39 & VAR_4)
      VAR_30->stats.tx_window_errors++;
     if (VAR_39 & VAR_6) {

      VAR_30->stats.tx_fifo_errors++;

      FUNC_4(VAR_30, "Tx FIFO error! Status %04x\n",
          VAR_33);

      VAR_31->RDP = VAR_18;
     }
    } else {
     if (VAR_38 & (VAR_21 | VAR_22))
      VAR_30->stats.collisions++;
     VAR_30->stats.tx_packets++;
    }
    VAR_36++;
   }


   if (VAR_32->cur_tx - VAR_36 >= VAR_26) {
    FUNC_4(VAR_30, "out-of-sync dirty pointer, %d vs. %d, full=%d\n",
        VAR_36, VAR_32->cur_tx,
        VAR_32->tx_full);
    VAR_36 += VAR_26;
   }


   if (VAR_32->tx_full && FUNC_6(VAR_30) &&
       VAR_36 > VAR_32->cur_tx - VAR_26 + 2) {

    VAR_32->tx_full = 0;
    FUNC_7(VAR_30);
   }

   VAR_32->dirty_tx = VAR_36;
  }


  if (VAR_33 & VAR_0) {
   VAR_35 = 1;
   VAR_30->stats.tx_errors++;
  }
  if (VAR_33 & VAR_14) {
   VAR_35 = 1;
   VAR_30->stats.rx_errors++;
  }
  if (VAR_33 & VAR_13) {
   VAR_35 = 1;
   FUNC_4(VAR_30, "Bus master arbitration failure, status %04x\n",
       VAR_33);

   VAR_31->RDP = VAR_18;
  }
 }


 VAR_31->RAP = VAR_2;
 VAR_31->RDP = VAR_9 | VAR_0 | VAR_1 | VAR_14 | VAR_13 | VAR_8;

 if (VAR_27 > 4)
  FUNC_3(VAR_30, "exiting interrupt, csr%d=%#04x\n",
      VAR_31->RAP, VAR_31->RDP);

 return FUNC_0(VAR_35);
}
