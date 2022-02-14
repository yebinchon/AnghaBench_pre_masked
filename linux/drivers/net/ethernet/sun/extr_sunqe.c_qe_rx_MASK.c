
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sunqe_buffers {unsigned char** rx_buf; } ;
struct sunqe {int rx_new; struct net_device* dev; int buffers_dvma; struct sunqe_buffers* buffers; TYPE_1__* qe_block; } ;
struct sk_buff {int protocol; } ;
struct qe_rxd {int rx_flags; scalar_t__ rx_addr; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {struct qe_rxd* qe_rxd; } ;
typedef int RXD_PKT_SZ ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct sunqe *VAR_6)
{
 struct qe_rxd *VAR_7 = &VAR_6->qe_block->qe_rxd[0];
 struct net_device *VAR_8 = VAR_6->dev;
 struct qe_rxd *VAR_9;
 struct sunqe_buffers *VAR_10 = VAR_6->buffers;
 __u32 VAR_11 = (__u32)VAR_6->buffers_dvma;
 int VAR_12 = VAR_6->rx_new;
 u32 VAR_13;

 VAR_9 = &VAR_7[VAR_12];
 while (!((VAR_13 = VAR_9->rx_flags) & VAR_2)) {
  struct sk_buff *VAR_14;
  unsigned char *VAR_15 =
   &VAR_10->rx_buf[VAR_12 & (VAR_4 - 1)][0];
  __u32 VAR_16 = VAR_11 +
   FUNC_4(VAR_5, (VAR_12 & (VAR_4 - 1)));
  struct qe_rxd *VAR_17 =
   &VAR_7[(VAR_12+VAR_4)&(VAR_3-1)];
  int VAR_18 = (VAR_13 & VAR_1) - 4;


  if (VAR_18 < VAR_0) {
   VAR_8->stats.rx_errors++;
   VAR_8->stats.rx_length_errors++;
   VAR_8->stats.rx_dropped++;
  } else {
   VAR_14 = FUNC_2(VAR_8, VAR_18 + 2);
   if (VAR_14 == ((void*)0)) {
    VAR_8->stats.rx_dropped++;
   } else {
    FUNC_7(VAR_14, 2);
    FUNC_6(VAR_14, VAR_18);
    FUNC_5(VAR_14, VAR_15,
       VAR_18);
    VAR_14->protocol = FUNC_1(VAR_14, VAR_6->dev);
    FUNC_3(VAR_14);
    VAR_8->stats.rx_packets++;
    VAR_8->stats.rx_bytes += VAR_18;
   }
  }
  VAR_17->rx_addr = VAR_16;
  VAR_17->rx_flags = (VAR_2 | ((RXD_PKT_SZ) & VAR_1));

  VAR_12 = FUNC_0(VAR_12);
  VAR_9 = &VAR_7[VAR_12];
 }
 VAR_6->rx_new = VAR_12;
}
