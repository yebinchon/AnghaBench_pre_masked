
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_dma {int buff_stat; int len; int status; } ;
struct sk_buff {int len; int data; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct db_dest {int dma_addr; scalar_t__ vaddr; } ;
struct au1000_private {size_t tx_head; int tx_full; struct db_dest** tx_db_inuse; struct tx_dma** tx_dma_ring; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct au1000_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct au1000_private*,int ,struct net_device*,char*,unsigned int,int,int ,size_t) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,void*,int) ;
 int VAR_6 ;
 int FUNC_7 () ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct au1000_private *VAR_9 = FUNC_2(VAR_8);
 struct net_device_stats *VAR_10 = &VAR_8->stats;
 struct tx_dma *VAR_11;
 u32 VAR_12;
 struct db_dest *VAR_13;
 int VAR_14;

 FUNC_3(VAR_9, VAR_6, VAR_8, "tx: aup %x len=%d, data=%p, head %d\n",
    (unsigned)VAR_9, VAR_7->len,
    VAR_7->data, VAR_9->tx_head);

 VAR_11 = VAR_9->tx_dma_ring[VAR_9->tx_head];
 VAR_12 = VAR_11->buff_stat;
 if (VAR_12 & VAR_4) {

  FUNC_4(VAR_8);
  VAR_9->tx_full = 1;
  return VAR_1;
 } else if (VAR_12 & VAR_5) {
  FUNC_0(VAR_8, VAR_11->status);
  VAR_11->len = 0;
 }

 if (VAR_9->tx_full) {
  VAR_9->tx_full = 0;
  FUNC_5(VAR_8);
 }

 VAR_13 = VAR_9->tx_db_inuse[VAR_9->tx_head];
 FUNC_6(VAR_7, (void *)VAR_13->vaddr, VAR_7->len);
 if (VAR_7->len < VAR_0) {
  for (VAR_14 = VAR_7->len; VAR_14 < VAR_0; VAR_14++)
   ((char *)VAR_13->vaddr)[VAR_14] = 0;

  VAR_11->len = VAR_0;
 } else
  VAR_11->len = VAR_7->len;

 VAR_10->tx_packets++;
 VAR_10->tx_bytes += VAR_11->len;

 VAR_11->buff_stat = VAR_13->dma_addr | VAR_4;
 FUNC_7();
 FUNC_1(VAR_7);
 VAR_9->tx_head = (VAR_9->tx_head + 1) & (VAR_3 - 1);
 return VAR_2;
}
