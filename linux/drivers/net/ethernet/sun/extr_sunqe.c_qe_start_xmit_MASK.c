
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sunqe_buffers {unsigned char** tx_buf; } ;
struct sunqe {int tx_new; int lock; scalar_t__ qcregs; TYPE_2__* qe_block; int buffers_dvma; struct sunqe_buffers* buffers; } ;
struct sk_buff {int len; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_3__ stats; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ __u32 ;
struct TYPE_5__ {TYPE_1__* qe_txd; } ;
struct TYPE_4__ {int tx_flags; scalar_t__ tx_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct sunqe*) ;
 int VAR_9 ;
 int FUNC_2 (struct sk_buff*) ;
 struct sunqe* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sunqe*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_10 ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct sunqe *VAR_13 = FUNC_3(VAR_12);
 struct sunqe_buffers *VAR_14 = VAR_13->buffers;
 __u32 VAR_15, VAR_16 = (__u32)VAR_13->buffers_dvma;
 unsigned char *VAR_17;
 int VAR_18, VAR_19;

 FUNC_9(&VAR_13->lock);

 FUNC_5(VAR_13);

 VAR_18 = VAR_11->len;
 VAR_19 = VAR_13->tx_new;

 VAR_17 = &VAR_14->tx_buf[VAR_19 & (VAR_9 - 1)][0];
 VAR_15 = VAR_16 +
  FUNC_6(VAR_10, (VAR_19 & (VAR_9 - 1)));


 VAR_13->qe_block->qe_txd[VAR_19].tx_flags = VAR_8;

 FUNC_8(VAR_11, VAR_17, VAR_18);

 VAR_13->qe_block->qe_txd[VAR_19].tx_addr = VAR_15;
 VAR_13->qe_block->qe_txd[VAR_19].tx_flags =
  (VAR_6 | VAR_7 | VAR_4 | (VAR_18 & VAR_5));
 VAR_13->tx_new = FUNC_0(VAR_19);


 FUNC_7(VAR_1, VAR_13->qcregs + VAR_0);

 VAR_12->stats.tx_packets++;
 VAR_12->stats.tx_bytes += VAR_18;

 if (FUNC_1(VAR_13) <= 0) {





  FUNC_4(VAR_12);
  FUNC_7(0, VAR_13->qcregs + VAR_2);
 }
 FUNC_10(&VAR_13->lock);

 FUNC_2(VAR_11);

 return VAR_3;
}
