
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int ring_full; int out_of_mem; } ;
struct TYPE_6__ {size_t tail; int count; struct sk_buff** skb; int size; } ;
struct qcaspi {TYPE_2__* spi_thread; TYPE_1__ stats; int net_dev; TYPE_3__ txr; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 struct qcaspi* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__) ;
 int FUNC_8 (TYPE_3__*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__* FUNC_11 (struct sk_buff*,scalar_t__) ;
 scalar_t__* FUNC_12 (struct sk_buff*,scalar_t__) ;
 scalar_t__* FUNC_13 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static netdev_tx_t
FUNC_16(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 u32 VAR_10;
 u8 *VAR_11;
 struct qcaspi *VAR_12 = FUNC_2(VAR_9);
 u16 VAR_13;
 struct sk_buff *VAR_14;
 u8 VAR_15 = 0;

 if (VAR_8->len < VAR_5)
  VAR_15 = VAR_5 - VAR_8->len;

 if (VAR_12->txr.skb[VAR_12->txr.tail]) {
  FUNC_3(VAR_12->net_dev, "queue was unexpectedly full!\n");
  FUNC_4(VAR_12->net_dev);
  VAR_12->stats.ring_full++;
  return VAR_1;
 }

 if ((FUNC_10(VAR_8) < VAR_4) ||
     (FUNC_14(VAR_8) < VAR_3 + VAR_15)) {
  VAR_14 = FUNC_9(VAR_8, VAR_4,
           VAR_3 + VAR_15, VAR_0);
  if (!VAR_14) {
   VAR_12->stats.out_of_mem++;
   return VAR_1;
  }
  FUNC_0(VAR_8);
  VAR_8 = VAR_14;
 }

 VAR_10 = VAR_8->len + VAR_15;

 VAR_11 = FUNC_11(VAR_8, VAR_4);
 FUNC_7(VAR_11, VAR_10);

 if (VAR_15) {
  VAR_11 = FUNC_13(VAR_8, VAR_15);
 }

 VAR_11 = FUNC_12(VAR_8, VAR_3);
 FUNC_6(VAR_11);

 FUNC_1(VAR_12->net_dev, "Tx-ing packet: Size: 0x%08x\n",
     VAR_8->len);

 VAR_12->txr.size += VAR_8->len + VAR_6;

 VAR_13 = VAR_12->txr.tail + 1;
 if (VAR_13 >= VAR_12->txr.count)
  VAR_13 = 0;

 VAR_12->txr.skb[VAR_12->txr.tail] = VAR_8;
 VAR_12->txr.tail = VAR_13;

 if (!FUNC_8(&VAR_12->txr)) {
  FUNC_4(VAR_12->net_dev);
  VAR_12->stats.ring_full++;
 }

 FUNC_5(VAR_9);

 if (VAR_12->spi_thread &&
     VAR_12->spi_thread->state != VAR_7)
  FUNC_15(VAR_12->spi_thread);

 return VAR_2;
}
