
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; int len; int* data; } ;
struct TYPE_8__ {scalar_t__ fulldup; int waittime; } ;
struct TYPE_7__ {int bufsize; scalar_t__ tx_state; int txframes; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; int tx_dropped; } ;
struct scc_channel {int lock; TYPE_4__ kiss; TYPE_3__ stat; int tx_queue; TYPE_2__* dev; TYPE_1__ dev_stat; } ;
struct net_device {scalar_t__ ml_priv; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {scalar_t__ tx_queue_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct scc_channel*,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct scc_channel*,char,int) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct scc_channel *VAR_9 = (struct scc_channel *) VAR_8->ml_priv;
 unsigned long VAR_10;
 char VAR_11;

 if (VAR_7->protocol == FUNC_3(VAR_0))
  return FUNC_1(VAR_7);

 if (VAR_7->len > VAR_9->stat.bufsize || VAR_7->len < 2) {
  VAR_9->dev_stat.tx_dropped++;
  FUNC_2(VAR_7);
  return VAR_2;
 }

 VAR_9->dev_stat.tx_packets++;
 VAR_9->dev_stat.tx_bytes += VAR_7->len;
 VAR_9->stat.txframes++;

 VAR_11 = *VAR_7->data & 0x1f;
 FUNC_7(VAR_7, 1);

 if (VAR_11) {
  FUNC_5(VAR_9, VAR_11, *VAR_7->data);
  FUNC_2(VAR_7);
  return VAR_2;
 }

 FUNC_10(&VAR_9->lock, VAR_10);

 if (FUNC_8(&VAR_9->tx_queue) > VAR_9->dev->tx_queue_len) {
  struct sk_buff *VAR_12;
  VAR_12 = FUNC_6(&VAR_9->tx_queue);
  FUNC_2(VAR_12);
 }
 FUNC_9(&VAR_9->tx_queue, VAR_7);
 FUNC_4(VAR_8);
 if(VAR_9->stat.tx_state == VAR_4 || VAR_9->stat.tx_state == VAR_5) {
  VAR_9->stat.tx_state = VAR_3;
  if (VAR_9->kiss.fulldup == VAR_1)
   FUNC_0(VAR_9, VAR_6, VAR_9->kiss.waittime);
  else
   FUNC_0(VAR_9, VAR_6, 0);
 }
 FUNC_11(&VAR_9->lock, VAR_10);
 return VAR_2;
}
