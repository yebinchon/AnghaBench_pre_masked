
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {size_t head; scalar_t__ count; int size; TYPE_3__** skb; } ;
struct TYPE_9__ {int write_err; int write_buf_miss; int buf_avail_err; } ;
struct qcaspi {TYPE_4__* net_dev; TYPE_2__ txr; TYPE_1__ stats; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct TYPE_12__ {struct net_device_stats stats; } ;
struct TYPE_11__ {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct qcaspi*,int ,scalar_t__*) ;
 int FUNC_6 (struct qcaspi*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_7(struct qcaspi *VAR_3)
{
 struct net_device_stats *VAR_4 = &VAR_3->net_dev->stats;
 u16 VAR_5 = 0;
 u32 VAR_6;
 u16 VAR_7;
 u16 VAR_8 = 0;

 if (VAR_3->txr.skb[VAR_3->txr.head] == ((void*)0))
  return 0;

 FUNC_5(VAR_3, VAR_2, &VAR_5);

 if (VAR_5 > VAR_0) {



  VAR_3->stats.buf_avail_err++;
  return -1;
 }

 while (VAR_3->txr.skb[VAR_3->txr.head]) {
  VAR_6 = VAR_3->txr.skb[VAR_3->txr.head]->len + VAR_1;

  if (VAR_5 < VAR_6) {
   if (VAR_8 == 0)
    VAR_3->stats.write_buf_miss++;
   break;
  }

  if (FUNC_6(VAR_3, VAR_3->txr.skb[VAR_3->txr.head]) == -1) {
   VAR_3->stats.write_err++;
   return -1;
  }

  VAR_8++;
  VAR_4->tx_packets++;
  VAR_4->tx_bytes += VAR_3->txr.skb[VAR_3->txr.head]->len;
  VAR_5 -= VAR_6;





  FUNC_2(VAR_3->net_dev);
  FUNC_0(VAR_3->txr.skb[VAR_3->txr.head]);
  VAR_3->txr.skb[VAR_3->txr.head] = ((void*)0);
  VAR_3->txr.size -= VAR_6;
  VAR_7 = VAR_3->txr.head + 1;
  if (VAR_7 >= VAR_3->txr.count)
   VAR_7 = 0;
  VAR_3->txr.head = VAR_7;
  if (FUNC_1(VAR_3->net_dev))
   FUNC_4(VAR_3->net_dev);
  FUNC_3(VAR_3->net_dev);
 }

 return 0;
}
