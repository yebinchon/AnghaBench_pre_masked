
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct TYPE_2__ {int tx_bytes; int tx_errors; } ;
struct net_device {long base_addr; TYPE_1__ stats; } ;
struct ei_device {int irqlock; int tx1; int tx_start_page; int tx2; int lasttx; int txing; int page_lock; int txqueue; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int,int) ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net_device*,int,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct net_device*,char*,int,int,int) ;
 struct ei_device* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ei_device*,int ,struct net_device*,char*,int,int,int) ;
 scalar_t__ FUNC_8 (struct ei_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (struct sk_buff*,int *,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_7,
       struct net_device *VAR_8)
{
 long VAR_9 = VAR_8->base_addr;
 struct ei_device *VAR_10 = FUNC_6(VAR_8);
 int VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 u8 VAR_15[VAR_2];

 FUNC_10(VAR_8);

 VAR_11 = VAR_7->len;






 FUNC_14(&VAR_10->page_lock, VAR_14);
 FUNC_12(0x00, VAR_9 + VAR_0);





 VAR_10->irqlock = 1;

 VAR_12 = FUNC_3(VAR_11, VAR_2);
 if (VAR_10->tx1 == 0)
 {
  VAR_13 = VAR_10->tx_start_page;
  VAR_10->tx1 = VAR_12;
  if ((FUNC_8(VAR_10)) &&
      VAR_10->tx2 > 0)
   FUNC_5(VAR_8,
       "idle transmitter tx2=%d, lasttx=%d, txing=%d\n",
       VAR_10->tx2, VAR_10->lasttx,
       VAR_10->txing);
 }
 else if (VAR_10->tx2 == 0)
 {
  VAR_13 = VAR_10->tx_start_page + VAR_5/2;
  VAR_10->tx2 = VAR_12;
  if ((FUNC_8(VAR_10)) &&
      VAR_10->tx1 > 0)
   FUNC_5(VAR_8,
       "idle transmitter, tx1=%d, lasttx=%d, txing=%d\n",
       VAR_10->tx1, VAR_10->lasttx,
       VAR_10->txing);
 }
 else
 {
  FUNC_7(VAR_10, VAR_6, VAR_8,
     "No Tx buffers free! tx1=%d tx2=%d last=%d\n",
     VAR_10->tx1, VAR_10->tx2,
     VAR_10->lasttx);
  VAR_10->irqlock = 0;
  FUNC_10(VAR_8);
  FUNC_12(VAR_1, VAR_9 + VAR_0);
  FUNC_15(&VAR_10->page_lock, VAR_14);
  VAR_8->stats.tx_errors++;
  return VAR_3;
 }







 if (VAR_11 == VAR_7->len)
  FUNC_2(VAR_8, VAR_11, VAR_7->data, VAR_13);
 else {
  FUNC_4(VAR_15, 0, VAR_2);
  FUNC_13(VAR_7, VAR_15, VAR_7->len);
  FUNC_2(VAR_8, VAR_11, VAR_15, VAR_13);
 }

 if (! VAR_10->txing)
 {
  VAR_10->txing = 1;
  FUNC_0(VAR_8, VAR_12, VAR_13);
  FUNC_11(VAR_8);
  if (VAR_13 == VAR_10->tx_start_page)
  {
   VAR_10->tx1 = -1;
   VAR_10->lasttx = -1;
  }
  else
  {
   VAR_10->tx2 = -1;
   VAR_10->lasttx = -2;
  }
 }
 else VAR_10->txqueue++;

 if (VAR_10->tx1 && VAR_10->tx2)
  FUNC_10(VAR_8);
 else
  FUNC_9(VAR_8);


 VAR_10->irqlock = 0;
 FUNC_12(VAR_1, VAR_9 + VAR_0);

 FUNC_15(&VAR_10->page_lock, VAR_14);

 FUNC_1 (VAR_7);
 VAR_8->stats.tx_bytes += VAR_12;

 return VAR_4;
}
