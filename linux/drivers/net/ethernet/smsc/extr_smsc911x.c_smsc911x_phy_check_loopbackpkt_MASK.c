
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct smsc911x_data {scalar_t__* loopback_rx_pkt; scalar_t__* loopback_tx_pkt; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* rx_readfifo ) (struct smsc911x_data*,unsigned int*,int) ;int (* tx_writefifo ) (struct smsc911x_data*,unsigned int*,int) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*,...) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__*,int ,unsigned int) ;
 int FUNC_3 (struct smsc911x_data*,int ,unsigned int) ;
 unsigned int FUNC_4 (struct smsc911x_data*) ;
 unsigned int FUNC_5 (struct smsc911x_data*) ;
 int FUNC_6 (struct smsc911x_data*,unsigned int*,int) ;
 int FUNC_7 (struct smsc911x_data*,unsigned int*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct smsc911x_data *VAR_8)
{
 unsigned int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 ulong VAR_12;

 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  unsigned int VAR_13;
  unsigned int VAR_14;
  unsigned int VAR_15;
  unsigned int VAR_16;
  unsigned int VAR_17;


  FUNC_2(VAR_8->loopback_rx_pkt, 0, VAR_1);


  VAR_13 = (u32)((ulong)VAR_8->loopback_tx_pkt & 0x03) << 16;
  VAR_13 |= VAR_3 | VAR_4;
  VAR_13 |= VAR_1;

  VAR_14 = VAR_1 << 16 | VAR_1;

  FUNC_3(VAR_8, VAR_5, VAR_13);
  FUNC_3(VAR_8, VAR_5, VAR_14);

  VAR_12 = (ulong)VAR_8->loopback_tx_pkt & (~0x3);
  VAR_10 = VAR_1 + 3;
  VAR_10 += (u32)((ulong)VAR_8->loopback_tx_pkt & 0x3);
  VAR_10 >>= 2;

  VAR_8->ops->tx_writefifo(VAR_8, (unsigned int *)VAR_12, VAR_10);


  VAR_17 = 60;
  do {
   FUNC_8(5);
   VAR_15 = FUNC_5(VAR_8);
  } while ((VAR_17--) && (!VAR_15));

  if (!VAR_15) {
   FUNC_1(VAR_8, VAR_7,
      "Failed to transmit during loopback test");
   continue;
  }
  if (VAR_15 & VAR_6) {
   FUNC_1(VAR_8, VAR_7,
      "Transmit encountered errors during loopback test");
   continue;
  }


  VAR_17 = 60;
  do {
   FUNC_8(5);
   VAR_15 = FUNC_4(VAR_8);
  } while ((VAR_17--) && (!VAR_15));

  if (!VAR_15) {
   FUNC_1(VAR_8, VAR_7,
      "Failed to receive during loopback test");
   continue;
  }
  if (VAR_15 & VAR_2) {
   FUNC_1(VAR_8, VAR_7,
      "Receive encountered errors during loopback test");
   continue;
  }

  VAR_16 = ((VAR_15 & 0x3FFF0000UL) >> 16);
  VAR_12 = (ulong)VAR_8->loopback_rx_pkt;
  VAR_11 = VAR_16 + 3;
  VAR_11 += (u32)((ulong)VAR_8->loopback_rx_pkt & 0x3);
  VAR_11 >>= 2;

  VAR_8->ops->rx_readfifo(VAR_8, (unsigned int *)VAR_12, VAR_11);

  if (VAR_16 != (VAR_1 + 4)) {
   FUNC_1(VAR_8, VAR_7, "Unexpected packet size "
      "during loop back test, size=%d, will retry",
      VAR_16);
  } else {
   unsigned int VAR_18;
   int VAR_19 = 0;
   for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
    if (VAR_8->loopback_tx_pkt[VAR_18]
        != VAR_8->loopback_rx_pkt[VAR_18]) {
     VAR_19 = 1;
     break;
    }
   }
   if (!VAR_19) {
    FUNC_0(VAR_8, VAR_7, "Successfully verified "
        "loopback packet");
    return 0;
   } else {
    FUNC_1(VAR_8, VAR_7, "Data mismatch "
       "during loop back test, will retry");
   }
  }
 }

 return -VAR_0;
}
