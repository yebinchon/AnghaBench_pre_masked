
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int protocol; int ip_summed; scalar_t__ data; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; int rx_errors; int rx_dropped; int rx_over_errors; int rx_length_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct bcm_sysport_stats64 {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {unsigned int packets; unsigned int bytes; } ;
struct bcm_sysport_priv {unsigned int rx_c_index; size_t rx_read_ptr; size_t num_rx_bds; TYPE_2__ dim; int napi; int syncp; scalar_t__ crc_fwd; struct bcm_sysport_cb* rx_cbs; int is_lite; struct net_device* netdev; struct bcm_sysport_stats64 stats64; } ;
struct bcm_sysport_cb {int dummy; } ;
struct bcm_rsb {int rx_status_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct sk_buff* FUNC_0 (struct bcm_sysport_priv*,struct bcm_sysport_cb*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (struct bcm_sysport_priv*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct bcm_sysport_priv*,int ,struct net_device*,char*,unsigned int,unsigned int,size_t,...) ;
 int FUNC_7 (struct bcm_sysport_priv*,int ,struct net_device*,char*) ;
 unsigned int FUNC_8 (struct bcm_sysport_priv*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static unsigned int FUNC_15(struct bcm_sysport_priv *VAR_20,
     unsigned int VAR_21)
{
 struct bcm_sysport_stats64 *VAR_22 = &VAR_20->stats64;
 struct net_device *VAR_23 = VAR_20->netdev;
 unsigned int VAR_24 = 0, VAR_25;
 unsigned int VAR_26 = 0;
 struct bcm_sysport_cb *VAR_27;
 struct sk_buff *VAR_28;
 unsigned int VAR_29;
 u16 VAR_30, VAR_31;
 struct bcm_rsb *VAR_32;


 FUNC_3(VAR_20, VAR_9, VAR_10);





 if (!VAR_20->is_lite)
  VAR_29 = FUNC_8(VAR_20, VAR_13);
 else
  VAR_29 = FUNC_8(VAR_20, VAR_11);
 VAR_29 &= VAR_14;

 VAR_25 = (VAR_29 - VAR_20->rx_c_index) & VAR_12;

 FUNC_6(VAR_20, VAR_19, VAR_23,
    "p_index=%d rx_c_index=%d to_process=%d\n",
    VAR_29, VAR_20->rx_c_index, VAR_25);

 while ((VAR_24 < VAR_25) && (VAR_24 < VAR_21)) {
  VAR_27 = &VAR_20->rx_cbs[VAR_20->rx_read_ptr];
  VAR_28 = FUNC_0(VAR_20, VAR_27);







  if (FUNC_14(!VAR_28)) {
   FUNC_7(VAR_20, VAR_18, VAR_23, "out of memory!\n");
   VAR_23->stats.rx_dropped++;
   VAR_23->stats.rx_errors++;
   goto next;
  }


  VAR_32 = (struct bcm_rsb *)VAR_28->data;
  VAR_30 = (VAR_32->rx_status_len >> VAR_4) & VAR_3;
  VAR_31 = (VAR_32->rx_status_len >> VAR_7) &
     VAR_6;

  FUNC_6(VAR_20, VAR_19, VAR_23,
     "p=%d, c=%d, rd_ptr=%d, len=%d, flag=0x%04x\n",
     VAR_29, VAR_20->rx_c_index, VAR_20->rx_read_ptr,
     VAR_30, VAR_31);

  if (FUNC_14(VAR_30 > VAR_15)) {
   FUNC_7(VAR_20, VAR_19, VAR_23, "oversized packet\n");
   VAR_23->stats.rx_length_errors++;
   VAR_23->stats.rx_errors++;
   FUNC_1(VAR_28);
   goto next;
  }

  if (FUNC_14(!(VAR_31 & VAR_1) || !(VAR_31 & VAR_5))) {
   FUNC_7(VAR_20, VAR_19, VAR_23, "fragmented packet!\n");
   VAR_23->stats.rx_dropped++;
   VAR_23->stats.rx_errors++;
   FUNC_1(VAR_28);
   goto next;
  }

  if (FUNC_14(VAR_31 & (VAR_16 | VAR_17))) {
   FUNC_7(VAR_20, VAR_18, VAR_23, "error packet\n");
   if (VAR_31 & VAR_17)
    VAR_23->stats.rx_over_errors++;
   VAR_23->stats.rx_dropped++;
   VAR_23->stats.rx_errors++;
   FUNC_1(VAR_28);
   goto next;
  }

  FUNC_10(VAR_28, VAR_30);


  if (FUNC_4(VAR_31 & VAR_2))
   VAR_28->ip_summed = VAR_0;





  FUNC_9(VAR_28, sizeof(*VAR_32) + 2);
  VAR_30 -= (sizeof(*VAR_32) + 2);
  VAR_26 += VAR_30;


  if (VAR_20->crc_fwd) {
   FUNC_11(VAR_28, VAR_30 - VAR_8);
   VAR_30 -= VAR_8;
  }

  VAR_28->protocol = FUNC_2(VAR_28, VAR_23);
  VAR_23->stats.rx_packets++;
  VAR_23->stats.rx_bytes += VAR_30;
  FUNC_12(&VAR_20->syncp);
  VAR_22->rx_packets++;
  VAR_22->rx_bytes += VAR_30;
  FUNC_13(&VAR_20->syncp);

  FUNC_5(&VAR_20->napi, VAR_28);
next:
  VAR_24++;
  VAR_20->rx_read_ptr++;

  if (VAR_20->rx_read_ptr == VAR_20->num_rx_bds)
   VAR_20->rx_read_ptr = 0;
 }

 VAR_20->dim.packets = VAR_24;
 VAR_20->dim.bytes = VAR_26;

 return VAR_24;
}
