
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int out_of_mem; int read_err; int buf_avail_err; } ;
struct qcaspi {scalar_t__ burst_len; TYPE_1__ stats; TYPE_2__* rx_skb; struct net_device* net_dev; int frm_handle; int * rx_buffer; scalar_t__ legacy_mode; } ;
struct net_device_stats {int rx_bytes; int rx_errors; int rx_packets; int rx_dropped; } ;
struct net_device {scalar_t__ mtu; struct net_device_stats stats; } ;
typedef int s32 ;
struct TYPE_7__ {int ip_summed; struct net_device* dev; int protocol; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*,struct net_device*) ;
 void* FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct qcaspi*,int *,scalar_t__) ;
 scalar_t__ FUNC_6 (struct qcaspi*,int *,scalar_t__) ;
 int FUNC_7 (struct qcaspi*,int ,scalar_t__*) ;
 int FUNC_8 (struct qcaspi*,int) ;
 int FUNC_9 (struct qcaspi*,int ,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_12(struct qcaspi *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->net_dev;
 struct net_device_stats *VAR_10 = &VAR_9->stats;
 u16 VAR_11 = 0;
 u32 VAR_12;
 u8 *VAR_13;


 if (!VAR_8->rx_skb) {
  VAR_8->rx_skb = FUNC_1(VAR_9,
       VAR_9->mtu +
       VAR_6);
  if (!VAR_8->rx_skb) {
   FUNC_2(VAR_9, "out of RX resources\n");
   VAR_8->stats.out_of_mem++;
   return -1;
  }
 }


 FUNC_7(VAR_8, VAR_5, &VAR_11);

 FUNC_2(VAR_9, "qcaspi_receive: SPI_REG_RDBUF_BYTE_AVA: Value: %08x\n",
     VAR_11);

 if (VAR_11 > VAR_3) {



  VAR_8->stats.buf_avail_err++;
  return -1;
 } else if (VAR_11 == 0) {
  FUNC_2(VAR_9, "qcaspi_receive called without any data being available!\n");
  return -1;
 }

 FUNC_9(VAR_8, VAR_4, VAR_11, VAR_7);

 if (VAR_8->legacy_mode)
  FUNC_8(VAR_8, VAR_2 | VAR_1);

 while (VAR_11) {
  u32 VAR_14 = VAR_11;

  if (VAR_14 > VAR_8->burst_len)
   VAR_14 = VAR_8->burst_len;

  if (VAR_8->legacy_mode) {
   VAR_12 = FUNC_6(VAR_8, VAR_8->rx_buffer,
       VAR_14);
  } else {
   VAR_12 = FUNC_5(VAR_8, VAR_8->rx_buffer,
             VAR_14);
  }

  FUNC_2(VAR_9, "available: %d, byte read: %d\n",
      VAR_11, VAR_12);

  if (VAR_12) {
   VAR_11 -= VAR_12;
  } else {
   VAR_8->stats.read_err++;
   return -1;
  }

  VAR_13 = VAR_8->rx_buffer;

  while ((VAR_12--) && (VAR_8->rx_skb)) {
   s32 VAR_15;

   VAR_15 = FUNC_4(&VAR_8->frm_handle,
          VAR_8->rx_skb->data,
          FUNC_11(VAR_8->rx_skb),
          *VAR_13);
   VAR_13++;
   switch (VAR_15) {
   case 131:
   case 129:
    break;
   case 128:
    FUNC_2(VAR_9, "no RX tail\n");
    VAR_10->rx_errors++;
    VAR_10->rx_dropped++;
    break;
   case 130:
    FUNC_2(VAR_9, "invalid RX length\n");
    VAR_10->rx_errors++;
    VAR_10->rx_dropped++;
    break;
   default:
    VAR_8->rx_skb->dev = VAR_8->net_dev;
    VAR_10->rx_packets++;
    VAR_10->rx_bytes += VAR_15;
    FUNC_10(VAR_8->rx_skb, VAR_15);
    VAR_8->rx_skb->protocol = FUNC_0(
     VAR_8->rx_skb, VAR_8->rx_skb->dev);
    VAR_8->rx_skb->ip_summed = VAR_0;
    FUNC_3(VAR_8->rx_skb);
    VAR_8->rx_skb = FUNC_1(VAR_9,
     VAR_9->mtu + VAR_6);
    if (!VAR_8->rx_skb) {
     FUNC_2(VAR_9, "out of RX resources\n");
     VAR_10->rx_errors++;
     VAR_8->stats.out_of_mem++;
     break;
    }
   }
  }
 }

 return 0;
}
